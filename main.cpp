#include "mainwindow.h"
#include "scriptcontroller.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);



    MainWindow w;
    w.show();



    ScriptController ctrl;


    return QCoreApplication::exec();
}
