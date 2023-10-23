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
    QAction *mnuActionInsert;
    QAction *mnuActionDelete;
    QAction *mnuActionCerrar;
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QTabWidget *tabMain;
    QWidget *tabEstudiantes;
    QTableWidget *tableStudents;
    QLabel *lblTBoard;
    QPushButton *pshBtrShowEverything;
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
        mnuActionInsert = new QAction(frmPrincipal);
        mnuActionInsert->setObjectName(QStringLiteral("mnuActionInsert"));
        mnuActionDelete = new QAction(frmPrincipal);
        mnuActionDelete->setObjectName(QStringLiteral("mnuActionDelete"));
        mnuActionCerrar = new QAction(frmPrincipal);
        mnuActionCerrar->setObjectName(QStringLiteral("mnuActionCerrar"));
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
        tabMain = new QTabWidget(gridLayoutWidget);
        tabMain->setObjectName(QStringLiteral("tabMain"));
        tabEstudiantes = new QWidget();
        tabEstudiantes->setObjectName(QStringLiteral("tabEstudiantes"));
        tableStudents = new QTableWidget(tabEstudiantes);
        if (tableStudents->columnCount() < 6)
            tableStudents->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableStudents->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableStudents->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableStudents->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableStudents->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableStudents->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableStudents->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tableStudents->setObjectName(QStringLiteral("tableStudents"));
        tableStudents->setGeometry(QRect(190, 40, 601, 461));
        lblTBoard = new QLabel(tabEstudiantes);
        lblTBoard->setObjectName(QStringLiteral("lblTBoard"));
        lblTBoard->setGeometry(QRect(190, 10, 601, 21));
        pshBtrShowEverything = new QPushButton(tabEstudiantes);
        pshBtrShowEverything->setObjectName(QStringLiteral("pshBtrShowEverything"));
        pshBtrShowEverything->setGeometry(QRect(50, 40, 93, 28));
        tabMain->addTab(tabEstudiantes, QString());
        tabConsultas = new QWidget();
        tabConsultas->setObjectName(QStringLiteral("tabConsultas"));
        tabMain->addTab(tabConsultas, QString());

        gridLayout->addWidget(tabMain, 0, 0, 1, 1);

        frmPrincipal->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(frmPrincipal);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 26));
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
        menuMen->addAction(mnuActionInsert);
        menuMen->addAction(mnuActionDelete);
        menuMen->addAction(mnuActionCerrar);

        retranslateUi(frmPrincipal);

        tabMain->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(frmPrincipal);
    } // setupUi

    void retranslateUi(QMainWindow *frmPrincipal)
    {
        frmPrincipal->setWindowTitle(QApplication::translate("frmPrincipal", "Universidad", 0));
        mnuActionInsert->setText(QApplication::translate("frmPrincipal", "&Insertar estudiante...", 0));
        mnuActionInsert->setShortcut(QApplication::translate("frmPrincipal", "Ctrl+I", 0));
        mnuActionDelete->setText(QApplication::translate("frmPrincipal", "&Eliminar estudiante...", 0));
        mnuActionDelete->setShortcut(QApplication::translate("frmPrincipal", "Ctrl+D", 0));
        mnuActionCerrar->setText(QApplication::translate("frmPrincipal", "&Cerrar", 0));
        mnuActionCerrar->setShortcut(QApplication::translate("frmPrincipal", "Ctrl+Alt+F4", 0));
        QTableWidgetItem *___qtablewidgetitem = tableStudents->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("frmPrincipal", "CI", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableStudents->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("frmPrincipal", "Nombres ", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableStudents->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("frmPrincipal", "Apellidos", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableStudents->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("frmPrincipal", "Grupo", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableStudents->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("frmPrincipal", "Ingreso UJC", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableStudents->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("frmPrincipal", "Donante", 0));
        lblTBoard->setText(QApplication::translate("frmPrincipal", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt;\">Listado de Estudiantes</span></p></body></html>", 0));
        pshBtrShowEverything->setText(QApplication::translate("frmPrincipal", "Mostrar todo", 0));
        pshBtrShowEverything->setShortcut(QApplication::translate("frmPrincipal", "Ctrl+A", 0));
        tabMain->setTabText(tabMain->indexOf(tabEstudiantes), QApplication::translate("frmPrincipal", "Estudiantes", 0));
        tabMain->setTabText(tabMain->indexOf(tabConsultas), QApplication::translate("frmPrincipal", "Consultas", 0));
        menuMen->setTitle(QApplication::translate("frmPrincipal", "Men\303\272", 0));
    } // retranslateUi

};

namespace Ui {
    class frmPrincipal: public Ui_frmPrincipal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMPRINCIPAL_H
