/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon_two.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 15:36:54 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/20 15:37:19 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon_two.hpp"

Peon_two::Peon_two(/* args */)
{
}

Peon_two::~Peon_two()
{
    std::cout << "Bleuark..." << std::endl;
}
Peon_two::Peon_two(std::string na) :  Victim(na)
{
    std::cout << "Zog zog." << std::endl;
}

std::string Peon_two::getname() const 
{
    return this->name;
}
Peon_two::Peon_two(const Peon_two &peo)
{
    this->name = peo.name;
}
Peon_two &Peon_two::operator=(const Peon_two &peo)
{
    this->name = peo.name;
    return *this;
}

std::ostream & operator<<(std::ostream & os, Peon_two const & peo)
{
    os << "I'm " << peo.getname() << " and I like otters!" << std::endl;
    return os;
}

void Peon_two::getPolymorphed() const 
{
    std::cout << this->name << " has been turned into a pink pony!" << std::endl;
}