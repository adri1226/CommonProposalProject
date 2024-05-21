#ifndef DEVICE_PRESENTER_SIGNAL_USECASESIGNAL_HPP
#define DEVICE_PRESENTER_SIGNAL_USECASESIGNAL_HPP

namespace device
{
namespace presenter
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
} // namespace presenter
} // namespace device

#endif // DEVICE_PRESENTER_SIGNAL_USECASESIGNAL_HPP
