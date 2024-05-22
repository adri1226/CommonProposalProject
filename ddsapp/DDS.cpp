#include "DDS.hpp"

DDS::DDS(unsigned int domainId, unsigned int sampleCount)
  : utils::DDSView(domainId, sampleCount)
  , mReaderSendAction(createDataReader<SendAction>(
                        SEND_ACTION_TOPIC, std::bind(&DDS::recievedTopicSendAction, this, std::placeholders::_1)))
  , mWriterRecieveData(createrDataWriter<RecieveData>(RECIEVE_DATA_TOPIC))
{
  mThreadsForReading[SEND_ACTION_TOPIC] = std::thread(&DDS::readingTopicSendAction, this);
  mRunning = true;
}

DDS::~DDS()
{
  mRunning = false;
}

void DDS::readingTopicSendAction()
{
  while(mRunning)
  {
    mReaderSendAction.wait(mWait);
  }
}

void DDS::recievedTopicSendAction(SendAction sendAction)
{
  std::cout << "SendAction topic recieved: " << sendAction << std::endl;

  int number = randomNumber();
  writeTopicRecieveData(number);
}

void DDS::writeTopicRecieveData(int data)
{
  RecieveData sampleRecievedData(data);
  mWriterRecieveData.write(sampleRecievedData);

  std::cout << "sample RecievedData sended: \n\t[data: " << sampleRecievedData.data() <<"]" << std::endl;
}

int DDS::randomNumber()
{
  std::srand(static_cast<unsigned>(std::time(nullptr)));
  return std::rand() % 100 + 1;
}
