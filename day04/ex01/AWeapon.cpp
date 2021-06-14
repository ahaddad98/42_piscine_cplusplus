/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 16:50:11 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/14 18:58:01 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"


AWeapon::AWeapon()
{
}

AWeapon::~AWeapon()
{
}

AWeapon::AWeapon(std::string const &name, int apcost, int damage) : _name(name), _apcost(apcost), _dammage(damage)
{
}

AWeapon::AWeapon(AWeapon const &wep)
{
    _name = wep._name;
    _apcost = wep._apcost;
    _dammage = wep._dammage;
}

AWeapon &AWeapon::operator=(AWeapon const &wep)
{
    _name = wep._name;
    _apcost = wep._apcost;
    _dammage = wep._dammage;
    return *this;
}

std::string AWeapon::getName() const
{
    return _name;
}

int AWeapon::getAPCost() const
{
    return _apcost;
}

int AWeapon::getDamage() const
{
    return _dammage;
}

