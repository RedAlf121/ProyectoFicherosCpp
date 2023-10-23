#include "frmprincipal.h"
#include "dialogInsertar.h"

frmPrincipal::frmPrincipal(QWidget *parent) :
    QMainWindow(parent)
{
    ui.setupUi(this);
}

void frmPrincipal::on_actionCerrar_triggered()
{
    this->close();
}

void frmPrincipal::on_actionInsertar_triggered()
{

}




void frmPrincipal::on_mnuActionInsertStudent_triggered()
{
    dialoginsert = new dialogInsertar(this);
    dialoginsert->setModal(true);
    dialoginsert->show();

    //    Hecho
}
