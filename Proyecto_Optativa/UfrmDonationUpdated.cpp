#include "UfrmDonationUpdated.h"
#include "ui_UfrmDonationUpdated.h"

UfrmDonationUpdated::UfrmDonationUpdated(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UfrmDonationUpdated)
{
    ui->setupUi(this);
}

UfrmDonationUpdated::~UfrmDonationUpdated()
{
    delete ui;
}
