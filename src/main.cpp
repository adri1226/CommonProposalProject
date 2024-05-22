#include <memory>

#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#include <device/model/Model.hpp>
#include <device/modelView/ModelView.hpp>
#include <device/controller/Controller.hpp>
#include <device/presenter/Presenter.hpp>
#include <hmi/view/View.hpp>

int main(int argc, char *argv[])
{
#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
  QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif

  QGuiApplication app(argc, argv);

  std::shared_ptr<device::model::Model> model = std::make_shared<device::model::Model>();

  std::shared_ptr<device::modelView::ModelView> modelView =
      std::make_shared<device::modelView::ModelView>(model);

  std::shared_ptr<device::controller::Controller> controller =
      std::make_shared<device::controller::Controller>(model, modelView);

  std::shared_ptr<device::presenter::Presenter> presenter =
      std::make_shared<device::presenter::Presenter>(model, controller);

  std::shared_ptr<hmi::view::View> view = std::make_shared<hmi::view::View>(presenter);

  QQmlApplicationEngine engine;

  engine.rootContext()->setContextProperty("view", view.get());

  const QUrl url(QStringLiteral("qrc:/main.qml"));
  QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                   &app, [url](QObject *obj, const QUrl &objUrl) {
    if (!obj && url == objUrl)
      QCoreApplication::exit(-1);
  }, Qt::QueuedConnection);
  engine.load(url);

  return app.exec();
}
