/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *lineAddName;
    QLineEdit *lineAddSurname;
    QLineEdit *lineAddAge;
    QComboBox *SexBox;
    QComboBox *LevelBox;
    QPushButton *AddButton;
    QLineEdit *lineFindName;
    QPushButton *FindButton;
    QPushButton *DeleteButton;
    QLineEdit *lineDeleteName;
    QLineEdit *lineDeleteSurname;
    QLineEdit *lineChangeName;
    QLineEdit *lineChangeSurname;
    QLineEdit *lineChangeAge;
    QPushButton *PrintButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *lineDeleteAge;
    QComboBox *ChangeLevelBox;
    QPushButton *ChangeButton;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(679, 409);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        lineAddName = new QLineEdit(centralwidget);
        lineAddName->setObjectName("lineAddName");
        lineAddName->setGeometry(QRect(10, 30, 126, 25));
        lineAddSurname = new QLineEdit(centralwidget);
        lineAddSurname->setObjectName("lineAddSurname");
        lineAddSurname->setGeometry(QRect(140, 30, 127, 25));
        lineAddAge = new QLineEdit(centralwidget);
        lineAddAge->setObjectName("lineAddAge");
        lineAddAge->setGeometry(QRect(270, 30, 126, 25));
        SexBox = new QComboBox(centralwidget);
        SexBox->setObjectName("SexBox");
        SexBox->setGeometry(QRect(400, 30, 75, 25));
        LevelBox = new QComboBox(centralwidget);
        LevelBox->setObjectName("LevelBox");
        LevelBox->setGeometry(QRect(480, 30, 75, 25));
        AddButton = new QPushButton(centralwidget);
        AddButton->setObjectName("AddButton");
        AddButton->setGeometry(QRect(570, 30, 93, 29));
        lineFindName = new QLineEdit(centralwidget);
        lineFindName->setObjectName("lineFindName");
        lineFindName->setGeometry(QRect(10, 120, 126, 25));
        FindButton = new QPushButton(centralwidget);
        FindButton->setObjectName("FindButton");
        FindButton->setGeometry(QRect(150, 120, 93, 29));
        DeleteButton = new QPushButton(centralwidget);
        DeleteButton->setObjectName("DeleteButton");
        DeleteButton->setGeometry(QRect(410, 200, 93, 29));
        lineDeleteName = new QLineEdit(centralwidget);
        lineDeleteName->setObjectName("lineDeleteName");
        lineDeleteName->setGeometry(QRect(10, 200, 126, 25));
        lineDeleteSurname = new QLineEdit(centralwidget);
        lineDeleteSurname->setObjectName("lineDeleteSurname");
        lineDeleteSurname->setGeometry(QRect(140, 200, 127, 25));
        lineChangeName = new QLineEdit(centralwidget);
        lineChangeName->setObjectName("lineChangeName");
        lineChangeName->setGeometry(QRect(10, 280, 126, 25));
        lineChangeSurname = new QLineEdit(centralwidget);
        lineChangeSurname->setObjectName("lineChangeSurname");
        lineChangeSurname->setGeometry(QRect(140, 280, 127, 25));
        lineChangeAge = new QLineEdit(centralwidget);
        lineChangeAge->setObjectName("lineChangeAge");
        lineChangeAge->setGeometry(QRect(270, 280, 126, 25));
        PrintButton = new QPushButton(centralwidget);
        PrintButton->setObjectName("PrintButton");
        PrintButton->setGeometry(QRect(144, 343, 341, 31));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(11, 11, 29, 20));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(140, 10, 63, 20));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(270, 10, 33, 20));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(11, 94, 121, 20));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(11, 177, 29, 20));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(140, 180, 63, 20));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(270, 180, 33, 20));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(11, 260, 29, 20));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(144, 260, 63, 20));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(270, 260, 33, 20));
        lineDeleteAge = new QLineEdit(centralwidget);
        lineDeleteAge->setObjectName("lineDeleteAge");
        lineDeleteAge->setGeometry(QRect(270, 200, 126, 25));
        ChangeLevelBox = new QComboBox(centralwidget);
        ChangeLevelBox->setObjectName("ChangeLevelBox");
        ChangeLevelBox->setGeometry(QRect(410, 280, 75, 25));
        ChangeButton = new QPushButton(centralwidget);
        ChangeButton->setObjectName("ChangeButton");
        ChangeButton->setGeometry(QRect(500, 280, 106, 29));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(400, 10, 27, 20));
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(480, 10, 49, 20));
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(411, 260, 49, 20));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 679, 26));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        AddButton->setText(QCoreApplication::translate("MainWindow", "Dodaj", nullptr));
        FindButton->setText(QCoreApplication::translate("MainWindow", "Znajd\305\272", nullptr));
        DeleteButton->setText(QCoreApplication::translate("MainWindow", "Usu\305\204", nullptr));
        PrintButton->setText(QCoreApplication::translate("MainWindow", "Wy\305\233wietl oraz zapisz list\304\231", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Imi\304\231", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Nazwisko", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Wiek", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Imi\304\231 lub Nazwisko", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Imi\304\231", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Nazwisko", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Wiek", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Imi\304\231", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Nazwisko", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Wiek", nullptr));
        ChangeButton->setText(QCoreApplication::translate("MainWindow", "Zmie\305\204 poziom", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "P\305\202e\304\207", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Poziom", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Poziom", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
