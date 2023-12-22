#include "UfrmMain.h"
#include "gui/UfrmDialogInsert/UfrmDialogInsert.h"
#include "gui/UfrmDialogYear/UYearDonation.h"
#include "gui/UfrmDialogYear/UYearMilitancy.h"
#include "logic/classes/school.h"

UfrmMain::UfrmMain(QWidget *parent) :
    QMainWindow(parent)
{
    ui.setupUi(this);
    dialoginsert = NULL;
    dialogyear = NULL;
    ui.tabMain->setCurrentIndex(0);
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
    YearDialog *y = new UYearMilitancy(0);
    createYearDialog(y);
    //createYearDialog(new UYearMilitancy(this));
}

void UfrmMain::on_pshBtrDonation_clicked()
{
    YearDialog *y = new UYearDonation(0);
    createYearDialog(y);
}

void UfrmMain::createYearDialog(YearDialog *newDialog)
{
    delete dialogyear;
    dialogyear = newDialog;
    dialogyear->setModal(true);
    dialogyear->show();
}



void UfrmMain::setStudentData(){
    School& school = *School::getInstance();
    std::vector<Student> students = school.getStudents(); // Asegúrate de implementar un método getStudents() en la clase School

    // Elimina las filas anteriores de la tabla
    ui.tableStudents->clear();

    // Establece los encabezados de las columnas
    ui.tableStudents->setColumnCount(6);
    ui.tableStudents->setHorizontalHeaderLabels(QStringList() << "CI" << "Apellido" << "Nombre" << "Grupo" << "Año de la primera donación" << "Año de incorporación");

    // Itera sobre los estudiantes y añade sus datos a la tabla
    for(Student& student : students){
        int row = ui.tableStudents->rowCount();
        ui.tableStudents->insertRow(row);
        ui.tableStudents->setItem(row, 0, new QTableWidgetItem(QString::fromStdString(student.getIdentityCardNumber())));
        ui.tableStudents->setItem(row, 1, new QTableWidgetItem(QString::fromStdString(student.getFamilyName())));
        ui.tableStudents->setItem(row, 2, new QTableWidgetItem(QString::fromStdString(student.getFirstName())));
        ui.tableStudents->setItem(row, 3, new QTableWidgetItem(QString::fromStdString(student.getGroup())));
        ui.tableStudents->setItem(row, 4, new QTableWidgetItem(QString::number(student.getFirstBloodDonationYear())));
        ui.tableStudents->setItem(row, 5, new QTableWidgetItem(QString::number(student.getIncorporationYear())));
    }
    ui.tableStudents->setEditTriggers(QAbstractItemView::NoEditTriggers);
}
