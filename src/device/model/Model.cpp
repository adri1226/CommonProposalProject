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
  dispatchUpdated();
}

void Model::dispatchUpdated()
{
  signal::UseCaseSignal signal(mData);
  dispatch(signal);
}

} // namespace model
} // namespace device
