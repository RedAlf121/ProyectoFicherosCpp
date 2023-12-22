#include "UfrmDonationUpdated.h"
#include "ui_UfrmDonationUpdated.h"
#include "../../logic/classes/student.h"
#include "../../logic/classes/school.h"
#include "../../logic/auxClasses/donationyearaux.h"
#include "../../gui/UfrmDialogYear/UYearDonation.h"

UfrmDonationUpdated::UfrmDonationUpdated(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UfrmDonationUpdated)
{
    prevForm = parent;
    ui->setupUi(this);
    this->setFixedSize(QSize(892, 691));
    build();
}

UfrmDonationUpdated::~UfrmDonationUpdated()
{
    delete ui;
}

void UfrmDonationUpdated::on_pushAcceptDonation_clicked()
{
  close();
}
void UfrmDonationUpdated::build() {

    UYearDonation* spinner = static_cast<UYearDonation*>(prevForm);
    unsigned short prevYear = spinner->value();

    School& sc = *School::getInstance();
    DonationYearAux donationYearAux = sc.updateDonationYear(spinner->getLoadedID(),prevYear);

    const std::vector<Student>& studentsElder = donationYearAux.getAmountPreviousDonationYear();
    const std::vector<Student>& studentsMinor = donationYearAux.getAmountNextDonationYear();

    // Llenar la tabla de donantes mayores
    fillDonationYearTable(ui->tableStudentsElderMilitancy, studentsElder);

    // Llenar la tabla de donantes menores
    fillDonationYearTable(ui->tableStudentsMinorMilitancy, studentsMinor);

    // Actualizar las etiquetas de total
    ui->labelTotalElderDonation->setText("Total: " + QString::number(studentsElder.size()));
    ui->labelTotalMinorDonation->setText("Total: " + QString::number(studentsMinor.size()));
}

void UfrmDonationUpdated::fillDonationYearTable(QTableWidget* tableWidget, const std::vector<Student>& students) {
    // Limpiar la tabla antes de llenarla
    tableWidget->clearContents();
    tableWidget->setRowCount(0);

    // Añadir encabezados de columna si es necesario
    tableWidget->setColumnCount(4);
    QStringList headers;
    headers << "CI" << "Nombre" << "Apellidos" << "Donación";
    tableWidget->setHorizontalHeaderLabels(headers);

    // Llenar la tabla con la información de los estudiantes
    for (Student student : students) {
        int rowPosition = tableWidget->rowCount();
        tableWidget->insertRow(rowPosition);

        // Añadir información del estudiante a cada celda de la fila
        tableWidget->setItem(rowPosition, 0, new QTableWidgetItem(QString(student.getIdentityCardNumber())));
        tableWidget->setItem(rowPosition, 1, new QTableWidgetItem(QString(student.getFirstName())));
        tableWidget->setItem(rowPosition, 2, new QTableWidgetItem(QString(student.getFamilyName())));
        tableWidget->setItem(rowPosition, 3, new QTableWidgetItem(QString::number(student.getFirstBloodDonationYear())));
    }
}

