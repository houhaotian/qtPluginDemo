#include "mainwindow.h"
#include <QApplication>
#include <QDir>
#include <QPluginLoader>
#include "plugins/myinterface.h"
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    a.addLibraryPath("E:/codes/TestLib/MyApp/MyApp/plugins/");

    QPluginLoader loader("TestLib.dll");

    QObject *obj = loader.instance();
    if (obj)
    {
        MyInterface *plugin = qobject_cast<MyInterface*>(obj);
        if (plugin)
        {
            plugin->echo("Hello World!");
        }
    }


    return a.exec();
}
