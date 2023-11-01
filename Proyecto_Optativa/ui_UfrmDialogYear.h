/********************************************************************************
** Form generated from reading UI file 'UfrmDialogYear.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UFRMDIALOGYEAR_H
#define UI_UFRMDIALOGYEAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QSpinBox *spinBox;
    QLabel *label_init;
    QLabel *label_dynamic;
    QPushButton *pshBtrAccept;
    QPushButton *pshBtrDecline;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(255, 131);
        QFont font;
        font.setFamily(QStringLiteral("Verdana"));
        font.setPointSize(12);
        Dialog->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral("Resources/date_32.png"), QSize(), QIcon::Normal, QIcon::Off);
        Dialog->setWindowIcon(icon);
        spinBox = new QSpinBox(Dialog);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(100, 45, 61, 22));
        spinBox->setMinimum(2000);
        spinBox->setMaximum(2023);
        label_init = new QLabel(Dialog);
        label_init->setObjectName(QStringLiteral("label_init"));
        label_init->setGeometry(QRect(10, 10, 161, 20));
        label_dynamic = new QLabel(Dialog);
        label_dynamic->setObjectName(QStringLiteral("label_dynamic"));
        label_dynamic->setGeometry(QRect(10, 40, 91, 31));
        pshBtrAccept = new QPushButton(Dialog);
        pshBtrAccept->setObjectName(QStringLiteral("pshBtrAccept"));
        pshBtrAccept->setGeometry(QRect(10, 90, 111, 31));
        QIcon icon1;
        icon1.addFile(QStringLiteral("Resources/accept_32.png"), QSize(), QIcon::Normal, QIcon::Off);
        pshBtrAccept->setIcon(icon1);
        pshBtrAccept->setIconSize(QSize(32, 32));
        pshBtrDecline = new QPushButton(Dialog);
        pshBtrDecline->setObjectName(QStringLiteral("pshBtrDecline"));
        pshBtrDecline->setGeometry(QRect(140, 90, 111, 31));
        QIcon icon2;
        icon2.addFile(QStringLiteral("Resources/icons8_Delete_32.png"), QSize(), QIcon::Normal, QIcon::Off);
        pshBtrDecline->setIcon(icon2);
        pshBtrDecline->setIconSize(QSize(32, 32));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
        QObject::connect(pshBtrDecline, SIGNAL(clicked()), Dialog, SLOT(close()));
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0));
        label_init->setText(QApplication::translate("Dialog", "Ingrese el a\303\261o de", 0));
        label_dynamic->setText(QApplication::translate("Dialog", "militancia:", 0));
        pshBtrAccept->setText(QApplication::translate("Dialog", "Accept", 0));
        pshBtrDecline->setText(QApplication::translate("Dialog", "Decline", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UFRMDIALOGYEAR_H
