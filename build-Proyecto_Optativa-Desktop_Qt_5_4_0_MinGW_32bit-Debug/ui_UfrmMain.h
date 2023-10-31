/********************************************************************************
** Form generated from reading UI file 'UfrmMain.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UFRMMAIN_H
#define UI_UFRMMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ufrmMain
{
public:
    QAction *mnuActionInsertStudent;
    QAction *mnuActionDeleteStudent;
    QAction *mnuActionClose;
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QTabWidget *tabMain;
    QWidget *tabEstudiantes;
    QTableWidget *tableStudents;
    QLabel *lblTBoard;
    QPushButton *pshBtrShowEverything;
    QWidget *tabConsultas;
    QGroupBox *gboxUJC;
    QLabel *lblCI;
    QLabel *lblYear;
    QSpinBox *spinBoxYear;
    QLineEdit *lineCI;
    QPushButton *pshBtrModify;
    QGroupBox *gboxDonante;
    QLabel *lblCI_2;
    QLabel *lblYear_2;
    QSpinBox *spinBoxYear_2;
    QLineEdit *lineCI_2;
    QPushButton *pshBtrModify_2;
    QMenuBar *menuBar;
    QMenu *menuMen;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ufrmMain)
    {
        if (ufrmMain->objectName().isEmpty())
            ufrmMain->setObjectName(QStringLiteral("ufrmMain"));
        ufrmMain->resize(800, 600);
        ufrmMain->setMinimumSize(QSize(800, 600));
        ufrmMain->setMaximumSize(QSize(1920, 1080));
        QIcon icon;
        icon.addFile(QStringLiteral("Resources/Screenshot 2023-10-21 155727~1.ico"), QSize(), QIcon::Normal, QIcon::Off);
        ufrmMain->setWindowIcon(icon);
        ufrmMain->setWindowOpacity(1);
        mnuActionInsertStudent = new QAction(ufrmMain);
        mnuActionInsertStudent->setObjectName(QStringLiteral("mnuActionInsertStudent"));
        mnuActionDeleteStudent = new QAction(ufrmMain);
        mnuActionDeleteStudent->setObjectName(QStringLiteral("mnuActionDeleteStudent"));
        mnuActionClose = new QAction(ufrmMain);
        mnuActionClose->setObjectName(QStringLiteral("mnuActionClose"));
        centralWidget = new QWidget(ufrmMain);
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
        tabMain->setEnabled(true);
        tabMain->setAutoFillBackground(false);
        tabMain->setTabShape(QTabWidget::Triangular);
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
        gboxUJC = new QGroupBox(tabConsultas);
        gboxUJC->setObjectName(QStringLiteral("gboxUJC"));
        gboxUJC->setEnabled(true);
        gboxUJC->setGeometry(QRect(180, 50, 421, 171));
        lblCI = new QLabel(gboxUJC);
        lblCI->setObjectName(QStringLiteral("lblCI"));
        lblCI->setGeometry(QRect(40, 40, 101, 16));
        lblYear = new QLabel(gboxUJC);
        lblYear->setObjectName(QStringLiteral("lblYear"));
        lblYear->setGeometry(QRect(60, 80, 81, 16));
        spinBoxYear = new QSpinBox(gboxUJC);
        spinBoxYear->setObjectName(QStringLiteral("spinBoxYear"));
        spinBoxYear->setGeometry(QRect(150, 80, 51, 22));
        spinBoxYear->setMinimum(2000);
        spinBoxYear->setMaximum(2023);
        lineCI = new QLineEdit(gboxUJC);
        lineCI->setObjectName(QStringLiteral("lineCI"));
        lineCI->setGeometry(QRect(150, 40, 191, 22));
        pshBtrModify = new QPushButton(gboxUJC);
        pshBtrModify->setObjectName(QStringLiteral("pshBtrModify"));
        pshBtrModify->setGeometry(QRect(290, 130, 93, 28));
        gboxDonante = new QGroupBox(tabConsultas);
        gboxDonante->setObjectName(QStringLiteral("gboxDonante"));
        gboxDonante->setGeometry(QRect(180, 300, 421, 171));
        gboxDonante->setFlat(false);
        gboxDonante->setCheckable(false);
        lblCI_2 = new QLabel(gboxDonante);
        lblCI_2->setObjectName(QStringLiteral("lblCI_2"));
        lblCI_2->setGeometry(QRect(40, 40, 101, 16));
        lblYear_2 = new QLabel(gboxDonante);
        lblYear_2->setObjectName(QStringLiteral("lblYear_2"));
        lblYear_2->setGeometry(QRect(50, 80, 91, 20));
        spinBoxYear_2 = new QSpinBox(gboxDonante);
        spinBoxYear_2->setObjectName(QStringLiteral("spinBoxYear_2"));
        spinBoxYear_2->setGeometry(QRect(150, 80, 51, 22));
        spinBoxYear_2->setMinimum(2000);
        spinBoxYear_2->setMaximum(2023);
        lineCI_2 = new QLineEdit(gboxDonante);
        lineCI_2->setObjectName(QStringLiteral("lineCI_2"));
        lineCI_2->setGeometry(QRect(150, 40, 191, 22));
        pshBtrModify_2 = new QPushButton(gboxDonante);
        pshBtrModify_2->setObjectName(QStringLiteral("pshBtrModify_2"));
        pshBtrModify_2->setGeometry(QRect(290, 130, 93, 28));
        tabMain->addTab(tabConsultas, QString());

        gridLayout->addWidget(tabMain, 0, 0, 1, 1);

        ufrmMain->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ufrmMain);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 26));
        menuMen = new QMenu(menuBar);
        menuMen->setObjectName(QStringLiteral("menuMen"));
        ufrmMain->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ufrmMain);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ufrmMain->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ufrmMain);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ufrmMain->setStatusBar(statusBar);

        menuBar->addAction(menuMen->menuAction());
        menuMen->addAction(mnuActionInsertStudent);
        menuMen->addAction(mnuActionDeleteStudent);
        menuMen->addAction(mnuActionClose);

        retranslateUi(ufrmMain);
        QObject::connect(mnuActionClose, SIGNAL(triggered()), ufrmMain, SLOT(close()));

        tabMain->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(ufrmMain);
    } // setupUi

    void retranslateUi(QMainWindow *ufrmMain)
    {
        ufrmMain->setWindowTitle(QApplication::translate("ufrmMain", "Universidad", 0));
        mnuActionInsertStudent->setText(QApplication::translate("ufrmMain", "&Insertar estudiante...", 0));
        mnuActionInsertStudent->setShortcut(QApplication::translate("ufrmMain", "Ctrl+I", 0));
        mnuActionDeleteStudent->setText(QApplication::translate("ufrmMain", "&Eliminar estudiante...", 0));
        mnuActionDeleteStudent->setShortcut(QApplication::translate("ufrmMain", "Ctrl+D", 0));
        mnuActionClose->setText(QApplication::translate("ufrmMain", "&Cerrar", 0));
        mnuActionClose->setShortcut(QApplication::translate("ufrmMain", "Ctrl+Alt+F4", 0));
        QTableWidgetItem *___qtablewidgetitem = tableStudents->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ufrmMain", "CI", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableStudents->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ufrmMain", "Nombres ", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableStudents->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("ufrmMain", "Apellidos", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableStudents->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("ufrmMain", "Grupo", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableStudents->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("ufrmMain", "Ingreso UJC", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableStudents->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("ufrmMain", "Donante", 0));
        lblTBoard->setText(QApplication::translate("ufrmMain", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt;\">Listado de Estudiantes</span></p></body></html>", 0));
        pshBtrShowEverything->setText(QApplication::translate("ufrmMain", "Mostrar todo", 0));
        pshBtrShowEverything->setShortcut(QApplication::translate("ufrmMain", "Ctrl+A", 0));
        tabMain->setTabText(tabMain->indexOf(tabEstudiantes), QApplication::translate("ufrmMain", "Estudiantes", 0));
        gboxUJC->setTitle(QApplication::translate("ufrmMain", "UJC Estudiante 3er A\303\261o", 0));
        lblCI->setText(QApplication::translate("ufrmMain", "<html><head/><body><p align=\"right\">Carnet Identidad:</p></body></html>", 0));
        lblYear->setText(QApplication::translate("ufrmMain", "<html><head/><body><p align=\"right\">A\303\261o Ingreso:</p></body></html>", 0));
        pshBtrModify->setText(QApplication::translate("ufrmMain", "Modificar", 0));
        gboxDonante->setTitle(QApplication::translate("ufrmMain", "Donante Sangre", 0));
        lblCI_2->setText(QApplication::translate("ufrmMain", "<html><head/><body><p align=\"right\">Carnet Identidad:</p></body></html>", 0));
        lblYear_2->setText(QApplication::translate("ufrmMain", "<html><head/><body><p align=\"right\">A\303\261o Donaci\303\263n:</p></body></html>", 0));
        pshBtrModify_2->setText(QApplication::translate("ufrmMain", "Modificar", 0));
        tabMain->setTabText(tabMain->indexOf(tabConsultas), QApplication::translate("ufrmMain", "Consultas", 0));
        menuMen->setTitle(QApplication::translate("ufrmMain", "Men\303\272", 0));
    } // retranslateUi

};

namespace Ui {
    class ufrmMain: public Ui_ufrmMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UFRMMAIN_H
