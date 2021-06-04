/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 19:57:10 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/04 19:06:41 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(/* args */)
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
ClapTrap::ClapTrap(std::string na) : name(na)
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

ClapTrap::~ClapTrap()
{
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
