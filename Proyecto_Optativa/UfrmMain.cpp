#include "UfrmMain.h"
#include "UfrmDialogInsert.h"

UfrmMain::UfrmMain(QWidget *parent) :
    QMainWindow(parent)
{
    ui.setupUi(this);
    dialoginsert = nullptr;
    dialogyear = nullptr;
    this->setFixedSize(QSize(948, 600));
}

void UfrmMain::on_pshBtrInsertStudent_clicked()
{
    dialoginsert = new InsertDialog(this);
    dialoginsert->setModal(true);
    dialoginsert->show();
}
void UfrmMain::on_pshBtrMilitancy_clicked()
{
    createYearDialog(MILITANCY);
}

void UfrmMain::on_pshBtrDonation_clicked()
{
    createYearDialog(DONANT);
}

void UfrmMain::createYearDialog(int choose)
{
  delete dialogyear;
  dialogyear = new YearDialog(choose,this);
  dialogyear->setModal(true);
  dialogyear->show();
}
