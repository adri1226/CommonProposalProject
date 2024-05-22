#include "View.hpp"

namespace hmi
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

}  // namespace hmi
