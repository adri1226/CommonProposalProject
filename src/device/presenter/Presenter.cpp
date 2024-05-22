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
  dispatchUpdated(data);
}

void Presenter::pressed(bool data)
{
  mController->action(data);
}

void Presenter::dispatchUpdated(int data)
{
  signal::UseCaseSignal signal(data);
  dispatch(data);
}


} // namespace presenter
} // namespace device
