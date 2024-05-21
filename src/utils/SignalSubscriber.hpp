#ifndef UTILS_SIGNALSUBSCRIBER_HPP
#define UTILS_SIGNALSUBSCRIBER_HPP

namespace utils
{

template <class TSignal>
class SignalSubscriber
{
  public:
    SignalSubscriber() = default;

    virtual ~SignalSubscriber() {}

    virtual void recievedSignal(TSignal signal) = 0;
};

}  // namespace utils

#endif  // UTILS_SIGNALSUBSCRIBER_HPP
