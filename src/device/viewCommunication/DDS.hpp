#ifndef DDS_HPP
#define DDS_HPP

#include <atomic>
#include <thread>

#include <src/idl/CommonProposalProject.hpp>
#include <src/device/viewCommunication/signal/UseCaseSignal.hpp>
#include <src/device/modelView/signal/UseCaseSignal.hpp>

#include <src/utils/DDSDataReader.hpp>
#include <src/utils/DDSDataWriter.hpp>
#include <src/utils/DDSView.hpp>
#include <src/utils/SignalPublisher.hpp>
#include <src/utils/SignalSubscriber.hpp>

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
    void sendSignal(int data);
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
