/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 15:12:56 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/14 16:19:59 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer()
{
}

Sorcerer::~Sorcerer()
{
    std::cout << name <<", " << title <<", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer::Sorcerer(std::string na, std::string tit) : name(na), title(tit)
{
    std::cout << name <<", " << title <<", is born!" << std::endl;
}
Sorcerer::Sorcerer(const Sorcerer &sor)
{
    name = sor.name;
    title = sor.title;
}
Sorcerer &Sorcerer::operator=(const Sorcerer &sor)
{
    name = sor.name;
    title = sor.title;
    return *this;
}
std::string Sorcerer::getname() const 
{
    return name;
}
std::string Sorcerer::gettitle() const 
{
    return title;
}
std::ostream &  operator<<(std::ostream & os, Sorcerer const & sor)
{
    os << "I am " << sor.getname() << ", " << sor.gettitle() << ", and I like ponies!" << std::endl;
    return os;
}

void Sorcerer::polymorph(Victim const & vic) const
{
    vic.getPolymorphed();
}

void Sorcerer::polymorph(Peon const & peo) const
{
    peo.getPolymorphed();
}