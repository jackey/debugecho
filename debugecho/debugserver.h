#ifndef DEBUGSERVER_H
#define DEBUGSERVER_H

class debugserver
{
    Q_OBJECT

public:
    debugserver();

    setupServer();

signals:
    void onConnect();
};

#endif // DEBUGSERVER_H
