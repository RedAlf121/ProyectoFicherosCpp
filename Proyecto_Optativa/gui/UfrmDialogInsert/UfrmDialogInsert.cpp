#include "UfrmDialogInsert.h"
#include <QRegularExpressionValidator>


InsertDialog::InsertDialog(QWidget *parent) :
    QDialog(parent)
{
    ui.setupUi(this);
    ui.lineID->setValidator(new QRegularExpressionValidator(QRegularExpression("[0-9]{0,11}"), this));
    ui.lineName->setValidator(new QRegularExpressionValidator(QRegularExpression("[a-zA-ZáéíóúÁÉÍÓÚüÜñÑ ]*"), this));
    ui.lineLastNames->setValidator(new QRegularExpressionValidator(QRegularExpression("[a-zA-ZáéíóúÁÉÍÓÚüÜñÑ ]*"), this));
    this->setWindowTitle("Insertar estudiante");
    this->setFixedSize(QSize(618, 376));
}

