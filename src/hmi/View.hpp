#ifndef HMI_HPP
#define HMI_HPP

#include <iostream>

#include <QObject>
#include <QQmlApplicationEngine>
#include <QQmlComponent>
#include <QQuickItem>
#include <QQuickWindow>

#include <device/presenter/Presenter.hpp>

namespace hmi
{

class View :
    public QObject
{
    Q_OBJECT

  public:
    View(std::shared_ptr<device::presenter::Presenter> presenter);

  public slots:
    void pressed();

  private:
    std::shared_ptr<device::presenter::Presenter> mPresenter;

};

}  // namespace hmi

#endif // HMI_HPP
