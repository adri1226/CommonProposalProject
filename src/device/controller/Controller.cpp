#include "Controller.hpp"

namespace device
{
namespace controller
{

Controller::Controller(std::shared_ptr<const model::Model> model, std::shared_ptr<modelView::ModelView> modelView)
  : mModel(model)
  , mModelView(modelView)
{

}

void Controller::doAction(bool data)
{
  mModel->getData();
  mModelView->dispatchAction(data);
}

} // namespace controller
} // namespace device
