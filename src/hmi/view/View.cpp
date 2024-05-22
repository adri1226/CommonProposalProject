#include "View.hpp"

namespace hmi
{
namespace view
{

View::View(std::shared_ptr<device::presenter::Presenter> presenter)
  : mPresenter(presenter)
{

}

void View::pressed()
{
  bool isPressed = true;

  mPresenter->action(isPressed);
}

void View::recievedSignal(device::presenter::signal::UseCaseSignal signal)
{

}

}  // namespace view
}  // namespace hmi
