/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 13:54:55 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/05 15:28:42 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap()
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

SuperTrap::~SuperTrap()
{
}

SuperTrap::SuperTrap(std::string _name) : FragTrap(_name), NinjaTrap(_name)
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

SuperTrap::SuperTrap(const SuperTrap &s)
{
    name = s.getname();
}

SuperTrap &SuperTrap::operator=(const SuperTrap &s)
{
    name = s.getname();
    return *this;
}