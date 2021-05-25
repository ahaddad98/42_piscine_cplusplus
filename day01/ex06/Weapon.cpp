/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 14:17:15 by ahaddad           #+#    #+#             */
/*   Updated: 2021/05/25 17:22:26 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


Weapon::Weapon(std::string typ) : type(typ)
{
}

Weapon::~Weapon()
{
}

void    Weapon::settype(std::string t)
{
    type = t;
}

std::string const & Weapon::gettype() const
{
    return type;
}