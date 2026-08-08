#ifndef UPDATEHUB_H
#define UPDATEHUB_H

#include <QObject>
#include <QWebSocketServer>
#include <QWebSocket>

class UpdateHub : public QObject
{
    Q_OBJECT
public:
    explicit UpdateHub(QObject *parent = nullptr);

signals:
};

#endif // UPDATEHUB_H
