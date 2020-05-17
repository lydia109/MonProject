/*
 * JoueurTesteur.cpp
 *
 *  Created on: 2020-04-01
 *      Author: etudiant
 */


/*
 * JoueurTesteur.cpp

 *
 *  Created on: 2020-03-27
 *      Author: etudiant
 */
#include <gtest/gtest.h>
#include<sstream>
#include "Joueur.h"
#include "Date.h"
using namespace std;
using namespace hokey;


/**
 * \brief Test du constructeur  de la classe Joueur
 * Cas valides: p_position valide ce qui permet de crér un objet valide
 *  * Cas invalides: défauts des paramètres
     p_nom, p_prenom,p_telephone et p_dateNaissance testé dans la classe de base
 */
TEST(Joueur,TestConstructeur)
{
	Joueur unjoueur( "ailier","438 873-4691","abider","lydia",util::Date(17,07,2005));
    ASSERT_EQ("ailier",unjoueur.reqPosition());
}

//cas invalide 1: p_position n'est pas validé
TEST(Joueur,TestPositionInvlid)
{
	ASSERT_THROW(Joueur unJoueur("avant","438 873-4691","abider","lydia",util::Date(17,07,2005)),ContratException);
}
//cas invalide 2: p_DateNaissance n'est pas validée
TEST(Joueur,TestDateInvlide)
{
	ASSERT_THROW(Joueur unJoueur("centre","438 873-4691","abider","lydia",util::Date(17,07,2018)),ContratException);
}
//cas invalide 3: p_DateNaissance n'est pas validée
TEST(Joueur,TestDateInvlide1)
{
	ASSERT_THROW(Joueur unJoueur("centre","438 873-4691","abider","lydia",util::Date(17,07,2000)),ContratException);
}
/**
 * \class JoueurTest
 * \brief Fixture  JoueurTest pour la création d'un objet Joueur pour les tests des différentes méthodes de la classe Joueur
 */
class JoueurTest : public ::testing::Test
{
public:
	JoueurTest():

		t_joueur ("centre","438 873-4691","abider","lydia",util::Date(17,07,2005))
      {
	  };

	Joueur t_joueur;
};


/**
 * \brief Test de l'accesseur reqPosition
 * Cas valides: p_position valide
 * Cas invalides: p_position invalid
 */
TEST_F(JoueurTest,TestReqPosition)
{
	ASSERT_EQ("centre",t_joueur.reqPosition());
}


/**
 * \brief Test de la methode clone de Joueur
 * Cas valides: la methode retourne le clone d'un objet de type Joueur
 * Cas invalides: aucun
 */
TEST_F(JoueurTest, TestDuClone)
{
	Joueur* new_t_joueur = (Joueur*)t_joueur.clone();
	ASSERT_EQ(t_joueur.reqPersonneFormate(), new_t_joueur->reqPersonneFormate());
}

/**
 * \brief Test de la methode reqPersonneFormate  de la classe Joueur
 * Cas valides: verification du retour sur un objet de la classe Joueur
 * Cas invalides: aucun
 */
TEST_F(JoueurTest, TestReqPersonneFormate)
{
	ostringstream os;
	os <<"Nom                   : "<<t_joueur.reqNom()<< endl
	   <<"Prenom                 : "<<t_joueur.reqPrenom()<< endl
	   <<"Date de naissance      : "<<t_joueur.reqDateNaissance().reqDateFormatee()<< endl
	   <<"Telephone              : "<<t_joueur.reqTelephone()<< endl
	   <<"Position           : "<< t_joueur.reqPosition()<<endl;
	    os<<"------------------------"<<endl;

    ASSERT_EQ(os.str(),t_joueur.reqPersonneFormate());

}






