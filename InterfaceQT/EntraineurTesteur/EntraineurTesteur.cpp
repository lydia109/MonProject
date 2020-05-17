/*
 * EntraineurTesteur.cpp

 *
 *  Created on: 2020-04-01
 *      Author: etudiant
 */

#include <gtest/gtest.h>
#include<sstream>
#include "Date.h"
#include "Entraineur.h"
using namespace std;
using namespace hokey;



/**
 * \brief Test du constructeur  de la classe Entraineur
 * Cas valides: p_sexe  et p_numeorRAMQ valident ce qui permet de crér un objet valide
 *  * Cas invalides: défauts des paramètres
      p_nom, p_prenom,p_telephone et p_dateNaissance sont testés dans la classe de base
 */
TEST(Entraineur,TestConstructeur){
	     Entraineur un_entraineur ("BOCB 8702 0123",'M',"418 656-9874", "bocquet","bill",util::Date(01,02,1987));
	     ASSERT_EQ('M',un_entraineur.reqSexe());
	     ASSERT_EQ("BOCB 8702 0123",un_entraineur.reqNumeroRmaq());

}

//cas invalide 1: p_sexe n'est pas validé
TEST(Entraineur,TestSexeInvlid)
{
	ASSERT_THROW(Entraineur un_entraineur ("BOCB 8702 0123",'H',"418 656-9874", "bocquet","bill",util::Date(01,02,1987)),PreconditionException);

}
//cas invalide 2: p_RAMQ n'est pas validé
TEST(Entraineur,TestNumeroRAMQInvlid)
{
	ASSERT_THROW(Entraineur un_entraineur ("BOCB 8702 012",'M',"418 656-9874", "bocquet","bill",util::Date(01,02,1987)),PreconditionException);
	ASSERT_THROW(Entraineur un_entraineur ("",'M',"418 656-9874", "bocquet","bill",util::Date(01,02,1987)),PreconditionException);
}

//cas invalide 3: p_dateNaissance n'est pas validé
TEST(Entraineur,TestDateInvlid)
{

	ASSERT_THROW(Entraineur un_entraineur ("BOCB 8702 0123",'M',"418 656-9874", "bocquet","bill",util::Date(01,02,2000)),PreconditionException);
}

/**
 * \class EntraineurTest
 * \brief Fixture  JoueurTest pour la création d'un objet Entraineur pour les tests des différentes méthodes de la classe Entraineur
 */
class EntraineurTest : public ::testing::Test
{
public:
	EntraineurTest():

		t_entraineur ("BOCB 8702 0123",'M',"418 656-9874", "bocquet","bill",util::Date(01,02,1987))
      {
	  };

	Entraineur t_entraineur;
};


/**
 * \brief Test de l'accesseur reqSexe
 * Cas valides: p_sexe valide
 * Cas invalides: p_sexe invalid
 */
TEST_F(EntraineurTest,TestreqSexe)
{
	ASSERT_EQ('M',t_entraineur.reqSexe());
}


/**
 * \brief Test de l'accesseur reqNumeroRAMQ
 * Cas valides:  p_numeroRAMQ valide
 * Cas invalides: p_numeroRAMQ invalid
 */
TEST_F(EntraineurTest,TestreqNumeroRAMQ)
{
	ASSERT_EQ("BOCB 8702 0123",t_entraineur.reqNumeroRmaq());
}
/**
 * \brief Test de la methode clone de Entraineur
 * Cas valides: la methode retourne le clone d'un objet de type Entraineur
 * Cas invalides: aucun
 */
TEST_F(EntraineurTest,TestClone)
{
	   Entraineur* new_entraineur =(Entraineur*) t_entraineur.clone();
	   ASSERT_EQ(t_entraineur.reqPersonneFormate(),new_entraineur->reqPersonneFormate());
}



/**
 * \brief Test de la methode reqPersonneFormate  de la classe Entraineur
 * Cas valides: verification du retour sur un objet de la classe Entraineur
 * Cas invalides: aucun
 */

TEST_F(EntraineurTest,TestreqPersonneFormate)
{    ostringstream os ;
    os<<"Nom                   : " << t_entraineur.reqNom() <<endl
	  <<"Prenom                 : " <<t_entraineur.reqPrenom()<<endl
	  <<"Date de naissance      : "<<t_entraineur.reqDateNaissance().reqDateFormatee()<< endl
	  <<"Telephone              : " <<t_entraineur.reqTelephone()<<endl
	  <<"Numero de RAMQ     : " <<t_entraineur.reqNumeroRmaq()<<endl;
      os<<"------------------------"<<endl;
 ASSERT_EQ(os.str(),t_entraineur.reqPersonneFormate());

}




