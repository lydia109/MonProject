/*
t_club * Annuaire.cpp
 *
 *  Created on: 2020-03-27
 *      Author: etudiant
 */

#include "Annuaire.h"
using namespace std;
#include <sstream>
#include<iostream>
using namespace hokey;
using namespace std;
/**
 * \brief constructeur de la classe Annuaire
 */

Annuaire::Annuaire(const string& p_nomCLub):m_nomCLub(p_nomCLub) {
	PRECONDITION (!(p_nomCLub.empty()));
	POSTCONDITION(m_nomCLub==p_nomCLub);
	INVARIANTS();
}
/**
 * \brief Destructeur de profondeur pour désallouer les espaces mémoires
 * en plus de détruire un objet
 * \
 */

Annuaire::~Annuaire()

{
	//iterateur sur un vecteur de personne
	vector<hokey::Personne*> :: iterator it;
	   for (it = m_vMembres.begin();it != m_vMembres.end();it++)
	   {
		   delete *it;
	   }
}

/**
 * \brief Méthode qui supprime une personne dont le nom ,prenom et date de naissance sont reçus en paramètre.
 *  S'il n'y a pas personne qui possède ce nom ,prenom et date de naissance dans le m_vMembres de Annuaire,
 *  la méthode lève PersonneAbsenteException
 * \
 */

void Annuaire::supprimerPersonne(const std::string& p_nom,
		const std::string& p_prenom, const util::Date& p_dateDeNissance) {

	vector<hokey::Personne*> :: iterator it;
		   for (it = m_vMembres.begin();it != m_vMembres.end();it++)
		   {
			   if(((*(*it)).reqNom() == p_nom  ) and ((*(*it)).reqPrenom() == p_prenom )  and ((*(*it)).reqDateNaissance() == p_dateDeNissance  ))
			   {
				   delete (*it);
				   it=m_vMembres.erase(it);
			   }
			   else throw PersonneAbsenteException("La personne n'existe pas dans l'annuaire ");

		   }

}

/**
 * \brief ConstructeurCopie
 * effectue la copie d'un objet de type annuaire
 * \
 */
Annuaire::Annuaire(const Annuaire& p_new_annuaire) {
    m_nomCLub=p_new_annuaire.m_nomCLub;
    	vector<Personne*>:: const_iterator it2;
           for (it2= p_new_annuaire.m_vMembres.begin();it2< p_new_annuaire.m_vMembres.end();it2++)
    			{
    					(*this).ajouterPersonne(**it2);
    		    }
    	}
/**
 * \brief la méthode
 * effectue la copie d'un objet de type  annuaire
 * \
 */
const Annuaire& Annuaire::operator =(const Annuaire& p_annuaire) 	{
	if(this !=  & p_annuaire)
	{   vector<Personne*>::iterator it;
	   for (it=m_vMembres.begin();it< m_vMembres.end();it++)
	       {
               delete *it;
	    }
	   vector<Personne*>:: const_iterator it2;
			for (it2= p_annuaire.m_vMembres.begin();it2< p_annuaire.m_vMembres.end();it2++)
			{
				(*this).ajouterPersonne(**it2);
			}
		}
		return *this;
	}
/**
 * \brief Accesseur pour accéder au tableau des personnes du annuaire
 * \return m_vMembres
 */
const std::vector<Personne*>& Annuaire::reqMembreVecteur() const {
	return m_vMembres;
}
/**
 * \brief Accesseur pour accéder au nom du club
 * \return m_nomClub
 */
const string& Annuaire::reqNonClub()const  {

	return m_nomCLub;
}
/**
 *\brief Retourne une chaine de caractere qui contient l'information de l'objet Annuaire
 * \return un string qui contient l'information formatée de Annuaire
 */

std::string Annuaire::reqAnnuaireFormate() const  {
	vector<Personne*>::const_iterator it2;
	ostringstream os;
	os<<"Club              : "<< m_nomCLub<<endl;
	os<<"----------------------"<<endl;

	for(it2 = m_vMembres.begin(); it2< m_vMembres.end(); it2++)
	{
		os<< (*it2)->reqPersonneFormate();

	}
 return os.str();
}

/**
 * \brief Methode permettant d'ajouter une Personne au vecteur Membre d'Annuaire
 * si et seulement si la personne n'exsiste pas deja

 * \
 */
void Annuaire::ajouterPersonne(const Personne& p_nouvellePersonne)
{
	if(PersonneEstDejaPresente(p_nouvellePersonne)){
	throw PersonneDejaPresenteException(p_nouvellePersonne.reqPersonneFormate());
	}
	m_vMembres.push_back(p_nouvellePersonne.clone());
    INVARIANTS();

}
/*\brief Methode qui verifie si la personne figure deja dans l'anniaure
 * si la personne existe il retourne  vrai
 * false sinon
 */

bool Annuaire::PersonneEstDejaPresente(const hokey::Personne& p_personne) const {
	vector<hokey::Personne*> :: const_iterator it;
	bool present=false;
		   for (it = m_vMembres.begin();it !=m_vMembres.end();it++)
		   {
			   if ( (p_personne.reqDateNaissance() == (*(*it)).reqDateNaissance()) and (p_personne.reqNom() == (*(*it)).reqNom()) and (p_personne.reqPrenom() == (*(*it)).reqPrenom()))
			   {
				   present=true;

		       }

	         }
		   return present;
}

/*\brief Teste l'invariant de la classe Annuaire . L'invariant de cette classe s'assure que l'objet crée est valide.
 *
 */
void Annuaire::verifieInvariant() {
    INVARIANT(!(m_nomCLub.empty()));
}


