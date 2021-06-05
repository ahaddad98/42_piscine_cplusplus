/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 13:54:55 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/05 20:49:59 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap()
{
    this->Hit_points = 100;
    this->Max_hit_points = 100;
    this->Energy_points = 120;
    this->Max_energy_points = 120;
    this->level = 1;
    this->Melee_attack_damage = 60;
    this->Ranged_attack_damage = 20;
    this->Armor_damage_reduction = 5;
    std::cout << this->Hit_points << std::endl;
    std::cout << this->Max_hit_points << std::endl;
    std::cout << this->Energy_points << std::endl;
    std::cout << this->level << std::endl;
    std::cout << this->Melee_attack_damage << std::endl;
    std::cout << this->Ranged_attack_damage << std::endl;
}

SuperTrap::~SuperTrap()
{
}

SuperTrap::SuperTrap(std::string _name) : FragTrap(_name), NinjaTrap(_name)
{
    this->Hit_points = 100;
    this->Max_hit_points = 100;
    this->Energy_points = 120;
    this->Max_energy_points = 120;
    this->level = 1;
    this->Melee_attack_damage = 60;
    this->Ranged_attack_damage = 20;
    this->Armor_damage_reduction = 5;
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