/*
 * Entraineur.cpp
 *
 *  Created on: 2020-03-07
 *      Author: etudiant
 */

#include "Entraineur.h"
#include "ContratException.h"
#include<string.h>
#include<sstream>
#include<iostream>
using namespace std;
using namespace hokey;
/**
 * \brief constructeur de la classe Entraineur
 */

Entraineur::Entraineur(const string& p_numRAMQ, const char& p_sex,
		const string& p_telephone,const string& p_nom, const string& p_prenom,
		util::Date p_dateNaissance):Personne(p_telephone, p_nom,p_prenom, p_dateNaissance),
				     m_sexe(p_sex),m_numRAMQ(p_numRAMQ){
	 PRECONDITION(util::validerNumRAMQ(p_numRAMQ,p_nom,p_prenom,int(p_dateNaissance.reqJour()),int(p_dateNaissance.reqMois()),int(p_dateNaissance.reqAnnee()),p_sex))
	 PRECONDITION(annee_actuelle-p_dateNaissance.reqAnnee()  >=  19);
	 PRECONDITION((p_sex=='F') or (p_sex=='M'));
	 POSTCONDITION(m_numRAMQ == p_numRAMQ);
	 POSTCONDITION(m_sexe==p_sex);
	 INVARIANTS();
}
 Entraineur::~ Entraineur()
{

}


/**
 * \brief Accesseur pour le sexe de l'entraineur
 * \@return m_sexe
 */
const char& Entraineur::reqSexe() const {
	return m_sexe;
}
/**
 * \brief Accesseur pour le numeroRANQ de l'entraineur
 * \@return m_numRAMQ
 */
const string& Entraineur::reqNumeroRmaq() const {
	return m_numRAMQ;
}

/**
 *\brief Retourne une chaine de caractere qui contient l'information de l'objet Entraineur
 * \return un string qui contient l'information formatée de entraineur
 */
std::string Entraineur::reqPersonneFormate() const {
	std::ostringstream os;
		os<< hokey::Personne::reqPersonneFormate()
			  <<"Numero de RAMQ     : "<<m_numRAMQ<<endl
			  <<"------------------------"<<endl;

return os.str();
}
/*\brief methode clone() permettant de faire une copie allouée sur le morceau de l'objet courant.
 *
 */
hokey::Personne* Entraineur::clone() const {
	return new Entraineur(*this);
}


/*\brief Teste l'invariant de la classe Entraineur. L'invariant de cette classe s'assure que l'objet crée est valide.
 *
 */

void Entraineur::verifieInvariant() const {
	INVARIANT(m_sexe=='M' or m_sexe=='F');
	INVARIANT (annee_actuelle-(reqDateNaissance().reqAnnee())  >=  19);
	INVARIANT (util:: validerNumRAMQ(m_numRAMQ,reqNom(),reqPrenom(),int(reqDateNaissance().reqJour()),int(reqDateNaissance().reqMois()),int(reqDateNaissance().reqAnnee()),m_sexe));

}
