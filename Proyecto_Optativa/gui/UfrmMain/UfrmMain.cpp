#include "UfrmMain.h"
#include "gui/UfrmDialogInsert/UfrmDialogInsert.h"
#include "gui/UfrmDialogYear/UYearDonation.h"
#include "gui/UfrmDialogYear/UYearMilitancy.h"
#include "logic/classes/school.h"
#include <QMessageBox>

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
    YearDialog *y = new UYearMilitancy(this);
    createYearDialog(y);
    //createYearDialog(new UYearMilitancy(this));
}

void UfrmMain::on_pshBtrDonation_clicked()
{
    YearDialog *y = new UYearDonation(this);
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
    ui.tableStudents->setRowCount(0);
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

void UfrmMain::on_pshBtrDeleteStudent_clicked()
{
    // Suponiendo que 'tableWidget' es tu objeto QTableWidget
    QItemSelectionModel *selectionModel = ui.tableStudents->selectionModel();

    // Verificar si hay una selección válida
    if (!selectionModel->hasSelection()) {
        // No hay selección, puedes mostrar un mensaje o realizar otras acciones si lo deseas
        QMessageBox::critical(this, "Error", "Necesita seleccionar al menos un estudiante.");
        return;
    }

    // Preguntar al usuario si realmente desea eliminar a los estudiantes seleccionados
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Confirmación", "¿Desea eliminar los estudiantes seleccionados?",
                                                              QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {
        // Obtener los índices de las celdas seleccionadas
        QModelIndexList selectedCells = selectionModel->selectedIndexes();

        // Suponiendo que la columna con el carnet tiene un índice específico, ajusta esto según tu configuración
        int columnIndexCarnet = 0;  // Ajusta según la posición real de la columna del carnet

        // Recorrer todas las filas seleccionadas
        for (const QModelIndex &selectedCell : selectedCells) {
            // Obtener la fila seleccionada
            int selectedRow = selectedCell.row();

            // Verificar si la fila seleccionada es válida
            if (selectedRow >= 0) {
                // Obtener el carnet de la celda seleccionada
                QString carnet = ui.tableStudents->item(selectedRow, columnIndexCarnet)->text();

                // Llamar al método deleteSunset con el carnet obtenido
                School& sc = *School::getInstance();
                sc.deleteSunset(carnet.toStdString());
            }
        }

        // Realizar acciones adicionales si es necesario
        // ...
        QMessageBox::information(this, "Éxito", "Usuarios eliminados con éxito");

        // Actualizar los datos en la tabla
        setStudentData();
    }
    // Si el usuario selecciona "No", no es necesario hacer nada más.
}

Ui::ufrmMain UfrmMain::getUI(){
    return ui;
}
