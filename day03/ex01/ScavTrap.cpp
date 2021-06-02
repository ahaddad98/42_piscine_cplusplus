/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 20:47:18 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/02 21:21:39 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// ScavTrap::ScavTrap(/* args */)
// {
// }

// ScavTrap::~ScavTrap()
// {
// }

ScavTrap::ScavTrap()
{
    this->Hit_points = 100;
    this->Max_hit_points = 100;
    this->Energy_points = 100;
    this->Max_energy_points = 100;
    this->level = 1;
    this->Melee_attack_damage = 30;
    this->Ranged_attack_damage = 20;
    this->Armor_damage_reduction = 20;
    std::cout << "Look out everybody! Things are about to get awesome!" << std::endl;
}

ScavTrap::~ScavTrap()
{
    if (Energy_points <= 0)
        std::cout << "Bask in my aura of death!" << std::endl;
    else
        std::cout << "ah ana mon3im ankhaliha douz FROM SCAVTRAP" << std::endl;
}

ScavTrap::ScavTrap(std::string n) : name(n)
{
    this->Hit_points = 100;
    this->Max_hit_points = 100;
    this->Energy_points = 100;
    this->Max_energy_points = 100;
    this->level = 1;
    this->Melee_attack_damage = 30;
    this->Ranged_attack_damage = 20;
    this->Armor_damage_reduction = 20;
    std::cout << "Look out everybody!" <<"My name is " << name  << ", And now, Things are about to get awesome!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &f1)
{
    std::cout << "wa 3ta9 3ta9" << std::endl;
    name = f1.name;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &f)
{
    std::cout << "Assignation operator called" << std::endl;
    name = f.name;
    return *this;
}

void ScavTrap::rangedAttack(std::string const &target)
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

void ScavTrap::meleeAttack(std::string const &target)
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

void ScavTrap::takeDamage(unsigned int amount)
{
    std::cout << "zahya dammage" << std::endl;
    if (Energy_points >= amount)
        Energy_points -= amount;
    else
        std::cout << "hhhhh da3ti a chab" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
    if ((Energy_points + amount) <= 100)
    {
        std::cout << "Good as new, I think. Am I leaking?" << std::endl;
        Energy_points += amount;
    }
    else
        Energy_points = 100;
}