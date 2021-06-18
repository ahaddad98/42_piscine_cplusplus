/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 23:51:16 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/18 15:48:44 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(/* args */)
{
    this->_type = "Ice";
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
    return  ((AMateria*)new Ice(*this));
}
void Ice::use(ICharacter & target)
{
    AMateria::use(target);
    this->_xp += 10;
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
