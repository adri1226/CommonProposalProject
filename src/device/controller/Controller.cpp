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

void Controller::action(bool data)
{
  mModel->consult();
  mModelView->action(data);
}

} // namespace controller
} // namespace device
