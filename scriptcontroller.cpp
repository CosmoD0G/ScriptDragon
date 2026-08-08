#include "scriptcontroller.h"
#include "editrundownitemdialog.h"

ScriptController::ScriptController() {

}

void ScriptController::toggleAutoplay() {
    autoPlay = !autoPlay;
}

void ScriptController::toggleLive() {
    isLive = !isLive;
}

void ScriptController::togglePlaying() {
    isPlaying = !isPlaying;
}

void ScriptController::takePage(int i ) {
    items[activePage].setActive(false); // take current page out
    items[i].setActive(true); // take new page in
    activePage = i;

    // deliver cues
    for (LiveCue c : items[activePage].getCues()) {

    }
}

void ScriptController::takeNext() {
    if (activePage+1 >= items.size()) {
        takePage(0);
    } else {
        takePage(activePage+1);
    }
}

void ScriptController::addItem() {
    resetFormPopulationItem();
    EditRundownItemDialog *newItemDialog = new EditRundownItemDialog();
}

void ScriptController::setDashboard(MainWindow *mw) {
    dashboard = mw;
}



// reset all times and take from top
void ScriptController::reset() {
    takePage(0);
    isPlaying = false;
    for (RundownItem i : items) {
        i.reset();
    }
}

void ScriptController::resetFormPopulationItem() {

}

