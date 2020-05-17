/*
 * AnnuaireTesteur.cpp
 *
 *  Created on: 2020-04-03
 *      Author: etudiant
 */
#include <gtest/gtest.h>
#include<sstream>
#include "Entraineur.h"
#include "Annuaire.h"
#include "Joueur.h"
#include "Date.h"
using namespace std;
using namespace hokey;

/**
 * \brief Test du constructeur  de la classe Annuaire
 * Cas valides: p_nomCLubs  ce qui permet de crér un objet valide
 *  * Cas invalides: défauts des paramètres

 */


TEST(Annuaire,TestConstructeur)
{
         Annuaire unCLub("winners de hokeyville");
         ASSERT_EQ("winners de hokeyville",unCLub.reqNonClub());
}
//cas invalide 1: p_nomCLubs est vide

TEST(Annuaire,TestConstructeurVide)
{
     	ASSERT_THROW(Annuaire unCLub (""),PreconditionException);


}
/**
 * \class AnnuaireTest
 * \brief Fixture  AnnuaireTest pour la création d'un objet Annuaire pour les tests des différentes méthodes de la classe Annuaire
 */
class AnnuaireTest : public ::testing::Test
{
public:
	AnnuaireTest():

		t_club ("winners de hokeyville")

      {
	  };

	Annuaire t_club;
};


/**
 * \brief Test de l'accesseur reqNom
 * Cas valides: p_nomClub valide
 * Cas invalides: p_nomClub invalid
 */

TEST_F(AnnuaireTest,TestreqNom)
{
   ASSERT_EQ("winners de hokeyville",t_club.reqNonClub());

}

/**
 * \brief Test de la methode reqAnnuaireFormate  de la classe Annuaire
 * Cas valides: verification du retour sur un objet de la classe Annuaire
 * Cas invalides: aucun
 */

TEST_F(AnnuaireTest,TestreqAnnuaireFormate)
{
	std::ostringstream os;
	os<<"Club              : "<< t_club.reqNonClub()<<endl;
		os<<"----------------------"<<endl;

	      ASSERT_EQ(t_club.reqAnnuaireFormate(),os.str());
}
/**
 * \test Test de la méthode AjouterPersonne()
 * 		Cas valide : vérifier si l'ajout d'une personne a bien été fait.
 * 		Cas invalide : ajouter une personne déja existante.
 */

TEST_F(AnnuaireTest,TestAjouterPersonne)
{
    Entraineur un_entraineur ("BOCB 8702 0123",'M',"418 656-9874", "bocquet","bill",util::Date(01,02,1987));
    t_club.ajouterPersonne(un_entraineur);
	std::ostringstream os;
	os  <<"Club              : "<<t_club.reqNonClub()<<endl;
	             os<<"----------------------"<<endl;
              os<< "Nom                   : "<<un_entraineur.reqNom()<<endl;
			  os<< "Prenom                 : "<<un_entraineur.reqPrenom()<<endl;
			  os<< "Date de naissance      : "<<un_entraineur.reqDateNaissance().reqDateFormatee()<<endl;
			  os<< "Telephone              : " <<un_entraineur.reqTelephone()<<endl;
			  os<< "Numero de RAMQ     : "<<un_entraineur.reqNumeroRmaq()<<endl;
			  os<<"------------------------"<<endl;
			  ASSERT_EQ(os.str(),t_club.reqAnnuaireFormate());

}


// cas invalide

TEST_F(AnnuaireTest, ajouterPersonneDejaExistant){
	Joueur joueur1("ailier","438 873-4691","abider","lydia",util::Date(17,07,2005));
	t_club.ajouterPersonne(joueur1);
	ASSERT_THROW(t_club.ajouterPersonne(joueur1),PersonneDejaPresenteException);
}










