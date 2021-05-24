/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 15:08:46 by ahaddad           #+#    #+#             */
/*   Updated: 2021/05/24 17:13:20 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

void Zombie::setname(std::string n)
{
    name = n;
}

void Zombie::settype(std::string t)
{
    type= t;
}

std::string Zombie::getname()
{
    return name;
}
std::string Zombie::gettype()
{
    return type;
}

void Zombie::announce()
{
    std::cout << "<" 
                << this->name 
                << " (" 
                << this->type 
                << ")"
                << ">"
                << "Braiiiiiiinnnssss..." << std::endl;
}
