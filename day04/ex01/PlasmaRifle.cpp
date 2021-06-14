/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 16:54:41 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/14 19:31:01 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(/* args */)
{
    this->_name = "Plasma Rifle";
    this->_dammage = 25;
    this->_apcost = 5;
}

PlasmaRifle::~PlasmaRifle()
{
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &pla)
{
    this->_name = pla._name;
    this->_dammage = pla._dammage;
    this->_apcost = pla._apcost;
}        
PlasmaRifle &PlasmaRifle::operator=(PlasmaRifle const &pla)
{
    this->_name = pla._name;
    this->_dammage = pla._dammage;
    this->_apcost = pla._apcost;
    return *this;
}
void PlasmaRifle::attack() const
{
    std::cout << "* piouuu piouuu piouuu *" <<std::endl;
}