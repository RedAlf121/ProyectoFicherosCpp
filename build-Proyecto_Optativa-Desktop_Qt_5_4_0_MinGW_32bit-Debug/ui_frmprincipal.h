/********************************************************************************
** Form generated from reading UI file 'frmprincipal.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMPRINCIPAL_H
#define UI_FRMPRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_frmPrincipal
{
public:
    QAction *actionInsertar;
    QAction *actionEliminar;
    QAction *actionCerrar;
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QTabWidget *tabPrincipal;
    QWidget *tabEstudiantes;
    QTableWidget *tableWidget;
    QLabel *lblTabla;
    QPushButton *btnMostrar;
    QWidget *tabConsultas;
    QMenuBar *menuBar;
    QMenu *menuMen;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *frmPrincipal)
    {
        if (frmPrincipal->objectName().isEmpty())
            frmPrincipal->setObjectName(QStringLiteral("frmPrincipal"));
        frmPrincipal->resize(800, 600);
        frmPrincipal->setMinimumSize(QSize(800, 600));
        frmPrincipal->setMaximumSize(QSize(1920, 1080));
        QIcon icon;
        icon.addFile(QStringLiteral("Resources/Screenshot 2023-10-21 155727~1.ico"), QSize(), QIcon::Normal, QIcon::Off);
        frmPrincipal->setWindowIcon(icon);
        actionInsertar = new QAction(frmPrincipal);
        actionInsertar->setObjectName(QStringLiteral("actionInsertar"));
        actionEliminar = new QAction(frmPrincipal);
        actionEliminar->setObjectName(QStringLiteral("actionEliminar"));
        actionCerrar = new QAction(frmPrincipal);
        actionCerrar->setObjectName(QStringLiteral("actionCerrar"));
        centralWidget = new QWidget(frmPrincipal);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(-1, -1, 801, 561));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        tabPrincipal = new QTabWidget(gridLayoutWidget);
        tabPrincipal->setObjectName(QStringLiteral("tabPrincipal"));
        tabEstudiantes = new QWidget();
        tabEstudiantes->setObjectName(QStringLiteral("tabEstudiantes"));
        tableWidget = new QTableWidget(tabEstudiantes);
        if (tableWidget->columnCount() < 6)
            tableWidget->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(190, 40, 601, 461));
        lblTabla = new QLabel(tabEstudiantes);
        lblTabla->setObjectName(QStringLiteral("lblTabla"));
        lblTabla->setGeometry(QRect(190, 10, 601, 21));
        btnMostrar = new QPushButton(tabEstudiantes);
        btnMostrar->setObjectName(QStringLiteral("btnMostrar"));
        btnMostrar->setGeometry(QRect(50, 40, 93, 28));
        tabPrincipal->addTab(tabEstudiantes, QString());
        tabConsultas = new QWidget();
        tabConsultas->setObjectName(QStringLiteral("tabConsultas"));
        tabPrincipal->addTab(tabConsultas, QString());

        gridLayout->addWidget(tabPrincipal, 0, 0, 1, 1);

        frmPrincipal->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(frmPrincipal);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 21));
        menuMen = new QMenu(menuBar);
        menuMen->setObjectName(QStringLiteral("menuMen"));
        frmPrincipal->setMenuBar(menuBar);
        mainToolBar = new QToolBar(frmPrincipal);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        frmPrincipal->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(frmPrincipal);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        frmPrincipal->setStatusBar(statusBar);

        menuBar->addAction(menuMen->menuAction());
        menuMen->addAction(actionInsertar);
        menuMen->addAction(actionEliminar);
        menuMen->addAction(actionCerrar);

        retranslateUi(frmPrincipal);

        tabPrincipal->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(frmPrincipal);
    } // setupUi

    void retranslateUi(QMainWindow *frmPrincipal)
    {
        frmPrincipal->setWindowTitle(QApplication::translate("frmPrincipal", "Universidad", 0));
        actionInsertar->setText(QApplication::translate("frmPrincipal", "&Insertar", 0));
        actionInsertar->setShortcut(QApplication::translate("frmPrincipal", "Ctrl+I", 0));
        actionEliminar->setText(QApplication::translate("frmPrincipal", "&Eliminar", 0));
        actionEliminar->setShortcut(QApplication::translate("frmPrincipal", "Ctrl+D", 0));
        actionCerrar->setText(QApplication::translate("frmPrincipal", "&Cerrar", 0));
        actionCerrar->setShortcut(QApplication::translate("frmPrincipal", "Ctrl+Alt+F4", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("frmPrincipal", "CI", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("frmPrincipal", "Nombres ", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("frmPrincipal", "Apellidos", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("frmPrincipal", "Grupo", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("frmPrincipal", "Ingreso UJC", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("frmPrincipal", "Donante", 0));
        lblTabla->setText(QApplication::translate("frmPrincipal", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt;\">Listado de Estudiantes</span></p></body></html>", 0));
        btnMostrar->setText(QApplication::translate("frmPrincipal", "Mostrar todo", 0));
        btnMostrar->setShortcut(QApplication::translate("frmPrincipal", "Ctrl+A", 0));
        tabPrincipal->setTabText(tabPrincipal->indexOf(tabEstudiantes), QApplication::translate("frmPrincipal", "Estudiantes", 0));
        tabPrincipal->setTabText(tabPrincipal->indexOf(tabConsultas), QApplication::translate("frmPrincipal", "Consultas", 0));
        menuMen->setTitle(QApplication::translate("frmPrincipal", "Men\303\272", 0));
    } // retranslateUi

};

namespace Ui {
    class frmPrincipal: public Ui_frmPrincipal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMPRINCIPAL_H
