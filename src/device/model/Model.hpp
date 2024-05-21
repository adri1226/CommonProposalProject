#ifndef DEVICE_MODEL_MODEL_HPP
#define DEVICE_MODEL_MODEL_HPP

#include <src/device/model/signal/UseCaseSignal.hpp>
#include <src/utils/SignalPublisher.hpp>

namespace device
{
namespace model
{

class Model : public utils::SignalPublisher<device::model::signal::UseCaseSignal>
{
  public:
    Model();

    int getData() const;
    void setData(int newEntero);

  private:
    void sendSignal();

    int mData;
};

} // namespace model
} // namespace device

#endif // DEVICE_MODEL_MODEL_HPP
