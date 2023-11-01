#include "UfrmMilitancyUpdated.h"
#include "ui_UfrmMilitancyUpdated.h"

UfrmMilitancyUpdated::UfrmMilitancyUpdated(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UfrmMilitancyUpdated)
{
    ui->setupUi(this);
    this->setFixedSize(QSize(1322, 691));
}

UfrmMilitancyUpdated::~UfrmMilitancyUpdated()
{
    delete ui;
}

void UfrmMilitancyUpdated::on_pushAcceptMilitancy_clicked()
{
  close();
}
