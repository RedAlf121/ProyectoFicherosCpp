#include "UfrmDialogInsert.h"
#include "logic/classes/school.h"
#include <QRegularExpressionValidator>
#include "../UfrmMain/UfrmMain.h"

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

void InsertDialog::on_pshBtrAccept_clicked(){
    unsigned short yearFirstDonation = ui.spinBox_yearFirstDonation->text().toUShort();
    unsigned short yearUJC = ui.spinBox_yearUJC->text().toUShort();

    std::string name = ui.lineName->text().toStdString();
    std::string lastNames = ui.lineLastNames->text().toStdString();
    std::string id = ui.lineID->text().toStdString();
    std::string group = "IF-"+ui.spinBox_group->text().toStdString();

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


    School& sc = *School::getInstance();
    sc.createStudent(name_char,lastNames_char,id_char,group_char,yearFirstDonation,yearUJC);

    if(mainPtr != 0){
        ((UfrmMain*)mainPtr)->setStudentData();
    }

    close();
}

