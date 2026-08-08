#ifndef LIVECUE_H
#define LIVECUE_H

#include <qobject.h>
class LiveCue
{
public:
    LiveCue();

    QString getMessage();

private:
    int group;
    QString message;
};

#endif // LIVECUE_H
