/*
 * PersonneException.cpp
 *
 *  Created on: 2020-04-19
 *      Author: etudiant
 */

#include "PersonneException.h"


PersonneException::PersonneException(const std::string& p_raison):std::runtime_error(p_raison)
{
}

PersonneDejaPresenteException::PersonneDejaPresenteException(
		const std::string& p_raison):PersonneException(p_raison)
{
}

PersonneAbsenteException::PersonneAbsenteException(
		const std::string& p_raison) :PersonneException(p_raison)
{
}
