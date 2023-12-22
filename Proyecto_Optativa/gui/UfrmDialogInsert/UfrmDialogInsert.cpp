#include "UfrmDialogInsert.h"
#include "logic/classes/school.h"
#include <QRegularExpressionValidator>
#include "../UfrmMain/UfrmMain.h"
#include <QMessageBox>


InsertDialog::InsertDialog(QWidget *parent) :
    QDialog(parent)
{    
    mainPtr = parent;
    ui.setupUi(this);
    ui.lineID->setValidator(new QRegularExpressionValidator(QRegularExpression("[0-9]{0,11}"), this));
    ui.lineName->setValidator(new QRegularExpressionValidator(QRegularExpression("[a-zA-ZáéíóúÁÉÍÓÚüÜñÑ ]*"), this));
    ui.lineLastNames->setValidator(new QRegularExpressionValidator(QRegularExpression("[a-zA-ZáéíóúÁÉÍÓÚüÜñÑ ]*"), this));
    this->setWindowTitle("Insertar estudiante");
    this->setFixedSize(QSize(618, 376));
}

void InsertDialog::on_pshBtrAccept_clicked() {
    // Obtener los valores de los campos
    unsigned short yearFirstDonation = ui.spinBox_yearFirstDonation->text().toUShort();
    unsigned short yearUJC = ui.spinBox_yearUJC->text().toUShort();

    std::string name = ui.lineName->text().toStdString();
    std::string lastNames = ui.lineLastNames->text().toStdString();
    std::string id = ui.lineID->text().toStdString();
    std::string group = "IF-" + ui.spinBox_group->text().toStdString();

    // Verificar si los campos obligatorios están vacíos
    if (name.empty() || lastNames.empty() ||  id.empty()) {
        QMessageBox::critical(this, "Error", "Necesita rellenar todos los campos.");
        return;  // Salir de la función si hay campos vacíos
    }
    else{

    // Convertir las cadenas a caracteres char
    char name_char[25];
    strncpy(name_char, name.c_str(), sizeof(name_char));
    name_char[sizeof(name_char) - 1] = 0;

    char lastNames_char[25];
    strncpy(lastNames_char, lastNames.c_str(), sizeof(lastNames_char));
    lastNames_char[sizeof(lastNames_char) - 1] = 0;

    char id_char[11];
    strncpy(id_char, id.c_str(), sizeof(id_char));
    id_char[sizeof(id_char) - 1] = 0;

    char group_char[2];
    strncpy(group_char, group.c_str(), sizeof(group_char));
    group_char[sizeof(group_char) - 1] = 0;

    // Crear una instancia de la clase School
    School& sc = *School::getInstance();

    // Crear el estudiante solo si no hay campos vacíos
    sc.createStudent(name_char, lastNames_char, id_char, group_char, yearFirstDonation, yearUJC);

    // Actualizar los datos en la ventana principal si está disponible
    if (mainPtr != nullptr) {
        ((UfrmMain*)mainPtr)->setStudentData();
    }

    // Cerrar la ventana actual
    close();
    }
}

