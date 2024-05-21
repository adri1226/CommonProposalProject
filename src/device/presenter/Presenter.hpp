#ifndef PRESENTER_HPP
#define PRESENTER_HPP

#include <memory>

#include <src/device/controller/Controller.hpp>
#include <src/device/model/Model.hpp>
#include <src/device/model/signal/UseCaseSignal.hpp>
#include <src/device/presenter/signal/UseCaseSignal.hpp>

#include <src/utils/SignalPublisher.hpp>

namespace device
{
namespace presenter
{

class Presenter :
    public utils::SignalPublisher<device::presenter::signal::UseCaseSignal>,
    public utils::SignalSubscriber<device::model::signal::UseCaseSignal>
{
  public:
    Presenter(std::shared_ptr<const device::model::Model> model,
              std::shared_ptr<device::controller::Controller> controller);

    void recievedSignal(device::model::signal::UseCaseSignal signal) override;
    void action(int data);

  private:
    void dispatch(int data);

    std::shared_ptr<const device::model::Model> mModel;
    std::shared_ptr<device::controller::Controller> mController;
};

} // namespace presenter
} // namespace device

#endif // PRESENTER_HPP
