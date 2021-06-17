/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 23:50:14 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/17 23:01:54 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(/* args */)
{
    this->_type = "cure";
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
    return  ((AMateria*)new Cure(*this));
}
void Cure::use(ICharacter & target)
{
    AMateria::use(target);
    this->_xp += 10;
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
