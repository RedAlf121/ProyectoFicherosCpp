#include "UfrmDialogYear.h"
#include <QMessageBox>
#include "../../gui/UfrmMain/UfrmMain.h"


YearDialog::YearDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    prevForm = parent;
    ui->setupUi(this);
    this->setFixedSize(QSize(290, 131));
}

YearDialog::~YearDialog()
{
    delete ui;
}


void on_pshBtrAccept_clicked();

void YearDialog::on_pshBtrAccept_clicked()
{
    // Suponiendo que 'tableWidget' es tu objeto QTableWidget
    QTableWidget *table = ((UfrmMain*)(prevForm))->getUI().tableStudents;
    QItemSelectionModel *selectionModel = ((UfrmMain*)(prevForm))->getUI().tableStudents->selectionModel();

    // Verificar si hay una selección válida
    if (!selectionModel->hasSelection()) {
        // No hay selección, puedes mostrar un mensaje o realizar otras acciones si lo deseas
        QMessageBox::critical(this, "Error", "Necesita seleccionar al menos un estudiante.");
        return;
    }

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
            QString carnet = table->item(selectedRow, columnIndexCarnet)->text();

            // Guardar el carnet en la lista de carnets
            this->carnet.push_back(carnet.toStdString());
        }
    }

    buildForm();
    nextForm->show();
    close();
}

std::vector<std::string> YearDialog::getLoadedID(){
    return carnet;
}

unsigned short YearDialog::value(){
    return static_cast<unsigned short>(ui->spinBox->value());
}
