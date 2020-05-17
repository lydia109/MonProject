/********************************************************************************
** Form generated from reading UI file 'ajoutentraineurinterface.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUTENTRAINEURINTERFACE_H
#define UI_AJOUTENTRAINEURINTERFACE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDateEdit>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ajoutEntraineurInterfaceClass
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_Nom;
    QLineEdit *lineEdit_Telephone;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_Prenom;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEdit_RAMQ;
    QPushButton *pushButton_valide;
    QLabel *label_7;
    QLineEdit *lineEdit_Sexe;
    QDateEdit *dateEdit;

    void setupUi(QDialog *ajoutEntraineurInterfaceClass)
    {
        if (ajoutEntraineurInterfaceClass->objectName().isEmpty())
            ajoutEntraineurInterfaceClass->setObjectName(QString::fromUtf8("ajoutEntraineurInterfaceClass"));
        ajoutEntraineurInterfaceClass->resize(651, 455);
        label = new QLabel(ajoutEntraineurInterfaceClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 40, 361, 20));
        QFont font;
        font.setFamily(QString::fromUtf8("Noto Sans Arabic"));
        font.setPointSize(15);
        font.setBold(true);
        font.setItalic(true);
        font.setUnderline(false);
        font.setWeight(75);
        font.setStrikeOut(false);
        label->setFont(font);
        label->setLineWidth(1);
        label->setTextFormat(Qt::AutoText);
        label_2 = new QLabel(ajoutEntraineurInterfaceClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 90, 261, 17));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(11);
        label_2->setFont(font1);
        lineEdit_Nom = new QLineEdit(ajoutEntraineurInterfaceClass);
        lineEdit_Nom->setObjectName(QString::fromUtf8("lineEdit_Nom"));
        lineEdit_Nom->setGeometry(QRect(310, 80, 161, 27));
        lineEdit_Telephone = new QLineEdit(ajoutEntraineurInterfaceClass);
        lineEdit_Telephone->setObjectName(QString::fromUtf8("lineEdit_Telephone"));
        lineEdit_Telephone->setGeometry(QRect(310, 290, 161, 27));
        lineEdit = new QLineEdit(ajoutEntraineurInterfaceClass);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(310, 200, 161, 27));
        lineEdit_Prenom = new QLineEdit(ajoutEntraineurInterfaceClass);
        lineEdit_Prenom->setObjectName(QString::fromUtf8("lineEdit_Prenom"));
        lineEdit_Prenom->setGeometry(QRect(310, 150, 161, 27));
        label_3 = new QLabel(ajoutEntraineurInterfaceClass);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 160, 261, 17));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setFont(font1);
        label_4 = new QLabel(ajoutEntraineurInterfaceClass);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 200, 261, 17));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setFont(font1);
        label_5 = new QLabel(ajoutEntraineurInterfaceClass);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 300, 261, 17));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setFont(font1);
        label_6 = new QLabel(ajoutEntraineurInterfaceClass);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 340, 261, 17));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setFont(font1);
        lineEdit_RAMQ = new QLineEdit(ajoutEntraineurInterfaceClass);
        lineEdit_RAMQ->setObjectName(QString::fromUtf8("lineEdit_RAMQ"));
        lineEdit_RAMQ->setGeometry(QRect(310, 330, 161, 27));
        pushButton_valide = new QPushButton(ajoutEntraineurInterfaceClass);
        pushButton_valide->setObjectName(QString::fromUtf8("pushButton_valide"));
        pushButton_valide->setGeometry(QRect(210, 390, 191, 41));
        pushButton_valide->setBaseSize(QSize(3, 0));
        pushButton_valide->setIconSize(QSize(30, 40));
        label_7 = new QLabel(ajoutEntraineurInterfaceClass);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(30, 250, 261, 17));
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);
        label_7->setFont(font1);
        lineEdit_Sexe = new QLineEdit(ajoutEntraineurInterfaceClass);
        lineEdit_Sexe->setObjectName(QString::fromUtf8("lineEdit_Sexe"));
        lineEdit_Sexe->setGeometry(QRect(310, 250, 161, 27));
        dateEdit = new QDateEdit(ajoutEntraineurInterfaceClass);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(310, 200, 161, 27));

        retranslateUi(ajoutEntraineurInterfaceClass);
        QObject::connect(pushButton_valide, SIGNAL(clicked()), ajoutEntraineurInterfaceClass, SLOT(validerEnregistrement()));

        QMetaObject::connectSlotsByName(ajoutEntraineurInterfaceClass);
    } // setupUi

    void retranslateUi(QDialog *ajoutEntraineurInterfaceClass)
    {
        ajoutEntraineurInterfaceClass->setWindowTitle(QApplication::translate("ajoutEntraineurInterfaceClass", "ajoutEntraineurInterface", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ajoutEntraineurInterfaceClass", "                  Ajout d'un  entra\303\256neur ", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ajoutEntraineurInterfaceClass", "Nom de l'entra\303\256neur                          : ", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ajoutEntraineurInterfaceClass", "Pr\303\251nom de l'entra\303\256neur                      : ", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ajoutEntraineurInterfaceClass", "Date de naissance de l'entra\303\256neur     :      ", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("ajoutEntraineurInterfaceClass", "Num\303\251ro du telephone d'l'entra\303\256neur :      ", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("ajoutEntraineurInterfaceClass", "Num\303\251ro de RAMQ  de l'entra\303\256neur     : ", 0, QApplication::UnicodeUTF8));
        pushButton_valide->setText(QApplication::translate("ajoutEntraineurInterfaceClass", "Valider l'entra\303\256neur ajout\303\250", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("ajoutEntraineurInterfaceClass", "Sexe  de l'entra\303\256neur                            : ", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ajoutEntraineurInterfaceClass: public Ui_ajoutEntraineurInterfaceClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTENTRAINEURINTERFACE_H
