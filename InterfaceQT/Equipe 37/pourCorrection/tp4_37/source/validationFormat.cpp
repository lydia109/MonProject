/*
 * validationFormat.cpp


 *
 *  Created on: 2020-02-07
 *      Author: etudiant
 */
#include <iostream>
                     /* printf, fgets */
#include <stdlib.h>
#include <string.h>
#include "validationFormat.h"
#include <ctype.h>
using namespace std;
namespace util {

bool validerFormatNom(const std ::string& p_nom)
{
	bool test=false;
	int x=0;
    int taille_nom=p_nom.length();
    if (taille_nom!=0)
    {
		for (int i=0;i<taille_nom;i++)
		{
			if (isalpha(p_nom[i]) || p_nom[i]=='-' || p_nom[i]==' ' )
			{
				x++;
			}
		}
		if (x==taille_nom)
	     	{
				test=true;
					}

    }
return test ;
}

/*
 la fonction booléenne verfier s'il s'agit des indicatifs régionaux de services payants tarifés à la minute ou à l'appel
 elle prend comme paramétre le numero de telephone
 */

bool valider_code_regionl_payant(const std::string& p_telephone)  {
	// je crée une variable qui recevra la validité du test
    bool test=false;

                     if (p_telephone[0]== '9')   // tester si le numero  du telephone commence par un 9
                     {
                    	 for (int i=1;i<3;i++)
                    	 	  {
                    		 	 	 if (0<=p_telephone[i] && p_telephone[i]>=9)
                    		 	 	 {
                                         test=true;
                    		 	 	 }

                    	 	  }
                     }
	return test;
}

/*
 la fonction booléenne verfier s'il s'agit des indicatifs régionaux selon les diffirentes provinces du canada
 */
bool valider_code_regionl(const std::string& p_telephone)
{   // je crée une variable qui recevra la validité du test
	bool test=false;
	char p_indicatifs_regionaux[3];
	//boucle pour vérifier la la validité des  indicatifs régionaux
	             for (int i=0;i<3;i++)
	             {
	            	 p_indicatifs_regionaux [i] = p_telephone[i];

	             }

	            	 if (p_indicatifs_regionaux[0]== '4' && p_indicatifs_regionaux[1]== '0' && p_indicatifs_regionaux[2]== '3')
	            	             	   {
	            	             		 test=true;
	            	             	   }
	            	 if (p_indicatifs_regionaux[0]== '7' && p_indicatifs_regionaux[1]== '8' && p_indicatifs_regionaux[2]== '0')
	            	 	             {
	            	 	           		 test=true;
	            	     	     	   }
	            	 if (p_indicatifs_regionaux[0]== '6' && p_indicatifs_regionaux[1]== '0' && p_indicatifs_regionaux[2]== '4')
	            			           {
	            	             		 test=true;
	            	             	   }
	            	 if (p_indicatifs_regionaux[0]== '2' && p_indicatifs_regionaux[1]== '3' && p_indicatifs_regionaux[2]== '6')
						    {
								 test=true;

	                         }
	            	 if (p_indicatifs_regionaux[0]== '2' && p_indicatifs_regionaux[1]== '5' && p_indicatifs_regionaux[2]== '0')
	             			 {
	            					 test=true;

	             	         }
	            	 if (p_indicatifs_regionaux[0]== '7' && p_indicatifs_regionaux[1]== '7' && p_indicatifs_regionaux[2]== '8')
	             			 {
	            					 test=true;
	            	             	   }


	            	 if (p_indicatifs_regionaux[0]== '9' && p_indicatifs_regionaux[1]== '0' && p_indicatifs_regionaux[2]== '2')
	            	             	   {
	            	             		 test=true;
	            	             	   }
	            	 if (p_indicatifs_regionaux[0]== '2' && p_indicatifs_regionaux[1]== '0' && p_indicatifs_regionaux[2]== '4')
	            	         {
	                    	           test=true;
	            	 	     }
	            	 if (p_indicatifs_regionaux[0]== '5' && p_indicatifs_regionaux[1]== '0' && p_indicatifs_regionaux[2]== '6')
	                         {
	                 	           test=true;
	                 	      	 	     }
	            	 if (p_indicatifs_regionaux[0]== '9' && p_indicatifs_regionaux[1]== '0' && p_indicatifs_regionaux[2]== '2')
	                        {
	                 	         test=true;
	                	     }
	            	 if (p_indicatifs_regionaux[0]== '9' && p_indicatifs_regionaux[1]== '0' && p_indicatifs_regionaux[2]== '5')
					             {
					 	             test=true;
					 	           }
	            	 if (p_indicatifs_regionaux[0]== '5' && p_indicatifs_regionaux[1]== '1' && p_indicatifs_regionaux[2]== '9')
				             {
				     			test=true;
				               }
	            	 if (p_indicatifs_regionaux[0]== '2' && p_indicatifs_regionaux[1]== '8' && p_indicatifs_regionaux[2]== '9')
				             {
				     	      test=true;
				 	           }
	            	 if (p_indicatifs_regionaux[0]== '7' && p_indicatifs_regionaux[1]== '0' && p_indicatifs_regionaux[2]== '5')
	         			 	{
				 		 test=true;
					 	           }
	            	 if (p_indicatifs_regionaux[0]== '6' && p_indicatifs_regionaux[1]== '1' && p_indicatifs_regionaux[2]== '3')
		             		{
		     			  test=true;
		   				 	           }
	            	 if (p_indicatifs_regionaux[0]== '8' && p_indicatifs_regionaux[1]== '0' && p_indicatifs_regionaux[2]== '7')
		     		          {
		     				    test=true;
		    			 	           }
	            	 if (p_indicatifs_regionaux[0]== '4' && p_indicatifs_regionaux[1]== '1' && p_indicatifs_regionaux[2]== '6')
		     		          {
		    		 	             test=true;
		 				 	           }
	            	 if (p_indicatifs_regionaux[0]== '6' && p_indicatifs_regionaux[1]== '4' && p_indicatifs_regionaux[2]== '7')
					             	   {
					             		 test=true;
					             	   }

	            	 if (p_indicatifs_regionaux[0]== '4' && p_indicatifs_regionaux[1]== '3' && p_indicatifs_regionaux[2]== '8')
					                 {

					 	             test=true;
					                 }
	            	 if (p_indicatifs_regionaux[0]== '5' && p_indicatifs_regionaux[1]== '1' && p_indicatifs_regionaux[2]== '4')
					           {
							  test=true;
      			 	           }
	            	 if (p_indicatifs_regionaux[0]== '4' && p_indicatifs_regionaux[1]== '5' && p_indicatifs_regionaux[2]== '0')
					    {
		 	             test=true;
		 	             }
	            	 if (p_indicatifs_regionaux[0]== '5' && p_indicatifs_regionaux[1]== '7' && p_indicatifs_regionaux[2]== '9')
				              {
				   					 	             test=true;
				   					 	           }
	            	 if (p_indicatifs_regionaux[0]== '4' && p_indicatifs_regionaux[1]== '1' && p_indicatifs_regionaux[2]== '8')
					         {
							   test=true;
					       }
	            	 if (p_indicatifs_regionaux[0]== '5' && p_indicatifs_regionaux[1]== '8' && p_indicatifs_regionaux[2]== '1')
					     {
						  test=true;
										 	           }
	            	 if (p_indicatifs_regionaux[0]== '8' && p_indicatifs_regionaux[1]== '1' && p_indicatifs_regionaux[2]== '9')
				           {
				    		 test=true;
				           }
	            	 if (p_indicatifs_regionaux[0]== '8' && p_indicatifs_regionaux[1]== '7' && p_indicatifs_regionaux[2]== '3')
					             	   {
					             		 test=true;
					             	   }
	            	 if (p_indicatifs_regionaux[0]== '3' && p_indicatifs_regionaux[1]== '0' && p_indicatifs_regionaux[2]== '6')
					    {
					 			  test=true;
							 	           }
	            	 if (p_indicatifs_regionaux[0]== '7' && p_indicatifs_regionaux[1]== '0' && p_indicatifs_regionaux[2]== '9')
				             {
				     			  test=true;
				     					 	           }
	            	 if (p_indicatifs_regionaux[0]== '8' && p_indicatifs_regionaux[1]== '6' && p_indicatifs_regionaux[2]== '7')
					                    {
					 			   test=true;
						 	           }

	            	 if (p_indicatifs_regionaux[0]== '8' && p_indicatifs_regionaux[1]== '0' && p_indicatifs_regionaux[2]== '0')
					             	   {
					             		 test=true;
					             	   }
	            	 if (p_indicatifs_regionaux[0]== '8' && p_indicatifs_regionaux[1]== '6' && p_indicatifs_regionaux[2]== '6')
					                       {
					 					  test=true;
					 		           }
	            	 if (p_indicatifs_regionaux[0]== '8' && p_indicatifs_regionaux[1]== '7' && p_indicatifs_regionaux[2]== '7')
				                         {
				     					 	             test=true;
				     					 	           }
	            	 if (p_indicatifs_regionaux[0]== '8' && p_indicatifs_regionaux[1]== '8' && p_indicatifs_regionaux[2]== '8')
				     {
				     					 	             test=true;
				     					 	           }
	            	 if (p_indicatifs_regionaux[0]== '8' && p_indicatifs_regionaux[1]== '5' && p_indicatifs_regionaux[2]== '5')
		                                    {
							 	             test=true;
							 	           }
		return test;
	}


/*fonction booléenne qui valide le format du numéro de téléphone canadien (format national)
 * elle prend en parametre le numero du telephone
 * elle recoit le resultat des deux fonctions qui valide les   indicatifs régionaux
 * le test est fait sur le reste du nemero du telephone pour verifier sa validité
*/
bool validerTelephone(const std::string& p_telephone)
{
	bool test_regional= valider_code_regionl( p_telephone);
	bool test_codePayant=valider_code_regionl_payant(p_telephone);
	// je crée des variables qui recevront la validité du test
	bool test1=false,test2=false,test3=false;

	if (p_telephone.length()==12 )   // On commence par vérifier la taille du numéro du telephone est bien 12
	 {
		if (test_regional==true || test_codePayant==true)   // verifier  la validité des   indicatifs régionaux
     {
		char caratere='-';
		char espace =' ';
		if (p_telephone[3]==espace )
		{
			test1=true;
		}
		if (test1==true)
		{
			int Compteur=0;    // j'ai créé une variable compteur qui me permet de m'assurer que  les 3 caracteres entre laposition 4 et 6 sont des chiffres
			for (int i=4;i<7;i++)
			 {
				if(0<=(p_telephone[i]-'0')  && (p_telephone[i]-'0')<=9)   //verifier que les caracteres entre la position 4 et 6 sont des chiffres
				 {
					Compteur++;
				 }
             }
			 if (Compteur==3)
			    {
			       test2=true;
				}

         }
		if (test2==true && p_telephone[7]==caratere)
				{
			int Compteur1=0; // j'ai créé une variable compteur qui me permet de m'assurer que  les 3 caractéres  entre la position 8 et 10 sont des chiffres
					for (int i=8;i<11;i++)
					 {
						if(0<=(p_telephone[i]-'0')  && (p_telephone[i]-'0')<=9) //verifier que les caractéres entre la position 8 et 10 sont des chiffres
						 {
							Compteur1++;
						 }
		             }
					if (Compteur1==3)
						 {
				       test3=true;
						 }
				}
	}
   }
	return test3;
}

/*fonction booléenne qui valide  le format du numéro de RAMQ d’une personne.
 * elle prend en parmetre le numero de la RAMQ et les informations concernant la personne
 *
*/
bool validerNumRAMQ (const string& p_numero, const string& p_nom, const string& p_prenom, int p_jourNaissance, int p_moisNaissance, int
		p_anneeNaissance, char p_sex)
{
	char espace=' ';
	// je crée des variables qui recevront  la validité du test
	bool test1=false,test2=false,test3=false,test4=false,test5=false;
	if (p_numero.length()== 14){  // On commence par vérifier la taille du numéro d'assurance est bien  14

		int compteur=0;  // j'ai cree une variable compteur qui me permet de m'assurer que  les 3 premiers caractéres sont equivalant au nom de la personne
		for (int i =0;i<3;i++)
		{

			if ((p_numero[i] == toupper(p_nom[i])) or (p_numero[i] == p_nom[i]))
			{
				compteur++;
			}
		}
		if (compteur==3)
		{
			test1= true;
		}

		if (test1==true &&  ((p_numero[3] == p_prenom[0]) or (p_numero[3] == toupper(p_prenom[0]))) &&( p_numero[4]==espace))
		{
			string nouvelle_annee= to_string(p_anneeNaissance);  // j'ai converti la variable p_anneeNaisssance en chaine de caractére pour pouvoir boucler sur elle
			if (p_numero[5] == nouvelle_annee[2]&& p_numero[6] == nouvelle_annee[3])
			   {
					test2=true;
				}
			}

		if (test2==true)
		{
			if (p_sex == 'M' )
			{   string nouveau_moi= to_string(p_moisNaissance); // j'ai converti la variable p_moisNaisssance en chaine de caractére pour pouvoir boucler sur elle
			/*si la personne est né entre janvier et spetembre
			 * alors on verife que le caractére  7 du numero est le 0 et l'autre caractére correspond au mois de naissance
			 * si la personne est né entre octobre  et decembre
			 * on verife que les  caractéres 7 et 8 correspondent au mois de naissance
			*/
			if (nouveau_moi.length() ==2 && p_numero[7] == nouveau_moi[0] && p_numero[8] == nouveau_moi[1])
                       {
							test3=true;
						}
                if (nouveau_moi.length()==1 && p_numero[7] == '0' && p_numero[8] == nouveau_moi[0])
                   {
                		     test3=true;
                  }
			}
			else if( p_sex == 'F' )
			{
				int new_numero1,new_numero2;
                new_numero1=(p_numero [7]-'0');  // j'ai converti le caractére 7 et 8 du numero d'assurance en entier pour pouvoir appliquer les opérations arithmetiques (l'addition)
				new_numero2=(p_numero [8]-'0');
				int  total= ( new_numero1*10)+new_numero2; //convertir les deux caractéres en entier
				int  nouv_moi=p_moisNaissance + 50;  //rajouter 50 pour le mois de naissance si le p_sex=F
				if (total==nouv_moi)
					{
						test3=true;
					}
			}
		}

		if (test3==true && p_numero[9] ==espace)
		{
			string nouv_jour= to_string(p_jourNaissance);// j'ai converti la variable p_jourNaisssance en chaine de caractére pour pouvoir boucler sur elle
			/*si la personne est né entre le premier  et 9 du mois
			 * alors on verife que le caractére  10 du numero est le 0 et l'autre caractére correspond au jour de naissance
			 *  si la personne est né entre le 10  et 31 du mois
	     	 * on verife que les  caractéres 10 et 11 correspondent au jour de naissance
		   */

            if (nouv_jour.length() ==2 && p_numero[10] == nouv_jour[0] && p_numero[11] == nouv_jour[1])
                       {
         					test4=true;
   						}
             if (nouv_jour.length()==1 && p_numero[10] == '0' && p_numero[11] == nouv_jour[0])
                            {
                      		     test4=true;
                          	 }
           }

		if (test4==true)  // on verife que les deux derniers caracteres du numero d'assurance correnpondent a des chiffres entre 00 et 99
		{
			int news1,news2;
			news1 = (p_numero [12]-'0'); // j'ai converti le caractére 12 et 13 du numero d'assurance en entier pour pouvoir appliquer les opérations arithmetiques (l'addition)
			news2 = p_numero [13]-'0';
			int  total= (news1*10)+news2;  //convertir les deux caractéres en entier
			if (total >0  && total<=99)
			{
				test5=true;
			}
		}
	}
return test5;
}
}

