/*
 * validationFormat.h

 *
 *  Created on: 2020-02-07
 *      Author: etudiant
 */

#ifndef VALIDATIONFORMAT_H_
#define VALIDATIONFORMAT_H_
 namespace util
{
bool validerNumRAMQ(const std::string& p_numero, const std::string& p_nom, const
std::string& p_prenom, int p_jourNaissance, int p_moisNaissance, int p_anneeNaissance, char p_sex);
bool valider_code_regionl(const std::string& p_telephone);
bool valider_code_regionl_payant(const std::string& p_telephone);
bool validerTelephone(const std::string& p_telephone);
bool validerFormatNom(const std ::string& p_nom);
}

#endif /* VALIDATIONFORMAT_H_ */
