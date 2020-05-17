#include "monprojectgui.h"
#include "Joueur.h"
#include "Entraineur.h"
#include "PersonneException.h"
#include "ajouterjoueurinterface.h"
#include "ajoutentraineurinterface.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QTableWidgetItem>
#include <iostream>
#include <qstring.h>
#include <qmessagebox.h>
#include <string>

MonProjectGUI::MonProjectGUI(QWidget *parent)
    : QMainWindow(parent),unAnnuaire("hockey club")
{
	ui.setupUi(this);
	QObject::connect(ui.actionJoueur, SIGNAL(triggered()), this, SLOT(dialogAjouterJoueur()));
	QObject::connect(ui.actionEntraineur, SIGNAL(triggered()), this, SLOT(dialogAjouterEntraineur()));

}
MonProjectGUI::~MonProjectGUI()
{
	 for (unsigned i=0; i<m_vPersonne.size();i++)
	    {
	    	delete m_vPersonne[i];
	    }
}

void MonProjectGUI:: dialogAjouterJoueur(){
	ajouterJoueurInterface SaisieJoueur(this);
	if (SaisieJoueur.exec()){
		ajouterPersonneJoueur(SaisieJoueur.reqPosition().toStdString(),SaisieJoueur.reqTelephone().toStdString()
				,SaisieJoueur.reqNom().toStdString(),SaisieJoueur.reqPrenom().toStdString()
			,SaisieJoueur.reqDateNaissance());

		QString RafrichirTexte = QString::fromStdString(unAnnuaire.reqAnnuaireFormate());
		ui.textBrowser->setText(RafrichirTexte);
 }

}
void  MonProjectGUI:: dialogAjouterEntraineur()
{
   ajoutEntraineurInterface SaisirEntraineur(this);
	if (SaisirEntraineur.exec()){
		ajouterPersonneEntraineur(SaisirEntraineur.reqRAMQ().toStdString(),(SaisirEntraineur.reqSexe().toStdString())[0],SaisirEntraineur.reqTelephone().toStdString()
				,SaisirEntraineur.reqNom().toStdString(),SaisirEntraineur.reqPrenom().toStdString()
			,SaisirEntraineur.reqDateNaissance());

		QString RafrichirTexte = QString::fromStdString(unAnnuaire.reqAnnuaireFormate());
		ui.textBrowser->setText(RafrichirTexte);
}


}

//Ajouter une personne joueur dans le vecteur personne
void  MonProjectGUI::ajouterPersonneJoueur (const std::string& p_position,const std::string& p_telephone,const std::string& p_nom,const std::string& p_prenom,util::Date p_dateNaissance)
{
	try{
	  Joueur  joueur(p_position,p_telephone,p_nom, p_prenom , p_dateNaissance);
	  unAnnuaire.ajouterPersonne(joueur);

	} catch (PersonneDejaPresenteException& e){
		QString message = (e.what());
		QMessageBox::information(this, "Joueur existe deja", message);
	}



}
//Ajouter une personne entraineur dans le vecteur personne
void  MonProjectGUI::ajouterPersonneEntraineur(const std::string& p_numRAMQ,const char& p_sex,const std::string& p_telephone,const std::string& p_nom,
    			const std::string& p_prenom,util::Date p_dateNaissance)
{
	try{
		    	  Entraineur  entraineur(p_numRAMQ, p_sex,p_telephone, p_nom,p_prenom, p_dateNaissance);
		         unAnnuaire.ajouterPersonne(entraineur);
		      	} catch (PersonneDejaPresenteException& e){
		      		QString message = (e.what());
		      		QMessageBox::information(this, "Entraineur existe deja", message);
		      	}
}


