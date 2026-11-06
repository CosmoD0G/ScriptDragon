#ifndef UPDATEHUB_H
#define UPDATEHUB_H

#include <QObject>
#include <QList>
#include <QWebSocketServer>
#include <QWebSocket>

class UpdateHub : public QObject
{
    Q_OBJECT
public:
    explicit UpdateHub(QObject *parent = nullptr);

    void broadcast(const QString &message);

private slots:
    void onNewConnection();
    void onDisconnected();

private:
    QWebSocketServer *m_server;
    QList<QWebSocket*> m_clients;
};
#endif // UPDATEHUB_H
