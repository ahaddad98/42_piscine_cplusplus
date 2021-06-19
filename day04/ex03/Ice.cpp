/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 23:51:16 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/20 00:44:25 by ahaddad          ###   ########.fr       */
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
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    AMateria::use(target);
}
