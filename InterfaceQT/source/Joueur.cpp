/*
 * Joueur.cpp
 *
 *  Created on: 2020-03-07
 *      Author: etudiant
 */

#include "Joueur.h"
#include<string.h>
#include<sstream>
#include<iostream>
using namespace std;

/**
 * \brief constructeur de la classe Joueur
 */

Joueur::Joueur(const std::string& p_position, const std::string& p_telephone,
		const std::string& p_nom, const std::string& p_prenom,
		util::Date p_dateNaissance):Personne(p_telephone, p_nom,p_prenom, p_dateNaissance),
			     m_position(p_position) {
	PRECONDITION(util::validerFormatNom(p_nom));
	PRECONDITION(util::validerFormatNom(p_prenom));
	PRECONDITION(util::validerTelephone(p_telephone));
	PRECONDITION((annee_courante- p_dateNaissance.reqAnnee()) <=  17 and  (annee_courante - p_dateNaissance.reqAnnee())>=15 );
	POSTCONDITION(m_position==p_position);
	INVARIANTS();
}

Joueur::~Joueur() {
	// TODO Auto-generated destructor stub
}
/**
 * \brief Accesseur pour la position du joueur
 * \@return m_position
 */
const string& Joueur::reqPosition() const {
	return m_position;
}

/**
 *\brief Retourne une chaine de caractere qui contient l'information de l'objet joueur
 * \return un string qui contient l'information formatée du joueur
 */
 string Joueur::reqPersonneFormate() const {
	 ostringstream os;
	 		os << hokey::Personne::reqPersonneFormate()
	 		<<"Position           : "<<m_position<<endl
			<<"------------------------"<<endl;
	return os.str();
}
/*\brief methode clone() permettant de faire une copie allouée sur le morceau de l'objet courant.
 *
 */
hokey::Personne* Joueur::clone() const {
	 return new Joueur(*this);
}

/*\brief Teste l'invariant de la classe Joueur. L'invariant de cette classe s'assure que l'objet crée est valide.
 *
 */

void Joueur:: verifieInvariant() const {

	  INVARIANT(m_position=="ailier" or m_position=="centre" or m_position=="défenseur" or m_position=="gardien");
	  INVARIANT( (annee_courante- reqDateNaissance().reqAnnee()) <=  17 and  (annee_courante - reqDateNaissance().reqAnnee())>=15 );
}



