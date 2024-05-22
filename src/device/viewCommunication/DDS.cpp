#include "DDS.hpp"

namespace device
{
namespace viewCommunication
{

DDS::DDS(unsigned int domainId, unsigned int sampleCount)
    : utils::DDSView(domainId, sampleCount)
    , mReaderRecieveData(createDataReader<RecieveData>(
        RECIEVE_DATA_TOPIC, std::bind(&DDS::dispatchTopicRecieveData, this, std::placeholders::_1)))
    , mWriterSendAction(createrDataWriter<SendAction>(SEND_ACTION_TOPIC))
    , mRunning(true)
{
  mThreadsForReading[RECIEVE_DATA_TOPIC] = std::thread(&DDS::readingTopicRecieveData, this);
}

DDS::~DDS()
{
  mRunning = false;
}

void DDS::recievedSignal(modelView::signal::UseCaseSignal signal)
{
  writeTopicSendAction(signal.getData());
}

void device::viewCommunication::DDS::sendSignal(int data)
{
  signal::UseCaseSignal signal(data);
  notifySubscribers(signal);
}

void DDS::readingTopicRecieveData()
{
  while(mRunning)
  {
    mReaderRecieveData.wait(mWait);
  }
}

void DDS::dispatchTopicRecieveData(RecieveData recieveData)
{
  std::cout << "RecieveData topic recieved: " << recieveData << std::endl;
  sendSignal(recieveData.data());
}

void DDS::writeTopicSendAction(bool data)
{
  SendAction sampleSendAction(data);
  mWriterSendAction.write(sampleSendAction);
  std::cout << std::boolalpha << "sample SendAction sended: \n\t[data: " << sampleSendAction.data() << "]"
            << std::endl;
}

} // namespace viewCommunication
} // namespace device
