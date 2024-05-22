#include "Model.hpp"

namespace device
{
namespace model
{

Model::Model()
{

}

int Model::getData() const
{
  return mData;
}

void Model::setData(int newValue)
{
  mData = newValue;
  sendSignal();
}

void Model::sendSignal()
{
  signal::UseCaseSignal signal(mData);
  notifySubscribers(signal);
}

} // namespace model
} // namespace device
