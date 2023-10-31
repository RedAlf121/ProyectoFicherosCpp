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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
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
    QFrame *tabWidget;
    QTableWidget *tableStudents;
    QLabel *lblTBoard;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabMain;
    QWidget *tab_students;
    QPushButton *pshBtrDeleteStudent;
    QPushButton *pshBtrShowEverything;
    QPushButton *pshBtrInsertStudent;
    QWidget *tab_queries;
    QPushButton *pshBtrShowEverything_2;
    QPushButton *pshBtrShowSelectQuery;
    QMenuBar *menuBar;
    QMenu *menuMen;
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
        gridLayoutWidget->setGeometry(QRect(-1, -1, 801, 541));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QFrame(gridLayoutWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setAutoFillBackground(false);
        tableStudents = new QTableWidget(tabWidget);
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
        tableStudents->setGeometry(QRect(190, 40, 601, 501));
        lblTBoard = new QLabel(tabWidget);
        lblTBoard->setObjectName(QStringLiteral("lblTBoard"));
        lblTBoard->setGeometry(QRect(200, 10, 581, 21));
        horizontalLayoutWidget = new QWidget(tabWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 0, 181, 541));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        tabMain = new QTabWidget(horizontalLayoutWidget);
        tabMain->setObjectName(QStringLiteral("tabMain"));
        tab_students = new QWidget();
        tab_students->setObjectName(QStringLiteral("tab_students"));
        pshBtrDeleteStudent = new QPushButton(tab_students);
        pshBtrDeleteStudent->setObjectName(QStringLiteral("pshBtrDeleteStudent"));
        pshBtrDeleteStudent->setGeometry(QRect(40, 400, 93, 24));
        pshBtrShowEverything = new QPushButton(tab_students);
        pshBtrShowEverything->setObjectName(QStringLiteral("pshBtrShowEverything"));
        pshBtrShowEverything->setGeometry(QRect(40, 70, 93, 24));
        pshBtrInsertStudent = new QPushButton(tab_students);
        pshBtrInsertStudent->setObjectName(QStringLiteral("pshBtrInsertStudent"));
        pshBtrInsertStudent->setGeometry(QRect(40, 100, 93, 24));
        tabMain->addTab(tab_students, QString());
        tab_queries = new QWidget();
        tab_queries->setObjectName(QStringLiteral("tab_queries"));
        pshBtrShowEverything_2 = new QPushButton(tab_queries);
        pshBtrShowEverything_2->setObjectName(QStringLiteral("pshBtrShowEverything_2"));
        pshBtrShowEverything_2->setGeometry(QRect(40, 70, 93, 24));
        pshBtrShowSelectQuery = new QPushButton(tab_queries);
        pshBtrShowSelectQuery->setObjectName(QStringLiteral("pshBtrShowSelectQuery"));
        pshBtrShowSelectQuery->setGeometry(QRect(40, 100, 93, 24));
        tabMain->addTab(tab_queries, QString());

        horizontalLayout->addWidget(tabMain);


        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        ufrmMain->setCentralWidget(centralWidget);
        gridLayoutWidget->raise();
        tabMain->raise();
        tabWidget->raise();
        menuBar = new QMenuBar(ufrmMain);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 26));
        menuMen = new QMenu(menuBar);
        menuMen->setObjectName(QStringLiteral("menuMen"));
        ufrmMain->setMenuBar(menuBar);
        statusBar = new QStatusBar(ufrmMain);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ufrmMain->setStatusBar(statusBar);

        menuBar->addAction(menuMen->menuAction());
        menuMen->addAction(mnuActionInsertStudent);
        menuMen->addAction(mnuActionDeleteStudent);
        menuMen->addAction(mnuActionClose);

        retranslateUi(ufrmMain);
        QObject::connect(mnuActionClose, SIGNAL(triggered()), ufrmMain, SLOT(close()));

        tabMain->setCurrentIndex(0);


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
        pshBtrDeleteStudent->setText(QApplication::translate("ufrmMain", "Eliminar", 0));
        pshBtrDeleteStudent->setShortcut(QApplication::translate("ufrmMain", "Ctrl+A", 0));
        pshBtrShowEverything->setText(QApplication::translate("ufrmMain", "Mostrar todo", 0));
        pshBtrShowEverything->setShortcut(QApplication::translate("ufrmMain", "Ctrl+A", 0));
        pshBtrInsertStudent->setText(QApplication::translate("ufrmMain", "Insertar", 0));
        pshBtrInsertStudent->setShortcut(QApplication::translate("ufrmMain", "Ctrl+A", 0));
        tabMain->setTabText(tabMain->indexOf(tab_students), QApplication::translate("ufrmMain", "Estudiantes", 0));
        pshBtrShowEverything_2->setText(QApplication::translate("ufrmMain", "Mostrar todo", 0));
        pshBtrShowEverything_2->setShortcut(QApplication::translate("ufrmMain", "Ctrl+A", 0));
        pshBtrShowSelectQuery->setText(QApplication::translate("ufrmMain", "Consulta", 0));
        pshBtrShowSelectQuery->setShortcut(QApplication::translate("ufrmMain", "Ctrl+A", 0));
        tabMain->setTabText(tabMain->indexOf(tab_queries), QApplication::translate("ufrmMain", "Consultas", 0));
        menuMen->setTitle(QApplication::translate("ufrmMain", "Men\303\272", 0));
    } // retranslateUi

};

namespace Ui {
    class ufrmMain: public Ui_ufrmMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UFRMMAIN_H
