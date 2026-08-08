#ifndef DASHBOARDITEMDISPLAY_H
#define DASHBOARDITEMDISPLAY_H

#include <QWidget>

namespace Ui {
class DashboardItemDisplay;
}

class DashboardItemDisplay : public QWidget
{
    Q_OBJECT

public:
    explicit DashboardItemDisplay(QWidget *parent = nullptr);
    ~DashboardItemDisplay();

private:
    Ui::DashboardItemDisplay *ui;
};

#endif // DASHBOARDITEMDISPLAY_H
