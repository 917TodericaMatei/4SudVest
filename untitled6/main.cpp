#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <backend.h>
#include <services.h>
int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    BackEnd back;
    engine.rootContext()->setContextProperty("backend",&back);
    engine.load(url);
    services *serv = new services(&back);
    return app.exec();
}
