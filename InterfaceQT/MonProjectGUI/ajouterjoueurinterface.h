#ifndef AJOUTERJOUEURINTERFACE_H
#define AJOUTERJOUEURINTERFACE_H

#include <QtGui/QDialog>
#include "ui_ajouterjoueurinterface.h"
#include "Date.h"
class ajouterJoueurInterface : public QDialog
{
    Q_OBJECT

public:
    ajouterJoueurInterface(QWidget *parent = 0);
    ~ajouterJoueurInterface();
    QString reqNom() const ;
    QString reqTelephone() const ;
    QString reqPrenom() const ;
    QString reqPosition() const ;
    util:: Date reqDateNaissance() const ;


   private slots:

        void validerEnregistrement();
private:
    Ui::ajouterJoueurInterfaceClass ui;
    util::Date m_dateNaissance;
};

#endif // AJOUTERJOUEURINTERFACE_H
