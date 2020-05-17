/********************************************************************************
** Form generated from reading UI file 'ajouterjoueurinterface.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUTERJOUEURINTERFACE_H
#define UI_AJOUTERJOUEURINTERFACE_H

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

class Ui_ajouterJoueurInterfaceClass
{
public:
    QLineEdit *lineEdit_Nom;
    QLineEdit *lineEdit_Prenom;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_Position;
    QDateEdit *dateEdit;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton_valide;
    QLabel *label_6;
    QLineEdit *lineEdit_Telephone;

    void setupUi(QDialog *ajouterJoueurInterfaceClass)
    {
        if (ajouterJoueurInterfaceClass->objectName().isEmpty())
            ajouterJoueurInterfaceClass->setObjectName(QString::fromUtf8("ajouterJoueurInterfaceClass"));
        ajouterJoueurInterfaceClass->resize(600, 450);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ajouterJoueurInterfaceClass->sizePolicy().hasHeightForWidth());
        ajouterJoueurInterfaceClass->setSizePolicy(sizePolicy);
        lineEdit_Nom = new QLineEdit(ajouterJoueurInterfaceClass);
        lineEdit_Nom->setObjectName(QString::fromUtf8("lineEdit_Nom"));
        lineEdit_Nom->setGeometry(QRect(300, 60, 161, 27));
        lineEdit_Prenom = new QLineEdit(ajouterJoueurInterfaceClass);
        lineEdit_Prenom->setObjectName(QString::fromUtf8("lineEdit_Prenom"));
        lineEdit_Prenom->setGeometry(QRect(300, 110, 161, 27));
        lineEdit_3 = new QLineEdit(ajouterJoueurInterfaceClass);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(300, 200, 161, 27));
        lineEdit_Position = new QLineEdit(ajouterJoueurInterfaceClass);
        lineEdit_Position->setObjectName(QString::fromUtf8("lineEdit_Position"));
        lineEdit_Position->setGeometry(QRect(300, 250, 161, 27));
        dateEdit = new QDateEdit(ajouterJoueurInterfaceClass);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(300, 200, 161, 27));
        label = new QLabel(ajouterJoueurInterfaceClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 10, 361, 20));
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
        label_2 = new QLabel(ajouterJoueurInterfaceClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 60, 251, 17));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(11);
        label_2->setFont(font1);
        label_3 = new QLabel(ajouterJoueurInterfaceClass);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 120, 261, 17));
        label_3->setFont(font1);
        label_4 = new QLabel(ajouterJoueurInterfaceClass);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 200, 251, 17));
        label_4->setFont(font1);
        label_5 = new QLabel(ajouterJoueurInterfaceClass);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 250, 251, 17));
        label_5->setFont(font1);
        pushButton_valide = new QPushButton(ajouterJoueurInterfaceClass);
        pushButton_valide->setObjectName(QString::fromUtf8("pushButton_valide"));
        pushButton_valide->setGeometry(QRect(190, 320, 191, 41));
        pushButton_valide->setBaseSize(QSize(3, 0));
        pushButton_valide->setIconSize(QSize(30, 40));
        label_6 = new QLabel(ajouterJoueurInterfaceClass);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 170, 251, 17));
        label_6->setFont(font1);
        lineEdit_Telephone = new QLineEdit(ajouterJoueurInterfaceClass);
        lineEdit_Telephone->setObjectName(QString::fromUtf8("lineEdit_Telephone"));
        lineEdit_Telephone->setGeometry(QRect(300, 160, 161, 27));

        retranslateUi(ajouterJoueurInterfaceClass);
        QObject::connect(pushButton_valide, SIGNAL(clicked()), ajouterJoueurInterfaceClass, SLOT(validerEnregistrement()));

        QMetaObject::connectSlotsByName(ajouterJoueurInterfaceClass);
    } // setupUi

    void retranslateUi(QDialog *ajouterJoueurInterfaceClass)
    {
        ajouterJoueurInterfaceClass->setWindowTitle(QApplication::translate("ajouterJoueurInterfaceClass", "ajouterJoueurInterface", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ajouterJoueurInterfaceClass", "                  Ajout d'un joueur", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ajouterJoueurInterfaceClass", "Nom du joueur                                  : ", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ajouterJoueurInterfaceClass", "Pr\303\251nom du joueur                            : ", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ajouterJoueurInterfaceClass", "Date de naissance                             : ", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("ajouterJoueurInterfaceClass", "Position du joueur                            :", 0, QApplication::UnicodeUTF8));
        pushButton_valide->setText(QApplication::translate("ajouterJoueurInterfaceClass", "Valider le joueur ajout\303\250", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("ajouterJoueurInterfaceClass", "Num\303\251ro du t\303\251l\303\251phone  du joueur    : ", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ajouterJoueurInterfaceClass: public Ui_ajouterJoueurInterfaceClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTERJOUEURINTERFACE_H
