/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 19:57:10 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/05 21:18:50 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(/* args */)
{
}
ClapTrap::ClapTrap(std::string na) : name(na)
{
}

std::string ClapTrap::getname() const
{
    return name;
}


ClapTrap::~ClapTrap()
{
}
ClapTrap::ClapTrap(const ClapTrap & f1)
{
    std::cout << "wa 3ta9 3ta9" << std::endl;
    name = f1.name;
    this->Hit_points = f1.Hit_points;
    this->Max_hit_points = f1.Max_hit_points;
    this->Energy_points = f1.Energy_points;
    this->Max_energy_points = f1.Max_energy_points;
    this->level = 1;
    this->Melee_attack_damage = f1.Melee_attack_damage;
    this->Ranged_attack_damage = f1.Ranged_attack_damage;
    this->Armor_damage_reduction = f1.Armor_damage_reduction;
}
void ClapTrap::rangedAttack(std::string const &target)
{
    std::cout << "FR4G-TP "
              << name
              << " attaque "
              << target
              << " a distance , causant "
              << Ranged_attack_damage
              << " points de degats "
              << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &f)
{
    std::cout << "Assignation operator called" << std::endl;
    name = f.name;
    this->Hit_points = f.Hit_points;
    this->Max_hit_points = f.Max_hit_points;
    this->Energy_points = f.Energy_points;
    this->Max_energy_points = f.Max_energy_points;
    this->level = 1;
    this->Melee_attack_damage = f.Melee_attack_damage;
    this->Ranged_attack_damage = f.Ranged_attack_damage;
    this->Armor_damage_reduction = f.Armor_damage_reduction;
    return *this;
}

void ClapTrap::meleeAttack(std::string const &target)
{
    std::cout << "FR4G-TP "
              << name
              << " attaque "
              << target
              << " a distance , causant "
              << Melee_attack_damage
              << " points de degats "
              << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "zahya dammage" << std::endl;
    if (Energy_points >= amount)
        Energy_points -= amount;
    else
        std::cout << "hhhhh da3ti a chab" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if ((Energy_points + amount) <= 100)
    {
        std::cout << "Good as new, I think. Am I leaking?" << std::endl;
        Energy_points += amount;
    }
    else
        Energy_points = 100;
}
