/********************************************************************************
** Form generated from reading UI file 'monprojectgui.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MONPROJECTGUI_H
#define UI_MONPROJECTGUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QTextBrowser>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MonProjectGUIClass
{
public:
    QAction *actionJoueur;
    QAction *actionEntraineur;
    QAction *actionQuitter;
    QWidget *centralwidget;
    QLabel *label;
    QTextBrowser *textBrowser;
    QFrame *line_2;
    QFrame *line_3;
    QMenuBar *menubar;
    QMenu *menuMenu_d_ajout_d_une_personne;
    QMenu *menuAjouter_personne;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MonProjectGUIClass)
    {
        if (MonProjectGUIClass->objectName().isEmpty())
            MonProjectGUIClass->setObjectName(QString::fromUtf8("MonProjectGUIClass"));
        MonProjectGUIClass->resize(800, 600);
        actionJoueur = new QAction(MonProjectGUIClass);
        actionJoueur->setObjectName(QString::fromUtf8("actionJoueur"));
        actionEntraineur = new QAction(MonProjectGUIClass);
        actionEntraineur->setObjectName(QString::fromUtf8("actionEntraineur"));
        actionQuitter = new QAction(MonProjectGUIClass);
        actionQuitter->setObjectName(QString::fromUtf8("actionQuitter"));
        centralwidget = new QWidget(MonProjectGUIClass);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 40, 481, 111));
        QFont font;
        font.setPointSize(27);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label->setFont(font);
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(70, 160, 581, 321));
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(310, 510, 111, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(230, 20, 231, 21));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        MonProjectGUIClass->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MonProjectGUIClass);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        menuMenu_d_ajout_d_une_personne = new QMenu(menubar);
        menuMenu_d_ajout_d_une_personne->setObjectName(QString::fromUtf8("menuMenu_d_ajout_d_une_personne"));
        menuAjouter_personne = new QMenu(menuMenu_d_ajout_d_une_personne);
        menuAjouter_personne->setObjectName(QString::fromUtf8("menuAjouter_personne"));
        MonProjectGUIClass->setMenuBar(menubar);
        statusbar = new QStatusBar(MonProjectGUIClass);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MonProjectGUIClass->setStatusBar(statusbar);

        menubar->addAction(menuMenu_d_ajout_d_une_personne->menuAction());
        menuMenu_d_ajout_d_une_personne->addAction(menuAjouter_personne->menuAction());
        menuMenu_d_ajout_d_une_personne->addAction(actionQuitter);
        menuAjouter_personne->addAction(actionJoueur);
        menuAjouter_personne->addAction(actionEntraineur);

        retranslateUi(MonProjectGUIClass);
        QObject::connect(actionQuitter, SIGNAL(triggered()), MonProjectGUIClass, SLOT(close()));

        QMetaObject::connectSlotsByName(MonProjectGUIClass);
    } // setupUi

    void retranslateUi(QMainWindow *MonProjectGUIClass)
    {
        MonProjectGUIClass->setWindowTitle(QApplication::translate("MonProjectGUIClass", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionJoueur->setText(QApplication::translate("MonProjectGUIClass", "Joueur", 0, QApplication::UnicodeUTF8));
        actionEntraineur->setText(QApplication::translate("MonProjectGUIClass", "Entraineur", 0, QApplication::UnicodeUTF8));
        actionQuitter->setText(QApplication::translate("MonProjectGUIClass", "Quitter", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MonProjectGUIClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; font-weight:600; font-style:italic;\">Bienvenue dans l'outil  </span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; font-weight:600; font-style:italic;\">d'ajout d'une personne</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        menuMenu_d_ajout_d_une_personne->setTitle(QApplication::translate("MonProjectGUIClass", "Menu d'ajout d'une personne", 0, QApplication::UnicodeUTF8));
        menuAjouter_personne->setTitle(QApplication::translate("MonProjectGUIClass", "Ajouter personne", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MonProjectGUIClass: public Ui_MonProjectGUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MONPROJECTGUI_H
