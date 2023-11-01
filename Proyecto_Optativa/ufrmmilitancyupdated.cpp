#include "UfrmMilitancyUpdated.h"
#include "ui_UfrmMilitancyUpdated.h"

UfrmMilitancyUpdated::UfrmMilitancyUpdated(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UfrmMilitancyUpdated)
{
    ui->setupUi(this);
}

UfrmMilitancyUpdated::~UfrmMilitancyUpdated()
{
    delete ui;
}
