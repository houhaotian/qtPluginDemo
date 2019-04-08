#ifndef MYINTERFACE_H
#define MYINTERFACE_H

#include <QObject>
#include <QString>

//定义接口
class MyInterface
{
public:
    virtual ~MyInterface() {}
    virtual void echo(const QString &message) = 0;
};


Q_DECLARE_INTERFACE(MyInterface, "Examples.Plugin.EchoInterface/1.1")


#endif // MYINTERFACE_H
