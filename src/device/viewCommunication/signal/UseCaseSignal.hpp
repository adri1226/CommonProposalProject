#ifndef DEVICE_VIEWCOMMUNICATION_SIGNAL_USECASESIGNAL_HPP
#define DEVICE_VIEWCOMMUNICATION_SIGNAL_USECASESIGNAL_HPP

namespace device
{
namespace viewCommunication
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
} // namespace viewCommunication
} // namespace device

#endif // DEVICE_VIEWCOMMUNICATION_SIGNAL_USECASESIGNAL_HPP
