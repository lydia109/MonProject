/*
 * PersonneException.h
 *
 *  Created on: 2020-04-19
 *      Author: etudiant
 */

#ifndef PERSONNEEXCEPTION_H_
#define PERSONNEEXCEPTION_H_
#include <stdexcept>

class PersonneException  : public::std::runtime_error{
public:
	PersonneException( const std::string& p_raison);

};

class PersonneDejaPresenteException  : public::PersonneException{
public:
	PersonneDejaPresenteException( const std::string& p_raison);

};


class PersonneAbsenteException  : public::PersonneException{
public:
	PersonneAbsenteException ( const std::string& p_raison);

};

#endif /* PERSONNEEXCEPTION_H_ */
