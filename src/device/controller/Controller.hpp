#ifndef DEVICE_CONTROLLER_CONTROLLER_HPP
#define DEVICE_CONTROLLER_CONTROLLER_HPP

#include <memory>

#include <src/device/model/Model.hpp>
#include <src/device/modelView/ModelView.hpp>

namespace device
{
namespace controller
{

class Controller
{
  public:
    Controller(std::shared_ptr<const device::model::Model> model,
               std::shared_ptr<device::modelView::ModelView> modelView);

    void doAction(bool data);

  private:
    std::shared_ptr<const device::model::Model> mModel;
    std::shared_ptr<device::modelView::ModelView> mModelView;
};

} // namespace controller
} // namespace device

#endif // DEVICE_CONTROLLER_CONTROLLER_HPP
