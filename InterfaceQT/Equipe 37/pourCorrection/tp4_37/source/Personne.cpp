
 /**
 * \file Personne.cpp

 * \brief Implemantation de la classe Personne
 * \date Created on: 2020-02-24
 * \author : "ABIDER LYDIA "
 */

#include "Personne.h"
#include<string.h>
#include<sstream>
#include<iostream>
#include "ContratException.h"
#include <ctype.h>
using namespace std;

namespace hokey {
/**
 * \brief constructeur de la classe Personne
 */
Personne::Personne(const string& p_telephone,const string& p_nom, const string& p_prenom,util::Date p_dateNaissance)
      : m_telephone(p_telephone), m_nom(p_nom),m_prenom(p_prenom)
{   PRECONDITION(util::validerFormatNom(p_nom));
    PRECONDITION(util::validerFormatNom(p_prenom));
    PRECONDITION(util::validerTelephone(p_telephone));
	m_dateNaissance=p_dateNaissance;
    POSTCONDITION(m_nom==p_nom);
    POSTCONDITION(m_prenom==p_prenom);
    POSTCONDITION(m_telephone==p_telephone);

    INVARIANTS();
}

Personne::~Personne() {
}
/**
 * \brief Accesseur pour le nom de la personne
 * \@return m_nom
 */
const std::string& Personne::reqNom() const {
	return m_nom;
}

/**
 * \brief Accesseur pour le prenom de la personne
 * \@return m_prenom
 */
const std::string& Personne::reqPrenom() const {
	return m_prenom;
}
/**
 * \brief Accesseur pour le numéro de telephone de la personne
 * @return m_telephone
 */
const std::string& Personne::reqTelephone() const {
	return m_telephone;
}
/**
 *\brief Accesseur pour la date de naissance de la personne
 * \return m_dateNaissance
 */
const util::Date& Personne::reqDateNaissance() const {
   return m_dateNaissance;
}


/**
 * \brief Mutateur pour le numero de telephone  de la personne , affecte le numero de telephone de la personne à l'attribut m_telephone
 */
void Personne::asgTelephone(const std::string& p_telephone) {

	PRECONDITION(util::validerTelephone(p_telephone));
	m_telephone=p_telephone;
	POSTCONDITION(m_telephone==p_telephone);
	INVARIANTS();

}

/**
 * \brief Mutateur pour la date de naissance   de la personne , affecte la date de naissance  de la personne à l'attribut m_dateNaissance
 */
void Personne::asgDate(util::Date p_dateNaissance) {
	m_dateNaissance=p_dateNaissance;
}

/**
 *\brief Retourne une chaine de caractere qui contient l'information de l'objet Personne
 * \return un string qui contient l'information de la personne formatée
 */
 std::string Personne::reqPersonneFormate()  const {
	std::ostringstream os;
	       os <<"Nom                   : "<<m_nom<<endl
		     <<"Prenom                 : "<<m_prenom<<endl
			 <<"Date de naissance      : "<< m_dateNaissance.reqDateFormatee()<<endl
			 <<"Telephone              : " <<m_telephone<<endl;
	return os.str();
}


/**
 * \brief Surchage de l'opérateur "==" pour comparer deux personne, la comparaison se fait sur  les attributs : m_nom ,m_prenom,m_dateNaissance
 */
bool Personne::operator ==(const Personne& p_peronne2) const {
	if ((m_nom == p_peronne2.m_nom)
		&& (m_prenom== p_peronne2.m_prenom)
		&& (m_dateNaissance == p_peronne2.m_dateNaissance)){
		return true ;
	}
	else
		return false ;
}

/*\brief Teste l'invariant de la classe Personne. L'invariant de cette classe s'assure que l'objet crée est valide.
 *
 */

void Personne::verifieInvariant() const  {
	INVARIANT(util::validerFormatNom(m_nom))
	INVARIANT(util::validerFormatNom(m_prenom));
	INVARIANT(util::validerTelephone(m_telephone));

}



}
// namespace hokey


