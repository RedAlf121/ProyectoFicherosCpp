/********************************************************************************
** Form generated from reading UI file 'dialogInsertar.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGINSERTAR_H
#define UI_DIALOGINSERTAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dialogInsertar
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QGroupBox *gboxData;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineName;
    QLineEdit *lineLastNames;
    QLineEdit *lineID;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *lblNames;
    QLabel *lblLastNames;
    QLabel *lblID;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *lblGroup;
    QSpinBox *spinBox_group;
    QLabel *lblUJC;
    QSpinBox *spinBox_yearUJC;
    QLabel *lblDonation;
    QSpinBox *spinBox_yearFirstDonation;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pshBtrAccept;
    QPushButton *pshBtrCancel;

    void setupUi(QDialog *dialogInsertar)
    {
        if (dialogInsertar->objectName().isEmpty())
            dialogInsertar->setObjectName(QStringLiteral("dialogInsertar"));
        dialogInsertar->resize(546, 376);
        verticalLayout = new QVBoxLayout(dialogInsertar);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gboxData = new QGroupBox(dialogInsertar);
        gboxData->setObjectName(QStringLiteral("gboxData"));
        verticalLayoutWidget = new QWidget(gboxData);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(210, 30, 271, 131));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineName = new QLineEdit(verticalLayoutWidget);
        lineName->setObjectName(QStringLiteral("lineName"));

        verticalLayout_2->addWidget(lineName);

        lineLastNames = new QLineEdit(verticalLayoutWidget);
        lineLastNames->setObjectName(QStringLiteral("lineLastNames"));

        verticalLayout_2->addWidget(lineLastNames);

        lineID = new QLineEdit(verticalLayoutWidget);
        lineID->setObjectName(QStringLiteral("lineID"));

        verticalLayout_2->addWidget(lineID);

        verticalLayoutWidget_2 = new QWidget(gboxData);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(40, 40, 160, 111));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        lblNames = new QLabel(verticalLayoutWidget_2);
        lblNames->setObjectName(QStringLiteral("lblNames"));

        verticalLayout_3->addWidget(lblNames);

        lblLastNames = new QLabel(verticalLayoutWidget_2);
        lblLastNames->setObjectName(QStringLiteral("lblLastNames"));

        verticalLayout_3->addWidget(lblLastNames);

        lblID = new QLabel(verticalLayoutWidget_2);
        lblID->setObjectName(QStringLiteral("lblID"));

        verticalLayout_3->addWidget(lblID);

        horizontalLayoutWidget = new QWidget(gboxData);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 170, 480, 71));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lblGroup = new QLabel(horizontalLayoutWidget);
        lblGroup->setObjectName(QStringLiteral("lblGroup"));

        horizontalLayout->addWidget(lblGroup);

        spinBox_group = new QSpinBox(horizontalLayoutWidget);
        spinBox_group->setObjectName(QStringLiteral("spinBox_group"));
        spinBox_group->setMinimum(11);
        spinBox_group->setMaximum(42);

        horizontalLayout->addWidget(spinBox_group);

        lblUJC = new QLabel(horizontalLayoutWidget);
        lblUJC->setObjectName(QStringLiteral("lblUJC"));

        horizontalLayout->addWidget(lblUJC);

        spinBox_yearUJC = new QSpinBox(horizontalLayoutWidget);
        spinBox_yearUJC->setObjectName(QStringLiteral("spinBox_yearUJC"));
        spinBox_yearUJC->setMinimum(2000);
        spinBox_yearUJC->setMaximum(2023);

        horizontalLayout->addWidget(spinBox_yearUJC);

        lblDonation = new QLabel(horizontalLayoutWidget);
        lblDonation->setObjectName(QStringLiteral("lblDonation"));

        horizontalLayout->addWidget(lblDonation);

        spinBox_yearFirstDonation = new QSpinBox(horizontalLayoutWidget);
        spinBox_yearFirstDonation->setObjectName(QStringLiteral("spinBox_yearFirstDonation"));
        spinBox_yearFirstDonation->setMinimum(2000);
        spinBox_yearFirstDonation->setMaximum(2023);

        horizontalLayout->addWidget(spinBox_yearFirstDonation);

        horizontalLayoutWidget_2 = new QWidget(gboxData);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(299, 270, 195, 80));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pshBtrAccept = new QPushButton(horizontalLayoutWidget_2);
        pshBtrAccept->setObjectName(QStringLiteral("pshBtrAccept"));

        horizontalLayout_2->addWidget(pshBtrAccept);

        pshBtrCancel = new QPushButton(horizontalLayoutWidget_2);
        pshBtrCancel->setObjectName(QStringLiteral("pshBtrCancel"));

        horizontalLayout_2->addWidget(pshBtrCancel);


        gridLayout->addWidget(gboxData, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(dialogInsertar);
        QObject::connect(pshBtrCancel, SIGNAL(clicked()), dialogInsertar, SLOT(close()));

        QMetaObject::connectSlotsByName(dialogInsertar);
    } // setupUi

    void retranslateUi(QDialog *dialogInsertar)
    {
        dialogInsertar->setWindowTitle(QApplication::translate("dialogInsertar", "Dialog", 0));
        gboxData->setTitle(QApplication::translate("dialogInsertar", "Introduzca los datos correspondientes", 0));
        lblNames->setText(QApplication::translate("dialogInsertar", "<html><head/><body><p align=\"right\">Nombre(s):</p></body></html>", 0));
        lblLastNames->setText(QApplication::translate("dialogInsertar", "<html><head/><body><p align=\"right\">Apellidos:</p></body></html>", 0));
        lblID->setText(QApplication::translate("dialogInsertar", "<html><head/><body><p align=\"right\">Carnet de Identidad:</p></body></html>", 0));
        lblGroup->setText(QApplication::translate("dialogInsertar", "<html><head/><body><p align=\"right\">IF-</p></body></html>", 0));
        lblUJC->setText(QApplication::translate("dialogInsertar", "<html><head/><body><p align=\"right\">A\303\261o Ingreso UJC:</p></body></html>", 0));
        lblDonation->setText(QApplication::translate("dialogInsertar", "<html><head/><body><p align=\"right\">A\303\261o Primera Donaci\303\263n:</p></body></html>", 0));
        pshBtrAccept->setText(QApplication::translate("dialogInsertar", "&Aceptar", 0));
        pshBtrCancel->setText(QApplication::translate("dialogInsertar", "&Cancelar", 0));
    } // retranslateUi

};

namespace Ui {
    class dialogInsertar: public Ui_dialogInsertar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGINSERTAR_H
