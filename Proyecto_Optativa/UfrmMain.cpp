#include "UfrmMain.h"
#include "UfrmDialogInsert.h"

UfrmMain::UfrmMain(QWidget *parent) :
    QMainWindow(parent)
{
    ui.setupUi(this);
    this->setWindowTitle("Insertar estudainte");
//    connect(ui.mnuActionInsertStudent, SIGNAL(triggered()), this, SLOT(on_mnuActionInsertStudent_triggered()));

//    No logre resolver al final que salieran dos dialoginsert en vex de uno :(
}






void UfrmMain::on_mnuActionInsertStudent_triggered()
{
    dialoginsert = new InsertDialog(this);
    dialoginsert->setModal(true);
    dialoginsert->show();

}
