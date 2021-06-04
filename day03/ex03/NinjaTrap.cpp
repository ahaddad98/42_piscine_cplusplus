/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 19:00:18 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/04 20:46:20 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap()
{
    this->Hit_points = 60;
    this->Max_hit_points = 60;
    this->Energy_points = 120;
    this->Max_energy_points = 120;
    this->level = 1;
    this->Melee_attack_damage = 60;
    this->Ranged_attack_damage = 5;
    this->Armor_damage_reduction = 0;
}
NinjaTrap::NinjaTrap(std::string na) : name(na)
{
    this->Hit_points = 100;
    this->Max_hit_points = 100;
    this->Energy_points = 100;
    this->Max_energy_points = 100;
    this->level = 1;
    this->Melee_attack_damage = 30;
    this->Ranged_attack_damage = 20;
    this->Armor_damage_reduction = 20;
}

NinjaTrap::~NinjaTrap()
{
}

NinjaTrap &NinjaTrap::operator=(const NinjaTrap & N)
{
    name = N.name;
    return *this;
}

void NinjaTrap::ninjaShoebox()
{
    
}