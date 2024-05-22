#include "View.hpp"

namespace hmi
{
namespace view
{

View::View(std::shared_ptr<device::presenter::Presenter> presenter,
           QQmlApplicationEngine& engine, QObject* parent)
  : mPresenter(presenter)
  , mEngine(engine)
  , mParent(parent)
{

}

void View::pressed()
{
  bool isPressed = true;

  mPresenter->pressed(isPressed);
}

void View::recievedSignal(device::presenter::signal::UseCaseSignal signal)
{
  QMetaObject::invokeMethod(this, "updateData", Qt::QueuedConnection,
                            Q_ARG(QVariant, signal.getData()));
}

void View::updateData(const QVariant& data)
{
  if (!mEngine.rootObjects().isEmpty())
  {
    QObject* rootObject = mEngine.rootObjects().first();
    QQuickWindow* rootWindow = qobject_cast<QQuickWindow*>(rootObject);

    if (rootWindow)
    {
      QObject* textQML = rootObject->findChild<QObject*>("myData", Qt::FindChildrenRecursively);
      if (textQML)
      {
        textQML->setProperty("text", data);
      }
      else
      {
        std::cerr << "Error: Unable to find QML object with id 'myData'." << std::endl;
      }
    }
    else
    {
      std::cerr << "Error: Root object is not a QQuickWindow." << std::endl;
    }
  }
  else
  {
    std::cerr << "Error: No root objects found." << std::endl;
  }
}

}  // namespace view
}  // namespace hmi
