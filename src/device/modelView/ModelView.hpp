#ifndef MODELVIEW_HPP
#define MODELVIEW_HPP

#include <memory>

#include <src/device/model/Model.hpp>
#include <src/device/modelView/signal/UseCaseSignal.hpp>
#include <src/device/viewCommunication/signal/UseCaseSignal.hpp>

#include <src/utils/SignalPublisher.hpp>
#include <src/utils/SignalSubscriber.hpp>

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

#endif // MODELVIEW_HPP
