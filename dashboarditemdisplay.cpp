#include "dashboarditemdisplay.h"
#include "ui_dashboarditemdisplay.h"

DashboardItemDisplay::DashboardItemDisplay(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::DashboardItemDisplay)
{
    ui->setupUi(this);
}

DashboardItemDisplay::~DashboardItemDisplay()
{
    delete ui;
}
