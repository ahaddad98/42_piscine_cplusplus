/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 15:12:49 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/20 14:00:36 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(/* args */)
{
}

Peon::~Peon()
{
    std::cout << "Bleuark..." << std::endl;
}
Peon::Peon(std::string na) :  Victim(na)
{
    std::cout << "Zog zog." << std::endl;
}

std::string Peon::getname() const 
{
    return this->name;
}
Peon::Peon(const Peon &peo)
{
    this->name = peo.name;
}
Peon &Peon::operator=(const Peon &peo)
{
    this->name = peo.name;
    return *this;
}

std::ostream & operator<<(std::ostream & os, Peon const & peo)
{
    os << "I'm " << peo.getname() << " and I like otters!" << std::endl;
    return os;
}

void Peon::getPolymorphed() const 
{
    std::cout << this->name << " has been turned into a pink pony!" << std::endl;
}