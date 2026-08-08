#ifndef SCRIPTCONTROLLER_H
#define SCRIPTCONTROLLER_H


#include "mainwindow.h"
#include "rundownitem.h"
#include <QVector>

class ScriptController
{
public:
    ScriptController();
    void syncToHUD();
    void takeNext();
    void takePage(int i);
    void togglePlaying();
    void toggleAutoplay();
    void toggleLive();
    void loadFromFile(QString filepath);
    void saveToFile(QString filepath);
    void addItem();
    void reset();

    void setDashboard(MainWindow *mw);


    RundownItem getFormPopulationItem();

private:
    MainWindow *dashboard;
    QVector<RundownItem> items;
    int secondsRemaining;
    bool isPlaying;
    bool autoPlay;
    bool isLive;
    int activePage;
    QVector<QString> NDIfeeds;

    QVector<QString> roles;

    RundownItem formPopulationItem;
    void resetFormPopulationItem();

};

#endif // SCRIPTCONTROLLER_H
