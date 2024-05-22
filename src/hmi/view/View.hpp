#ifndef HMI_HPP
#define HMI_HPP

#include <iostream>

#include <QObject>
#include <QQmlApplicationEngine>
#include <QQmlComponent>
#include <QQuickItem>
#include <QQuickWindow>

#include <device/presenter/Presenter.hpp>
#include <device/presenter/signal/UseCaseSignal.hpp>

#include <utils/SignalSubscriber.hpp>

namespace hmi
{
namespace view
{

class View :
    public QObject,
    public utils::SignalSubscriber<device::presenter::signal::UseCaseSignal>
{
    Q_OBJECT

  public:
    View(std::shared_ptr<device::presenter::Presenter> presenter);

  public slots:
    void pressed();

  private:
    void recievedSignal(device::presenter::signal::UseCaseSignal signal);

    std::shared_ptr<device::presenter::Presenter> mPresenter;

};

}  // namespace view
}  // namespace hmi

#endif // HMI_HPP
