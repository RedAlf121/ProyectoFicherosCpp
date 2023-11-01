#include "UfrmMain.h"
#include "UfrmDialogInsert.h"

UfrmMain::UfrmMain(QWidget *parent) :
    QMainWindow(parent)
{
    ui.setupUi(this);
    this->setFixedSize(QSize(948, 600));
}

void UfrmMain::on_pshBtrInsertStudent_clicked()
{
    dialoginsert = new InsertDialog(this);
    dialoginsert->setModal(true);
    dialoginsert->show();
}
