#include "UfrmDonationUpdated.h"
#include "ui_UfrmDonationUpdated.h"

UfrmDonationUpdated::UfrmDonationUpdated(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UfrmDonationUpdated)
{
    ui->setupUi(this);
    this->setFixedSize(QSize(892, 691));
}

UfrmDonationUpdated::~UfrmDonationUpdated()
{
    delete ui;
}

void UfrmDonationUpdated::on_pushAcceptDonation_clicked()
{
  close();
}
