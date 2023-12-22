#include "UfrmMilitancyUpdated.h"
#include "ui_UfrmMilitancyUpdated.h"
#include "../../logic/classes/student.h"
#include "../../logic/classes/school.h"
#include "../../logic/auxClasses/militancyaux.h"
#include "../../gui/UfrmDialogYear/UYearMilitancy.h"
#include <QSpinBox>

UfrmMilitancyUpdated::UfrmMilitancyUpdated(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UfrmMilitancyUpdated)
{
    prevForm = parent;
    ui->setupUi(this);
    this->setFixedSize(QSize(870, 691));
    build();
}

UfrmMilitancyUpdated::~UfrmMilitancyUpdated()
{
    delete ui;
}

void UfrmMilitancyUpdated::build() {
    // Suponiendo que 'militancyAux' es una instancia válida de MilitancyAux
    // Asegúrate de que 'militancyAux' esté disponible en esta clase

    // Convertir el año del formulario anterior a ushort (cambiar 'prevForm' por el nombre correcto)
    UYearMilitancy* spinner = static_cast<UYearMilitancy*>(prevForm);
    unsigned short prevYear = spinner->value();

    School& sc = *School::getInstance();
    MilitancyAux militancyAux = sc.updateMilitancy(spinner->getLoadedID(),prevYear);
    // Obtener la lista de estudiantes distintos e iguales
    const std::vector<Student>& distinctStudents = militancyAux.getDistinctIncorporationYears();
    const std::vector<Student>& equalStudents = militancyAux.getEqualIncorporationYears();

    // Llenar la tabla de estudiantes distintos
    fillTable(ui->tableStudentsMinorMilitancy, distinctStudents);

    // Llenar la tabla de estudiantes iguales
    fillTable(ui->tableStudentsSameMilitancy, equalStudents);
}

void UfrmMilitancyUpdated::fillTable(QTableWidget* tableWidget, const std::vector<Student>& students) {
    // Limpiar la tabla antes de llenarla
    tableWidget->clearContents();
    tableWidget->setRowCount(0);

    // Añadir encabezados de columna si es necesario
    tableWidget->setColumnCount(4);
    QStringList headers;
    headers << "Carnet" << "Nombre" << "Apellidos" << "Año Militancia";
    tableWidget->setHorizontalHeaderLabels(headers);
    School& sc = *School::getInstance();
    std::vector<Student> studentList = sc.getStudents();
    // Llenar la tabla con la información de los estudiantes
    bool next = false;
    for (int i = 0, j = 1 ; i < studentList.size()-1 && j < studentList.size(); i+=2,j+=2) {

        int rowPosition = tableWidget->rowCount();
        tableWidget->insertRow(rowPosition);

        // Añadir información del estudiante a cada celda de la fila
        tableWidget->setItem(rowPosition, 0, new QTableWidgetItem(QString(next? studentList[i].getIdentityCardNumber() : studentList[j].getIdentityCardNumber())));
        tableWidget->setItem(rowPosition, 1, new QTableWidgetItem(QString(next? studentList[i].getFirstName() : studentList[j].getFirstName())));
        tableWidget->setItem(rowPosition, 2, new QTableWidgetItem(QString(next? studentList[i].getFamilyName() : studentList[j].getFamilyName())));
        tableWidget->setItem(rowPosition, 3, new QTableWidgetItem(QString::number(next? studentList[i].getIncorporationYear() : studentList[j].getIncorporationYear())));
    }
    ui->labelTotalMinorMilitancy->setText(QString("Total: %1").arg(studentList.size()/2));
    ui->labelTotalSameMilitancy->setText(QString("Total: %1").arg(studentList.size()/2));
}

void UfrmMilitancyUpdated::on_pushAcceptMilitancy_clicked()
{
  close();
}
