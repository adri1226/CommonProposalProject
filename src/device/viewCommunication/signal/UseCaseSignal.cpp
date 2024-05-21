#include "UseCaseSignal.hpp"

namespace device
{
namespace viewCommunication
{
namespace signal
{

UseCaseSignal::UseCaseSignal(int data): mData(data)
{

}

int UseCaseSignal::getData() const
{
  return mData;
}

} // namespace signal
} // namespace viewCommunication
} // namespace device
