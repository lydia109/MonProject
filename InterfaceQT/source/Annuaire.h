/*
 * Annuaire.h
 *
 *  Created on: 2020-03-27
 *      Author: etudiant
 */

#ifndef ANNUAIRE_H_
#define ANNUAIRE_H_
#include "Personne.h"
#include <vector>
#include "PersonneException.h"
class Annuaire {
public:
	/**
	 *\class Annuaire
	 *\ Cette classe permet de faire la gestion des personnes.
	 *\brief Cette classe sert à créer et à modifier un objet annuaire
	 *       On crée un objet personne avec un nomde club valide,
	 */
	Annuaire(const std::string& p_nomCLub);
	virtual ~Annuaire();
	const std::string& reqNonClub()const ;
	 std::string reqAnnuaireFormate() const ;
	void ajouterPersonne(const hokey::Personne& p_nouvellePersonne);
	void supprimerPersonne (const std::string& p_nom, const std::string& p_prenom, const
	util::Date& p_dateDeNissance);
	const std::vector<hokey::Personne*>& reqMembreVecteur() const;

private:
	std::string m_nomCLub;
	std:: vector <hokey::Personne*> m_vMembres;
	void verifieInvariant();
	//Déclaration de la méthode qui  vérifie si une personne est déjà enregistrée dans l’annuaire
    bool PersonneEstDejaPresente(const hokey::Personne& p_personne) const;

	 //Déclaration du constructeur copie de la classe Annuaire
		Annuaire(const Annuaire& p_new_annuaire);

		//Déclaration de la méthode d'assignation d'un objet annuaire à un autre objet annuaire
		const Annuaire& operator=(const Annuaire& p_annuaire);

};

#endif /* ANNUAIRE_H_ */
