#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "updatehub.h"
#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr, UpdateHub *updateHub = nullptr);
    ~MainWindow() override;

private slots:
    void on_pushButton_clicked();

    void on_btn_Add_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
