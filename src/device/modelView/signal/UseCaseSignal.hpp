#ifndef DEVICE_MODELVIEW_SIGNAL_USECASESIGNAL_HPP
#define DEVICE_MODELVIEW_SIGNAL_USECASESIGNAL_HPP

namespace device
{
namespace modelView
{
namespace signal
{

class UseCaseSignal
{
  public:
    UseCaseSignal(int data);

    int getData() const;

  private:
    int mData;
};

} // namespace signal
} // namespace modelView
} // namespace device

#endif // DEVICE_MODELVIEW_SIGNAL_USECASESIGNAL_HPP
