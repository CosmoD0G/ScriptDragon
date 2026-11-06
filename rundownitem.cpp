#include "rundownitem.h"

RundownItem::RundownItem() {

}

void RundownItem::setActive(bool b) {
    isActive = b;
}

void RundownItem::reset() {
    timeRemaining = timeSET;
}

QVector<LiveCue> RundownItem::getCues() {
    return cues;
}

int RundownItem::getTimeRemaining() {
    return timeRemaining;
}

