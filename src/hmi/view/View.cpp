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

}  // namespace view
}  // namespace hmi
