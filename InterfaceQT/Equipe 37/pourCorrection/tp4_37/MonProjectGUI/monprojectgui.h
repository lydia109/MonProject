#ifndef MONPROJECTGUI_H
#define MONPROJECTGUI_H

#include <QtGui/QMainWindow>
#include "ui_monprojectgui.h"
#include "Personne.h"
#include "Annuaire.h"
#include <vector>

class MonProjectGUI : public QMainWindow
{
    Q_OBJECT

public:
    MonProjectGUI(QWidget *parent = 0);
    ~MonProjectGUI();
    void ajouterPersonneJoueur(const std::string& p_position,const std::string& p_telephone,const std::string& p_nom,const std::string& p_prenom,util::Date p_dateNaissance);
    void ajouterPersonneEntraineur(const std::string& p_numRAMQ,const char& p_sex,const std::string& p_telephone,const std::string& p_nom,
    			const std::string& p_prenom,util::Date p_dateNaissance);
        //Ajouter une personne
       private slots:
        void dialogAjouterJoueur();
        void dialogAjouterEntraineur();
private:
    Ui::MonProjectGUIClass ui;
    std::vector<hokey::Personne *>m_vPersonne;
    Annuaire unAnnuaire;
    ////void AfficherProprietaireFormate();
};

#endif // MONPROJECTGUI_H
