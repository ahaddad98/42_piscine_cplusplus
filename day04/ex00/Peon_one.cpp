/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon_one.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 15:32:32 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/20 15:32:59 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon_one.hpp"

Peon_one::Peon_one(/* args */)
{
}

Peon_one::~Peon_one()
{
    std::cout << "Bleuark..." << std::endl;
}
Peon_one::Peon_one(std::string na) :  Victim(na)
{
    std::cout << "Zog zog." << std::endl;
}

std::string Peon_one::getname() const 
{
    return this->name;
}
Peon_one::Peon_one(const Peon_one &peo)
{
    this->name = peo.name;
}
Peon_one &Peon_one::operator=(const Peon_one &peo)
{
    this->name = peo.name;
    return *this;
}

std::ostream & operator<<(std::ostream & os, Peon_one const & peo)
{
    os << "I'm " << peo.getname() << " and I like otters!" << std::endl;
    return os;
}

void Peon_one::getPolymorphed() const 
{
    std::cout << this->name << " has been turned into a pink pony!" << std::endl;
}