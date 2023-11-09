#include "UfrmDialogInsert.h"

InsertDialog::InsertDialog(QWidget *parent) :
    QDialog(parent)
{
    ui.setupUi(this);
    this->setWindowTitle("Insertar estudiante");
    this->setFixedSize(QSize(618, 376));
}

