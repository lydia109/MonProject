/*
* Entraineur.h
 *
 *  Created on: 2020-03-07
 *      Author: etudiant
 */

#ifndef ENTRAINEUR_H_
#define ENTRAINEUR_H_
#include "Personne.h"
#include "Date.h"


/**
 * \class Entraineur
 * \brief Cette classe dérivée de Personne représente les personnes de tupe  entraineurs
* un  objet entraineur est construit avec u p_sexe et un  p_numRAMQ valide
 * pour se faire on utilise les fonctions de validationFormat
 *
 */
class Entraineur :public hokey::Personne{
public:
	Entraineur(const std::string& p_numRAMQ,const char& p_sex,const std::string& p_telephone,const std::string& p_nom,
			const std::string& p_prenom,util::Date p_dateNaissance);
	virtual ~ Entraineur();
	const char& reqSexe ()const;
	const std:: string& reqNumeroRmaq ()const;
    virtual std::string reqPersonneFormate() const;
	virtual Personne* clone() const;
    long annee_actuelle=2020;
private:
	char m_sexe;
	std::string m_numRAMQ;
    void verifieInvariant() const;

};

#endif /* ENTRAINEUR_H_ */
