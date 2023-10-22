#include "dialogInsertar.h"

dialogInsertar::dialogInsertar(QWidget *parent) :
    QDialog(parent)
{
    ui.setupUi(this);
}

void dialogInsertar::on_btnCancelar_clicked()
{
    this->close();
}
