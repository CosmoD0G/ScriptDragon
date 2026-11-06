#include "updatehub.h"
#include <QWebSocketServer>
#include <QWebSocket>

UpdateHub::UpdateHub(QObject *parent) : QObject{parent} {
    // setup server to push messages
    m_server = new QWebSocketServer("UpdateHub", QWebSocketServer::NonSecureMode, this);
    if (m_server->listen(QHostAddress::LocalHost, 8081)) {
        connect(m_server, &QWebSocketServer::newConnection, this, &UpdateHub::onNewConnection);
        qDebug() << "connection detected on port 8081";
    }
    qDebug() << "server started";
}

void UpdateHub::broadcast(const QString &message)
{
    for (QWebSocket *client : std::as_const(m_clients)) {
        client->sendTextMessage(message);
        qDebug() << "attempted to broadcast message";
    }

}

void UpdateHub::onNewConnection()
{
    QWebSocket *socket = m_server->nextPendingConnection();
    connect(socket, &QWebSocket::disconnected, this, &UpdateHub::onDisconnected);
    m_clients.append(socket);
    broadcast("connection successful!");
}

void UpdateHub::onDisconnected()
{
    QWebSocket *socket = qobject_cast<QWebSocket*>(sender());
    if (socket) {
        m_clients.removeAll(socket);
        socket->deleteLater();
    }
}