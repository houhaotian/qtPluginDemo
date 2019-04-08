#ifndef TESTLIB_H
#define TESTLIB_H


#include "myinterface.h"

class TestLib:public QObject, public MyInterface
{
    Q_OBJECT

    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QGenericPluginFactoryInterface" FILE "TestLib.json")
    Q_INTERFACES(MyInterface);

public:
    TestLib(QObject *parent = 0);
    void echo(const QString &message) Q_DECL_OVERRIDE;

};

#endif // TESTLIB_H
