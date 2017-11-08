#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "timer.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    QQmlContext *context = engine.rootContext();
    Timer *test = new Timer();
    context->setContextProperty("timer", test);
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
