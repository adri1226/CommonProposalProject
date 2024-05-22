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
    UseCaseSignal(bool data);

    bool getData() const;

  private:
    bool mData;
};

} // namespace signal
} // namespace modelView
} // namespace device

#endif // DEVICE_MODELVIEW_SIGNAL_USECASESIGNAL_HPP
