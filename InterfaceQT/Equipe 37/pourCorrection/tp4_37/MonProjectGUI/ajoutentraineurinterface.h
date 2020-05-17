#ifndef AJOUTENTRAINEURINTERFACE_H
#define AJOUTENTRAINEURINTERFACE_H

#include <QtGui/QDialog>
#include "ui_ajoutentraineurinterface.h"
#include "Date.h"

class ajoutEntraineurInterface : public QDialog
{
    Q_OBJECT

public:
    ajoutEntraineurInterface(QWidget *parent = 0);
    ~ajoutEntraineurInterface();
    QString reqNom() const ;
    QString reqTelephone() const ;
    QString reqPrenom() const ;
    QString reqSexe() const ;
    QString reqRAMQ() const ;

    util:: Date reqDateNaissance() const ;

    private slots:
     void validerEnregistrement();
private:
    Ui::ajoutEntraineurInterfaceClass ui;
    util::Date m_dateNaissance;
};

#endif // AJOUTENTRAINEURINTERFACE_H
