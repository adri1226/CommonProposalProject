#include "UseCaseSignal.hpp"

namespace device
{
namespace model
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
} // namespace model
} // namespace device
