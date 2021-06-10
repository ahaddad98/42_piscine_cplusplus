/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 13:54:55 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/10 18:09:18 by ahaddad          ###   ########.fr       */
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
    this->Hit_points = s.Hit_points;
    this->Max_hit_points = s.Max_hit_points;
    this->Energy_points = s.Energy_points;
    this->Max_energy_points = s.Max_energy_points;
    this->level = 1;
    this->Melee_attack_damage = s.Melee_attack_damage;
    this->Ranged_attack_damage = s.Ranged_attack_damage;
    this->Armor_damage_reduction = s.Armor_damage_reduction;
}

SuperTrap &SuperTrap::operator=(const SuperTrap &s)
{
    name = s.getname();
    this->Hit_points = s.Hit_points;
    this->Max_hit_points = s.Max_hit_points;
    this->Energy_points = s.Energy_points;
    this->Max_energy_points = s.Max_energy_points;
    this->level = 1;
    this->Melee_attack_damage = s.Melee_attack_damage;
    this->Ranged_attack_damage = s.Ranged_attack_damage;
    this->Armor_damage_reduction = s.Armor_damage_reduction;
    return *this;
}

void SuperTrap::rangedAttack(std::string const &target)
{
    this->FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const &target)
{
    this->NinjaTrap::meleeAttack(target);
}