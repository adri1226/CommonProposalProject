#ifndef DEVICE_MODEL_MODEL_HPP
#define DEVICE_MODEL_MODEL_HPP

#include <device/model/signal/UseCaseSignal.hpp>
#include <utils/SignalPublisher.hpp>

namespace device
{
namespace model
{

class Model : public utils::SignalPublisher<device::model::signal::UseCaseSignal>
{
  public:
    Model();

    int getData() const;
    void setData(int newValue);

  private:
    void dispatchUpdated();

    int mData;
};

} // namespace model
} // namespace device

#endif // DEVICE_MODEL_MODEL_HPP
