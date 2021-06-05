/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 20:47:18 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/05 20:31:28 by ahaddad          ###   ########.fr       */
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

ScavTrap::ScavTrap() : ClapTrap()
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

ScavTrap::ScavTrap(std::string n) : ClapTrap(n)
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
}

ScavTrap &ScavTrap::operator=(const ScavTrap &f)
{
    std::cout << "Assignation operator called" << std::endl;
    name = f.name;
    return *this;
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