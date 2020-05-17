/*
 * Joueur.h<
 *
 *  Created on: 2020-03-07
 *      Author: etudiant
 */

#ifndef JOUEUR_H_
#define JOUEUR_H_
#include "Personne.h"


/**
 * \class Joueur
 * \brief Cette classe dérivée de Personne représente les personnes de tupe  joueurs
 * un  objet entraineur est construit avec un  p_position valide
 *
 *
 */
class Joueur :public hokey::Personne{
public:
	long annee_courante = 2020;
	Joueur(const std::string& p_position,const std::string& p_telephone,const std::string& p_nom,const std::string& p_prenom,util::Date p_dateNaissance);
	virtual ~Joueur();
	const std::string& reqPosition()const;
    virtual std::string reqPersonneFormate()const ;
	virtual Personne* clone()const;

private:
	std::string m_position;
	void  verifieInvariant() const ;
};

#endif /* JOUEUR_H_ */
