#-------------------------------------------------
#
# Project created by QtCreator 2023-10-21T18:15:42
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Proyecto_Optativa
TEMPLATE = app


SOURCES += main.cpp\
    gui/UfrmDialogInsert/UfrmDialogInsert.cpp \
    gui/UfrmMain/UfrmMain.cpp \
    gui/UfrmMilitancyUpdated/UfrmMilitancyUpdated.cpp \
    gui/UfrmDonationUpdated/UfrmDonationUpdated.cpp \
    gui/UfrmDialogYear/UfrmDialogYear.cpp \
    gui/UfrmDialogYear/UYearDonation.cpp \
    gui/UfrmDialogYear/UYearMilitancy.cpp \
    logic/classes/student.cpp \
    logic/classes/referencestudent.cpp \
    logic/classes/identitycard.cpp \
    logic/auxClasses/donationyearaux.cpp \
    logic/auxClasses/militancyaux.cpp \
    logic/classes/school.cpp \
    logic/fileManagement/filealgorithm.cpp \
    logic/fileManagement/indexalgorithm.cpp \
    logic/fileManagement/blockalgorithm.cpp \
    logic/fileManagement/overflowalgorithm.cpp

HEADERS  += \
    gui/UfrmDialogInsert/UfrmDialogInsert.h \
    gui/UfrmMain/UfrmMain.h \
    gui/UfrmMilitancyUpdated/UfrmMilitancyUpdated.h \
    gui/UfrmDonationUpdated/UfrmDonationUpdated.h \
    gui/UfrmDialogYear/UfrmDialogYear.h \
    gui/UfrmDialogYear/utils.h \
    gui/UfrmDialogYear/UYearDonation.h \
    gui/UfrmDialogYear/UYearMilitancy.h \
    logic/classes/student.h \
    logic/classes/referencestudent.h \
    logic/classes/identitycard.h \
    logic/auxClasses/donationyearaux.h \
    logic/auxClasses/militancyaux.h \
    logic/classes/school.h \
    logic/fileManagement/filealgorithm.h \
    logic/fileManagement/indexalgorithm.h \
    logic/fileManagement/blockalgorithm.h \
    logic/fileManagement/overflowalgorithm.h

FORMS    += \
    gui/UfrmDialogInsert/UfrmDialogInsert.ui \
    gui/UfrmMain/UfrmMain.ui \
    gui/UfrmMilitancyUpdated/UfrmMilitancyUpdated.ui \
    gui/UfrmDonationUpdated/UfrmDonationUpdated.ui \
    gui/UfrmDialogYear/UfrmDialogYear.ui


