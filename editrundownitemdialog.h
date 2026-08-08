#ifndef EDITRUNDOWNITEMDIALOG_H
#define EDITRUNDOWNITEMDIALOG_H

#include "scriptcontroller.h"
#include <QDialog>

namespace Ui {
class EditRundownItemDialog;
}

class EditRundownItemDialog : public QDialog
{
    Q_OBJECT

public:
    explicit EditRundownItemDialog(QWidget *parent = nullptr, ScriptController *ctrl = nullptr);
    ~EditRundownItemDialog();

private:
    Ui::EditRundownItemDialog *ui;

};

#endif // EDITRUNDOWNITEMDIALOG_H
