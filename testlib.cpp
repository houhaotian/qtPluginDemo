#include "testlib.h"
#include <QDebug>


TestLib::TestLib(QObject *parent):QObject (parent)
{

}

void TestLib::echo(const QString &message)
{
    qDebug()<<message;
}
