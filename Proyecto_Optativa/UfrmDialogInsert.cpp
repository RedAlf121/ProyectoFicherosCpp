#include "UfrmDialogInsert.h"

InsertDialog::InsertDialog(string, QWidget *parent) :
    QDialog(parent)
{
    ui.setupUi(this);
    this->setWindowTitle("Insertar estudiante");
    this->setFixedSize(QSize(618, 376));
}

