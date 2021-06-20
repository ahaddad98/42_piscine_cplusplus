/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 16:58:54 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/20 16:42:53 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(/* args */)
{
    this->hp = 170;
    this->type =  "Super Mutant";
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant()
{
    std::cout << "Aaargh..." << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant & super)
{
    this->hp = super.hp;
    this->type = super.type;
}
SuperMutant &SuperMutant::operator=(const SuperMutant & super)
{
    this->hp = super.hp;
    this->type = super.type;
    return *this;
}

void SuperMutant::takeDamage(int dam)
{
    dam = 3;
    if (hp - dam > 0)
        hp -= dam;
    else
    {
        hp = 0;
        std::cout << "alwadaa3 from SuperMutant" << std::endl;
    }
}