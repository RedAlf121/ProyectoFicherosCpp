/********************************************************************************
** Form generated from reading UI file 'UfrmMain.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
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
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pshBtrShowEverything;
    QPushButton *pshBtrInsertStudent;
    QPushButton *pshBtrDeleteStudent;
    QWidget *tab_queries;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pshBtrShowSelectQuery;
    QPushButton *pshBtrShowEverything_2;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ufrmMain)
    {
        if (ufrmMain->objectName().isEmpty())
            ufrmMain->setObjectName(QStringLiteral("ufrmMain"));
        ufrmMain->resize(948, 600);
        ufrmMain->setMinimumSize(QSize(800, 600));
        ufrmMain->setMaximumSize(QSize(1920, 1080));
        QFont font;
        font.setFamily(QStringLiteral("Verdana"));
        font.setPointSize(12);
        ufrmMain->setFont(font);
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
        centralWidget->setFont(font);
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(-1, -1, 941, 541));
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
        tableStudents->setGeometry(QRect(330, 40, 591, 501));
        tableStudents->setFont(font);
        lblTBoard = new QLabel(tabWidget);
        lblTBoard->setObjectName(QStringLiteral("lblTBoard"));
        lblTBoard->setGeometry(QRect(260, 0, 581, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Verdana"));
        font1.setPointSize(28);
        lblTBoard->setFont(font1);
        horizontalLayoutWidget = new QWidget(tabWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 0, 311, 541));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        tabMain = new QTabWidget(horizontalLayoutWidget);
        tabMain->setObjectName(QStringLiteral("tabMain"));
        tabMain->setFont(font);
        tabMain->setIconSize(QSize(32, 32));
        tab_students = new QWidget();
        tab_students->setObjectName(QStringLiteral("tab_students"));
        verticalLayoutWidget = new QWidget(tab_students);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(3, -1, 291, 521));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pshBtrShowEverything = new QPushButton(verticalLayoutWidget);
        pshBtrShowEverything->setObjectName(QStringLiteral("pshBtrShowEverything"));
        pshBtrShowEverything->setMinimumSize(QSize(0, 64));
        pshBtrShowEverything->setFont(font);
        pshBtrShowEverything->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon1;
        icon1.addFile(QStringLiteral("Resources/show_all_32.png"), QSize(), QIcon::Normal, QIcon::Off);
        pshBtrShowEverything->setIcon(icon1);
        pshBtrShowEverything->setIconSize(QSize(32, 32));

        verticalLayout->addWidget(pshBtrShowEverything);

        pshBtrInsertStudent = new QPushButton(verticalLayoutWidget);
        pshBtrInsertStudent->setObjectName(QStringLiteral("pshBtrInsertStudent"));
        pshBtrInsertStudent->setMinimumSize(QSize(0, 64));
        pshBtrInsertStudent->setFont(font);
        pshBtrInsertStudent->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon2;
        icon2.addFile(QStringLiteral("Resources/student_32.png"), QSize(), QIcon::Normal, QIcon::Off);
        pshBtrInsertStudent->setIcon(icon2);
        pshBtrInsertStudent->setIconSize(QSize(32, 32));

        verticalLayout->addWidget(pshBtrInsertStudent);

        pshBtrDeleteStudent = new QPushButton(verticalLayoutWidget);
        pshBtrDeleteStudent->setObjectName(QStringLiteral("pshBtrDeleteStudent"));
        pshBtrDeleteStudent->setMinimumSize(QSize(0, 64));
        pshBtrDeleteStudent->setFont(font);
        pshBtrDeleteStudent->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon3;
        icon3.addFile(QStringLiteral("Resources/delete_32.png"), QSize(), QIcon::Normal, QIcon::Off);
        pshBtrDeleteStudent->setIcon(icon3);
        pshBtrDeleteStudent->setIconSize(QSize(32, 32));

        verticalLayout->addWidget(pshBtrDeleteStudent);

        QIcon icon4;
        icon4.addFile(QStringLiteral("Resources/studentTab_32.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabMain->addTab(tab_students, icon4, QString());
        tab_queries = new QWidget();
        tab_queries->setObjectName(QStringLiteral("tab_queries"));
        verticalLayoutWidget_2 = new QWidget(tab_queries);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(13, -1, 271, 521));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pshBtrShowSelectQuery = new QPushButton(verticalLayoutWidget_2);
        pshBtrShowSelectQuery->setObjectName(QStringLiteral("pshBtrShowSelectQuery"));
        pshBtrShowSelectQuery->setMinimumSize(QSize(0, 64));
        pshBtrShowSelectQuery->setFont(font);
        pshBtrShowSelectQuery->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_2->addWidget(pshBtrShowSelectQuery);

        pshBtrShowEverything_2 = new QPushButton(verticalLayoutWidget_2);
        pshBtrShowEverything_2->setObjectName(QStringLiteral("pshBtrShowEverything_2"));
        pshBtrShowEverything_2->setMinimumSize(QSize(0, 64));
        pshBtrShowEverything_2->setFont(font);
        pshBtrShowEverything_2->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_2->addWidget(pshBtrShowEverything_2);

        QIcon icon5;
        icon5.addFile(QStringLiteral("Resources/query_32.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabMain->addTab(tab_queries, icon5, QString());

        horizontalLayout->addWidget(tabMain);


        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        ufrmMain->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(ufrmMain);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ufrmMain->setStatusBar(statusBar);

        retranslateUi(ufrmMain);

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
        ___qtablewidgetitem4->setText(QApplication::translate("ufrmMain", "Ingreso\n"
"UJC", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableStudents->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("ufrmMain", "Donante", 0));
        lblTBoard->setText(QApplication::translate("ufrmMain", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt;\">Listado de Estudiantes</span></p></body></html>", 0));
        pshBtrShowEverything->setText(QApplication::translate("ufrmMain", "Mostrar todo", 0));
        pshBtrShowEverything->setShortcut(QApplication::translate("ufrmMain", "Ctrl+A", 0));
        pshBtrInsertStudent->setText(QApplication::translate("ufrmMain", "&Insertar", 0));
        pshBtrInsertStudent->setShortcut(QApplication::translate("ufrmMain", "Alt+I", 0));
        pshBtrDeleteStudent->setText(QApplication::translate("ufrmMain", "Eliminar", 0));
        pshBtrDeleteStudent->setShortcut(QApplication::translate("ufrmMain", "Ctrl+A", 0));
        tabMain->setTabText(tabMain->indexOf(tab_students), QApplication::translate("ufrmMain", "&Estudiantes", 0));
        pshBtrShowSelectQuery->setText(QApplication::translate("ufrmMain", "Consulta", 0));
        pshBtrShowSelectQuery->setShortcut(QApplication::translate("ufrmMain", "Ctrl+A", 0));
        pshBtrShowEverything_2->setText(QApplication::translate("ufrmMain", "Mostrar todo", 0));
        pshBtrShowEverything_2->setShortcut(QApplication::translate("ufrmMain", "Ctrl+A", 0));
        tabMain->setTabText(tabMain->indexOf(tab_queries), QApplication::translate("ufrmMain", "&Consultas", 0));
    } // retranslateUi

};

namespace Ui {
    class ufrmMain: public Ui_ufrmMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UFRMMAIN_H
