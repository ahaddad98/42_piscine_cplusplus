/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 15:13:02 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/14 16:16:38 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"
  
Victim::Victim(/* args */)
{
}

Victim::~Victim()
{
    std::cout << "Victim " << name <<" just died for no apparent reason!" << std::endl;
}

Victim::Victim(std::string na) : name(na)
{
    std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
}
Victim::Victim(const Victim & vic)
{
    name = vic.name;
}
Victim & Victim::operator=(const  Victim & vic)
{
    name = vic.name;
    return *this;
}
std::string Victim::getname() const
{
    return name;
}

std::ostream &  operator<<(std::ostream & os, Victim const & vic)
{
    os << "I'm " << vic.getname() << " and I like otters!" << std::endl;
    return os;
}

void Victim::getPolymorphed() const
{
    std::cout << name << " has been turned into a cute little sheep!" << std::endl;
}