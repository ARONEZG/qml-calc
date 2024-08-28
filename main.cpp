#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <modelclass.h>
#include <core_calculator/calculator.h>

int main(int argc, char *argv[])
{
    Calculator c;
    QGuiApplication app(argc, argv);

    qmlRegisterType<ModelClass>("Calculator",1,0,"MC");

    QQmlApplicationEngine engine;
    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreationFailed,
        &app,
        []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    engine.loadFromModule("Calculator", "Main");

    return app.exec();
}
