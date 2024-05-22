#ifndef DEVICE_MODELVIEW_MODELVIEW_HPP
#define DEVICE_MODELVIEW_MODELVIEW_HPP

#include <memory>

#include <device/model/Model.hpp>
#include <device/modelView/signal/UseCaseSignal.hpp>
#include <device/viewCommunication/signal/UseCaseSignal.hpp>

#include <utils/SignalPublisher.hpp>
#include <utils/SignalSubscriber.hpp>

namespace device
{
namespace modelView
{

class ModelView :
    public utils::SignalPublisher<device::modelView::signal::UseCaseSignal>,
    public utils::SignalSubscriber<device::viewCommunication::signal::UseCaseSignal>
{
  public:
    ModelView(std::shared_ptr<device::model::Model> model);

    void action(bool data);
    void recievedSignal(device::viewCommunication::signal::UseCaseSignal signal) override;

  private:
    void dispatchAction(bool data);

    std::shared_ptr<device::model::Model> mModel;
};

} // namespace modelView
} // namespace device

#endif // DEVICE_MODELVIEW_MODELVIEW_HPP
