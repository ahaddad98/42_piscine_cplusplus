/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 23:46:53 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/20 23:59:44 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(/* args */)
{
    _xp = 0;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
    _xp = 0;
}

AMateria::~AMateria()
{
}

AMateria::AMateria(AMateria const & amat)
{
    _type = amat._type;
   _xp = amat._xp;
}

AMateria &AMateria::operator=(AMateria const & amat)
{
    _type = amat._type;
    _xp = amat._xp;
    return *this;
}

std::string const & AMateria::getType() const
{
    return _type;
}

unsigned int AMateria::getXP() const
{
    return _xp;
}

void AMateria::use(ICharacter & target)
{
    (void)target;
    _xp += 10;
}

std::ostream &		operator << ( std::ostream& out, const AMateria & in ) {

	out << "Materia of type " << in.getType()
		<< "; currently at " << in.getXP()
		<< " xp" << std::endl;
	return (out);
}