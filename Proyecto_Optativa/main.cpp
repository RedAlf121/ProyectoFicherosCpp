#include "gui/UfrmMain/UfrmMain.h"
#include "logic/classes/school.h"
#include "logic/classes/student.h"
#include "AuxiliarData.h"
#include <vector>
#include <QApplication>
#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    UfrmMain w;
    data();
    w.show();
    w.setStudentData();

    return a.exec();
}
