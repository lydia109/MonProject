
/*
 * PersonneTesteur.cpp
 *
 *  Created on: 2020-03-28
 *      Author: etudiant
 */


#include <gtest/gtest.h>
#include<sstream>
#include "Personne.h"
#include "Date.h"
using namespace std;
using namespace hokey;


/** \class  PersonneTest
 * \brief classe permettant de tester les objet de la classe abstraite Personne
 */
class PersonneTest: public Personne
{
public:
	   PersonneTest (const std::string& p_telephone,const std::string& p_nom,const std::string& p_prenom,util::Date p_dateNaissance):
          Personne( p_telephone, p_nom,  p_prenom, p_dateNaissance)
    {
	};
	   //clone doit etre implémentés car PersonneTest ets une classe concrète
	virtual Personne* clone() const
		{
			return new PersonneTest(*this);
		};
};


/**
 * \class PersonneTest
 * \brief Fixture  PersonneTest pour la création d'un objet Personne pour les tests
 */

class UnePersonne: public ::testing::Test
{
public:
	UnePersonne() :
		t_personne("438 873-4691","abider","lydia",util::Date(17,07,1996))
{
};

	PersonneTest t_personne;
};

/**
 * \brief Test du constructeur  de la classe Personne
 * Cas valides: p_telephone,p_nom et p_prenom de l'objet créé sont valider
 * Cas invalides: défauts des paramètres p_telephone,p_nom,p_prenom
 * p_dateNaissance est validê  dans la classe Date
 */

TEST(PersonneTest,TestConstructeur)
{
	PersonneTest unePesrsonne ("418 873-4691","abider","sara",util::Date(13,03,2000));
	ASSERT_EQ("418 873-4691",unePesrsonne.reqTelephone());
	ASSERT_EQ("abider",unePesrsonne.reqNom());
	ASSERT_EQ("sara",unePesrsonne.reqPrenom());

}

// cas invalide 1: p_telephone est faux

TEST(PersonneTest, TelephoneInvalide)
{
	ASSERT_THROW( PersonneTest unePesrsonne("111 873-4691","abider","sara",util::Date(13,03,2000)), PreconditionException);
	ASSERT_THROW( PersonneTest unePesrsonne("4388734691","abider","sara",util::Date(13,03,2000)), PreconditionException);
	ASSERT_THROW( PersonneTest unePesrsonne("438-873 4691","abider","sara",util::Date(13,03,2000)), PreconditionException);
	ASSERT_THROW( PersonneTest unePesrsonne("438 873 4691","abider","sara",util::Date(13,03,2000)), PreconditionException);
}
// cas invalide 2: p_nom est faux

TEST(PersonneTest, NomInvalide)
{

	ASSERT_THROW( PersonneTest unePesrsonne("438 873-4691","","sara",util::Date(13,03,2000)), PreconditionException);
}

// cas invalide 2: p_prenom est faux

TEST(PersonneTest, PrenomInvalide)
{

	ASSERT_THROW( PersonneTest unePesrsonne("438 873-4691","abider","",util::Date(13,03,2000)), PreconditionException);
}


/**
 * \brief Test de l'accesseur reqNom
 * Cas valides: p_nom valide
 * Cas invalides: p_nom invalid
 */
TEST_F(UnePersonne,TestreqNom)
{
	ASSERT_EQ("abider",t_personne.reqNom());
}



/**
 * \brief Test de l'accesseur reqPrenom
 * Cas valides: p_prenom valide
 * Cas invalides: p_prenom invalid
 */
TEST_F(UnePersonne,TestreqPrenom)
{
	ASSERT_EQ("lydia",t_personne.reqPrenom());
}

/**
 * \brief Test de l'accesseur reqTelephone
 * Cas valides: p_Telephone valide
 * Cas invalides: p_Telephone invalid
 */
TEST_F(UnePersonne,TestreqTelephone)
{
	ASSERT_EQ("438 873-4691",t_personne.reqTelephone());
}
/**
 * \brief Test de la methode reqPersonneFormat   de la classe Personne
 * Cas valides: verification du retour sur un objet de la classe Personne
 * Cas invalides: aucun
 */
TEST_F(UnePersonne,TestreqPersonneFormat)
{
	  std::ostringstream os;
	  os <<"Nom                   : "<<t_personne.reqNom()<<endl
	  	<<"Prenom                 : "<<t_personne.reqPrenom()<<endl
	    <<"Date de naissance      : "<<  t_personne.reqDateNaissance().reqDateFormatee()<<endl
	    <<"Telephone              : "<<t_personne.reqTelephone()<<endl ;
	  ASSERT_EQ(os.str(),t_personne.reqPersonneFormate());
}

/**
 * \brief Test de la methode asgTelephone  de la classe Personne
 * Cas valides: la nouvelle valeur de p_telephone est validée
 * Cas invalides: erreur de p_telephone donc pas validé
 */

TEST_F(UnePersonne,TestAsgTelephone)
{
     t_personne.asgTelephone("438 873-4691");
     ASSERT_EQ("438 873-4691",t_personne.reqTelephone());

}
/*
* Cas invalides: erreur de p_telephone donc pas validé
 */
TEST_F(UnePersonne,TestAsgTelephoneInvalide)
{

     ASSERT_THROW(t_personne.asgTelephone("111 873-4691"), PreconditionException);

}

/**
 * \brief Test de la methode clone de Personne
 * Cas valides: clone bien créer
 * Cas invalides: aucun
 */
TEST_F(UnePersonne, TestDuClone)
{
	PersonneTest* pt_new_t_personne = (PersonneTest*) t_personne.clone();

	ASSERT_EQ(t_personne.reqPersonneFormate(), pt_new_t_personne->reqPersonneFormate());
}

/**
 * \brief Test de la methode de surcharge de l'opérateur ==  de la classe Perosnne
 * Cas valides: verification de la comparaison d'égalité de deux objets
 * Cas invalides: aucun
 */
TEST_F(UnePersonne, TestOperatuer)
{
	PersonneTest t_personne2 ("438 873-4691","abider","mohamed",util::Date(20,11,2003));
	ASSERT_EQ(false , t_personne2.operator ==(t_personne));
}



