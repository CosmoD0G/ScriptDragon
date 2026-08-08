#include "rundownitem.h"

RundownItem::RundownItem() {

}

bool RundownItem::setActive(bool b) {
    isActive = b;
}

void RundownItem::reset() {
    timeRemaining = timeSET;
}

QVector<LiveCue> RundownItem::getCues() {
    return cues;
}