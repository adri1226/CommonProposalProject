#ifndef DDS_HPP
#define DDS_HPP

#include <atomic>
#include <thread>

#include <idl/CommonProposalProject.hpp>
#include <device/viewCommunication/signal/UseCaseSignal.hpp>
#include <device/modelView/signal/UseCaseSignal.hpp>

#include <utils/DDSDataReader.hpp>
#include <utils/DDSDataWriter.hpp>
#include <utils/DDSView.hpp>
#include <utils/SignalPublisher.hpp>
#include <utils/SignalSubscriber.hpp>

namespace device
{
namespace viewCommunication
{

class DDS :
    public utils::DDSView,
    public utils::SignalPublisher<device::viewCommunication::signal::UseCaseSignal>,
    public utils::SignalSubscriber<device::modelView::signal::UseCaseSignal>
{
  public:
    DDS(unsigned int domainId, unsigned int sampleCount);
    ~DDS();

    void recievedSignal(device::modelView::signal::UseCaseSignal signal) override;

  private:
    void dispatchUpdated(int data);
    void readingTopicRecieveData();
    void dispatchTopicRecieveData(RecieveData recieveData);
    void writeTopicSendAction(bool data);

    utils::DDSDataReader<RecieveData> mReaderRecieveData;
    utils::DDSDataWriter<SendAction> mWriterSendAction;
    std::atomic<bool> mRunning;
};

} // namespace viewCommunication
} // namespace device

#endif // DDS_HPP
