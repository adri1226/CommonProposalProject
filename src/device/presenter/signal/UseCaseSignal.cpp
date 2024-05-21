#include "UseCaseSignal.hpp"

namespace device
{
namespace presenter
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
} // namespace modelView
} // namespace device
