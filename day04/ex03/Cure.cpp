/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 23:50:14 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/20 00:23:15 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(/* args */)
{
    this->_type = "cure";
    // AMateria( "cure" );
}

Cure::Cure(Cure const & cur)
{
    this->_xp = cur._xp;
    this->_type = cur._type;
}
Cure &Cure::operator=(Cure const & cur)
{
    this->_xp = cur._xp;
    this->_type = cur._type;
    return *this;
}

Cure::~Cure()
{
    
}
AMateria* Cure::clone() const
{
    return  ((AMateria*)new Cure());
}
void Cure::use(ICharacter & target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
    AMateria::use(target);
}
