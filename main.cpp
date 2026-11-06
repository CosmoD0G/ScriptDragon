#include "mainwindow.h"
#include "scriptcontroller.h"
#include "updatehub.h"

#include <QApplication>
#include <QHttpServer>
#include <QFile>
#include <QTcpServer>


void serveFile(QHttpServer &server, const QString &route, const QString &filePath)
{
    server.route(route, [filePath]() {
        QFile file(filePath);
        if (!file.open(QIODevice::ReadOnly)) {
            return QHttpServerResponse(QHttpServerResponder::StatusCode::NotFound);
        }
        QByteArray content = file.readAll();
        return QHttpServerResponse("text/html", content);
    });
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QHttpServer server;




    // Bind to a TCP socket
    auto tcpServer = new QTcpServer();
    if (!tcpServer->listen(QHostAddress::LocalHost, 8080)) {
        qWarning("Failed to bind to port 8080");
        delete tcpServer;
        return 1;
    }
    server.bind(tcpServer);

    qInfo("Server running at http://localhost:8080");

    serveFile(server, "/", ":/html/index.html");

    MainWindow w;
    w.show();



    ScriptController ctrl;

    UpdateHub uh;

    return QCoreApplication::exec();
}
