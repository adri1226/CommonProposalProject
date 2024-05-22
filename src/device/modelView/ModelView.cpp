#include "ModelView.hpp"

namespace device
{
namespace modelView
{

ModelView::ModelView(std::shared_ptr<device::model::Model> model)
  : mModel(model)
{

}

void ModelView::dispatchAction(bool data)
{
  signal::UseCaseSignal signal(data);
  notifySubscribers(signal);
}

void ModelView::recievedSignal(device::viewCommunication::signal::UseCaseSignal signal)
{
  int data = signal.getData();
  mModel->setData(data);
}

} // namespace modelView
} // namespace device
