#ifndef UTILS_SIGNALPUBLISHER_HPP
#define UTILS_SIGNALPUBLISHER_HPP

#include <algorithm>
#include <memory>
#include <vector>

#include <src/utils/SignalSubscriber.hpp>

namespace utils
{

template <class TSignal>
class SignalPublisher
{
  public:
    SignalPublisher() = default;

    void addSubscriber(std::weak_ptr<SignalSubscriber<TSignal>> subscriber)
    {
      mSubscribers.push_back(subscriber);
    }

    void removeSubscriber(std::weak_ptr<SignalSubscriber<TSignal>> subscriber)
    {
      mSubscribers.erase(
          std::remove(mSubscribers.begin(), mSubscribers.end(), *subscriber), mSubscribers.end());
    }

    void notifySubscribers(TSignal signal)
    {
      for (auto subscriber : mSubscribers)
      {
        if (!subscriber.expired())
        {
          subscriber.lock()->recievedSignal(signal);
        }
      }
    }

  private:
    std::vector<std::weak_ptr<SignalSubscriber<TSignal>>> mSubscribers;
};

}  // namespace utils

#endif  // UTILS_SIGNALPUBLISHER_HPP
