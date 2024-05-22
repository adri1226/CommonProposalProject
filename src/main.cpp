#include <memory>

#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#include <device/controller/Controller.hpp>
#include <device/model/Model.hpp>
#include <device/modelView/ModelView.hpp>
#include <device/presenter/Presenter.hpp>
#include <device/viewCommunication/DDS.hpp>
#include <hmi/view/View.hpp>

std::shared_ptr<device::model::Model> mModel;
std::shared_ptr<device::modelView::ModelView> mModelView;
std::shared_ptr<device::controller::Controller> mController;
std::shared_ptr<device::presenter::Presenter> mPresenter;
std::shared_ptr<hmi::view::View> mView;
std::shared_ptr<device::viewCommunication::DDS> mDDS;

void initUseCase()
{
  mModel = std::make_shared<device::model::Model>();

  mModelView = std::make_shared<device::modelView::ModelView>(mModel);

  mController = std::make_shared<device::controller::Controller>(mModel, mModelView);

  mPresenter = std::make_shared<device::presenter::Presenter>(mModel, mController);

  mView = std::make_shared<hmi::view::View>(mPresenter);
  mDDS = std::make_shared<device::viewCommunication::DDS>(0, 2);
}

void initObserverRelations()
{
  mModel->addSubscriber(mPresenter);

  mPresenter->addSubscriber(mView);

  mModelView->addSubscriber(mDDS);

  mDDS->addSubscriber(mModelView);
}

int main(int argc, char *argv[])
{
#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
  QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif

  QGuiApplication app(argc, argv);

  initUseCase();

  initObserverRelations();

  QQmlApplicationEngine engine;

  engine.rootContext()->setContextProperty("view", mView.get());

  const QUrl url(QStringLiteral("qrc:/main.qml"));
  QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                   &app, [url](QObject *obj, const QUrl &objUrl) {
    if (!obj && url == objUrl)
      QCoreApplication::exit(-1);
  }, Qt::QueuedConnection);
  engine.load(url);

  return app.exec();
}
