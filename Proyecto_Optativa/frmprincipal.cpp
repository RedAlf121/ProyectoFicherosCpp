#include "frmprincipal.h"
#include "dialogInsertar.h"

frmPrincipal::frmPrincipal(QWidget *parent) :
    QMainWindow(parent)
{
    ui.setupUi(this);
//    connect(ui.mnuActionInsertStudent, SIGNAL(triggered()), this, SLOT(on_mnuActionInsertStudent_triggered()));

//    No logre resolver al final que salieran dos dialoginsert en vex de uno :(
}






void frmPrincipal::on_mnuActionInsertStudent_triggered()
{
    dialoginsert = new dialogInsertar(this);
    dialoginsert->setModal(true);
    dialoginsert->show();

}
