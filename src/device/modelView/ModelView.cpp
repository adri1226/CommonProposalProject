#include "ModelView.hpp"

namespace device
{
namespace modelView
{

ModelView::ModelView(std::shared_ptr<device::model::Model> model)
  : mModel(model)
{

}

void ModelView::action(bool data)
{
  dispatchAction(data);
}

void ModelView::recievedSignal(device::viewCommunication::signal::UseCaseSignal signal)
{
  int data = signal.getData();
  mModel->setData(data);
}

void ModelView::dispatchAction(bool data)
{
  signal::UseCaseSignal signal(data);
  dispatch(signal);
}

} // namespace modelView
} // namespace device
