#include "debugserver.h"

#include <QtNetwork/QTcpServer>
#include <QMutex>
#include <QString>
#include <QVector>

debugserver::debugserver()
{
    QTcpServer *server = new QTcpServer();
}


