/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 23:51:16 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/20 00:26:17 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(/* args */)
{
    this->_type = "ice";
}

Ice::Ice(Ice const & cur)
{
    this->_xp = cur._xp;
    this->_type = cur._type;
}
Ice &Ice::operator=(Ice const & cur)
{
    this->_xp = cur._xp;
    this->_type = cur._type;
    return *this;
}

Ice::~Ice()
{
    
}
AMateria* Ice::clone() const
{
    return  ((AMateria*)new Ice());
}
void Ice::use(ICharacter & target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
    AMateria::use(target);
}
