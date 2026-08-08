#include "editrundownitemdialog.h"
#include "scriptcontroller.h"
#include "ui_editrundownitemdialog.h"

EditRundownItemDialog::EditRundownItemDialog(QWidget *parent, ScriptController *ctrl)
    : QDialog(parent)
    , ui(new Ui::EditRundownItemDialog)
{
    ui->setupUi(this);

// populate form fields

}

EditRundownItemDialog::~EditRundownItemDialog()
{
    delete ui;
}


