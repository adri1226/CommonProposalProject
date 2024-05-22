#ifndef DDS_HPP
#define DDS_HPP

#include <atomic>
#include <thread>
#include <cstdlib>
#include <ctime>

#include <utils/DDSDataReader.hpp>
#include <utils/DDSDataWriter.hpp>
#include <utils/DDSView.hpp>
#include <utils/SignalPublisher.hpp>
#include <utils/SignalSubscriber.hpp>
#include <idl/CommonProposalProject.hpp>

class DDS:
    public utils::DDSView
{
  public:
    DDS(unsigned int domainId, unsigned int sampleCount);
    ~DDS();

  private:
    void readingTopicSendAction();
    void recievedTopicSendAction(SendAction sendAction);
    void writeTopicRecieveData(int data);
    int randomNumber();

    utils::DDSDataReader<SendAction> mReaderSendAction;
    utils::DDSDataWriter<RecieveData> mWriterRecieveData;
    std::atomic<bool> mRunning;
};

#endif // DDS_HPP
