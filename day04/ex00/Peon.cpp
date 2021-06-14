/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 15:12:49 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/14 16:19:22 by ahaddad          ###   ########.fr       */
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
Peon::Peon(std::string na) :  name(na)
{
    std::cout << "Some random victim called " << name << " just appeared!" << std::endl; 
    std::cout << "Zog zog." << std::endl;
}

std::string Peon::getname() const 
{
    return name;
}
Peon::Peon(const Peon &peo)
{
    name = peo.name;
}
Peon &Peon::operator=(const Peon &peo)
{
    name = peo.name;
    return *this;
}

std::ostream & operator<<(std::ostream & os, Peon const & peo)
{
    os << "I'm " << peo.getname() << " and I like otters!" << std::endl;
    return os;
}

void Peon::getPolymorphed() const 
{
    std::cout << name << " has been turned into a pink pony!" << std::endl;
}