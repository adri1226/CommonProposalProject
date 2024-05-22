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
    View(std::shared_ptr<device::presenter::Presenter> presenter, QQmlApplicationEngine& engine,
         QObject* parent = nullptr);

    void recievedSignal(device::presenter::signal::UseCaseSignal signal);

  public slots:
    void pressed();
    void updateData(const QVariant& data);

  private:
    std::shared_ptr<device::presenter::Presenter> mPresenter;
    QQmlApplicationEngine& mEngine;
    QObject* mParent;

};

}  // namespace view
}  // namespace hmi

#endif // HMI_HPP
