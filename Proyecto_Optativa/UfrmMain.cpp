#include "UfrmMain.h"
#include "UfrmDialogInsert.h"

UfrmMain::UfrmMain(QWidget *parent) :
    QMainWindow(parent)
{
    ui.setupUi(this);
}

void UfrmMain::on_pshBtrInsertStudent_clicked()
{
    dialoginsert = new InsertDialog(this);
    dialoginsert->setModal(true);
    dialoginsert->show();
}
