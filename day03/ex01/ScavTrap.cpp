/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 20:47:18 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/05 21:01:56 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void ScavTrap::challenge1()
{
    std::cout << "Don't bother trying to find me. I'll find you." << std::endl;
}
void ScavTrap::challenge2()
{
    std::cout << "Hope your teammates bring you back-- so I can find you again." << std::endl;
}
void ScavTrap::challenge3()
{
    std::cout << "You're just another mark on my list." << std::endl;
}
void ScavTrap::challenge4()
{
    std::cout << "I don't want to kill you. But, you're in my way." << std::endl;
}
void ScavTrap::challenge5()
{
    std::cout << "Wait until you see what I have in store." << std::endl;
}

ScavTrap::ScavTrap()
{
    this->Hit_points = 100;
    this->Max_hit_points = 100;
    this->Energy_points = 50;
    this->Max_energy_points = 50;
    this->level = 1;
    this->Melee_attack_damage = 20;
    this->Ranged_attack_damage = 15;
    this->Armor_damage_reduction = 3;
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
    this->Energy_points = 50;
    this->Max_energy_points = 50;
    this->level = 1;
    this->Melee_attack_damage = 20;
    this->Ranged_attack_damage = 15;
    this->Armor_damage_reduction = 3;
    std::cout << "Look out everybody!"
              << "My name is " << name << ", And now, Things are about to get awesome!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &f1)
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

ScavTrap &ScavTrap::operator=(const ScavTrap &f)
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

void ScavTrap::challengeNewcomer()
{
    int r = 1;
    std::cout << "Hey I'm " << name << std::endl;
    if (this->Energy_points >= 25)
    {
        srand(time(0));
        r = rand() % 5;
        if ((r + 1) == 1)
            challenge1();
        if ((r + 1) == 2)
            challenge2();
        if ((r + 1) == 3)
            challenge3();
        if ((r + 1) == 4)
            challenge4();
        if ((r + 1) == 5)
            challenge5();
        this->Energy_points -= 25;
    }
    else
        std::cout << "dammage sghar mn 25" << std::endl;
}