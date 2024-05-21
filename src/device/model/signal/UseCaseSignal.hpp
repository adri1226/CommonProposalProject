#ifndef DEVICE_MODEL_SIGNAL_USECASESIGNAL_HPP
#define DEVICE_MODEL_SIGNAL_USECASESIGNAL_HPP

namespace device
{
namespace model
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
} // namespace model
} // namespace device

#endif // DEVICE_MODEL_SIGNAL_USECASESIGNAL_HPP
