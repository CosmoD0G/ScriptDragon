#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "updatehub.h"

MainWindow::MainWindow(QWidget *parent, UpdateHub *updateHub)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    setWindowTitle("ScriptDragon v0.0.1");





}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{

}


void MainWindow::on_btn_Add_clicked()
{

}

