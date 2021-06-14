/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 16:55:35 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/14 19:34:42 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"


PowerFist::PowerFist(/* args */)
{
    this->_name = "Power Fist";
    this->_dammage = 50;
    this->_apcost = 8;
}

PowerFist::~PowerFist()
{
}

PowerFist::PowerFist(PowerFist const &pla)
{
    this->_name = pla._name;
    this->_dammage = pla._dammage;
    this->_apcost = pla._apcost;
}        
PowerFist &PowerFist::operator=(PowerFist const &pla)
{
    this->_name = pla._name;
    this->_dammage = pla._dammage;
    this->_apcost = pla._apcost;
    return *this;
}
void PowerFist::attack() const
{
    std::cout << "* pschhh... SBAM! *" <<std::endl;
}