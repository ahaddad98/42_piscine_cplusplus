/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 20:21:53 by ahaddad           #+#    #+#             */
/*   Updated: 2021/05/24 14:09:02 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::announce()
{
    std::cout << "<" <<  Zombie::getname() << " " << Zombie::gettype() << ">" << "Braiiiiiiinnnssss..." <<std::endl;
}

std::string Zombie::getname()
{
    return name;
}

void    Zombie::setname(std::string n)
{
    name = n;
}

std::string Zombie::gettype()
{
    return type;
}

void    Zombie::settype(std::string n)
{
    type = n;
}