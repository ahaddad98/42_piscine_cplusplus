/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 16:58:01 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/20 16:44:17 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(/* args */)
{
    this->hp = 80;
    this->type =  "RadScorpion";
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
    std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion & rad)
{
    this->hp = rad.hp;
    this->type = rad.type;
}

RadScorpion &RadScorpion::operator=(const RadScorpion & rad)
{
    this->hp = rad.hp;
    this->type = rad.type;
    return *this;
}
