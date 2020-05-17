/**
 * \file Personne.h

 * \brief fichier qui contient l'interface de la classe Personne c'est à dire
 * les déclarations des attributes et des methodes de cette classe
 * \date Created on: 2020-02-24
 * \author : "ABIDER LYDIA "
 */

#ifndef PERSONNE_H_
#define PERSONNE_H_
#include "Date.h"
#include "validationFormat.h"
namespace hokey {
/**
 *\class Personne
 *\brief Cette classe sert à créer et à modifier un objet personne
 *       On crée un objet personne avec un nom ,un prenom  et un numéro de telephone valide,
 *        pour se faire on utilise les fonctions de validationFormat
 */
class Personne {
public:
	Personne(const std::string& p_telephone,const std::string& p_nom,const std::string& p_prenom,util::Date p_dateNaissance);
    virtual ~ Personne ();
	const std::string& reqTelephone() const;
	const std::string& reqPrenom() const;
	const std::string& reqNom() const;
	const util::Date& reqDateNaissance() const;
    void asgTelephone(const std::string& p_tephone);
    void asgDate(util::Date p_dateNaissance);
    virtual std:: string reqPersonneFormate() const;
    bool operator==(const Personne&) const;
    virtual Personne* clone() const=0;
private:
   std:: string m_telephone;
   util:: Date m_dateNaissance;
   std::string m_nom ;
   std:: string m_prenom;
   void verifieInvariant() const ;

};
}

#endif /* PERSONNE_H_ */
/* namespace hokey*/
