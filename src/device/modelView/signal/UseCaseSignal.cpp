#include "UseCaseSignal.hpp"

namespace device
{
namespace modelView
{
namespace signal
{

UseCaseSignal::UseCaseSignal(bool data): mData(data)
{

}

bool UseCaseSignal::getData() const
{
  return mData;
}

} // namespace signal
} // namespace modelView
} // namespace device
