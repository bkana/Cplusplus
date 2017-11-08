#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "datastorage.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    QQmlContext* context = engine.rootContext();
    Datastorage dt;
    context->setContextProperty("datastorage", &dt);
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
