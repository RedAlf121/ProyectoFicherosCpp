#include "gui/UfrmMain/UfrmMain.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    UfrmMain w;
    w.show();

    return a.exec();
}
