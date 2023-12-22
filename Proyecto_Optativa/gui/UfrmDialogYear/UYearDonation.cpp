#include "UYearDonation.h"
#include "gui/UfrmDonationUpdated/UfrmDonationUpdated.h"
#include <iostream>
UYearDonation::UYearDonation(QWidget *parent) : YearDialog(parent)
{
      ui->label_dynamic->setText("donación: ");
      show_donation_updated();
}
void UYearDonation::buildForm()
{
  nextForm = new UfrmDonationUpdated(this);
}

void UfrmDonationUpdated::show_donation_updated(){


    School& school = *School::getInstance();
    std::vector<Student> students = school.getStudents();

    // Elimina las filas anteriores de la tabla
    ui->tableStudentsMinorMilitancy->clear();
    ui->tableStudentsElderMilitancy->clear();

//    Encabezado de las tablas
    ui->tableStudentsMinorMilitancy->setColumnCount(4);
    ui->tableStudentsMinorMilitancy->setHorizontalHeaderLabels(QStringList() << "CI" << "Nombres" << "Apeliidos" << "Donante");

    ui->tableStudentsElderMilitancy->setColumnCount(4);
    ui->tableStudentsElderMilitancy->setHorizontalHeaderLabels(QStringList() << "CI" << "Nombres" << "Apeliidos" << "Donante");

//    updatedStudents = school.updateDonationYear(school.getIdentityCards(students),/*AQUI VA EL SPINNER*/);

//   for(Student& student : students){
//       int row = ui->tableStudentsMinorMilitancy->rowCount();

//   }


}
