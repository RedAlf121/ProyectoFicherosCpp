#include "frmprincipal.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    frmPrincipal w;
    w.show();

    return a.exec();
}
