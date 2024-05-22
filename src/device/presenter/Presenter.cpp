#include "Presenter.hpp"

namespace device
{
namespace presenter
{

Presenter::Presenter(std::shared_ptr<const model::Model> model,
                     std::shared_ptr<controller::Controller> controller)
  : mModel(model)
  , mController(controller)
{

}

void Presenter::recievedSignal(model::signal::UseCaseSignal signal)
{
  int data = signal.getData();
  dispatch(data);
}

void Presenter::action(bool data)
{
  mController->doAction(data);
}

void Presenter::dispatch(int data)
{
  signal::UseCaseSignal signal(data);
  notifySubscribers(signal);
}


} // namespace presenter
} // namespace device
