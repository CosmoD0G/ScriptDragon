#ifndef RUNDOWNITEM_H
#define RUNDOWNITEM_H

#include "livecue.h"
#include <qcontainerfwd.h>
#include <qobject.h>


/* CLASS ATTRIBUTES
 *
 * segment title
 * notes
 * time
 * queues
 * active feed
 *
*/

class RundownItem
{
public:
    RundownItem();
    void setActive(bool b);
    void reset();
    QVector<LiveCue> getCues();
    int getTimeRemaining();


private:
    int timeRemaining;
    int listNum;
    bool isActive;


    QString title;
    QString notes;
    int setTime;

    int NDIfeed;
    bool isCountdown;
    bool isTimeCountdown;

    bool isScript;

    // reset variable
    int timeSET;

    QVector<LiveCue> cues;






};

#endif // RUNDOWNITEM_H
