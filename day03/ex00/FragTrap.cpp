/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 13:46:34 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/02 18:03:00 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*
****** canonical form ********
**    constructor defaut
**    Copy  constructor
**    destructor
**    operator : Sample $ oprator=(Sample const & rhs);
******************************
*/

void FragTrap::attack1(std::string target)
{
    std::cout << "Hyah!"
              << std::endl
              << "Heyyah!"
              << std::endl
              << "Take that!"
              << std::endl
              << target
              << std::endl;
}
void FragTrap::attack2(std::string target)
{
    std::cout << "Watch as we observe the rare and beautiful Clappy Bird!"
              << std::endl
              << "I'm flying! I'm really flying!"
              << std::endl
              << "Look out below!"
              << std::endl
              << target
              << std::endl;
}
void FragTrap::attack3(std::string target)
{
    std::cout << "RUN FOR YOUR LIIIIIVES!!!"
              << std::endl
              << "Oh, he's big... REALLY big!"
              << std::endl
              << "That guy looks an awful lot like a"
              << std::endl
              << target
              << std::endl;
}
void FragTrap::attack4(std::string target)
{
    std::cout << "I am a tornado of death and bullets!"
              << std::endl
              << "Stop me before I kill again, except don't!"
              << std::endl
              << "I'm on a roll!"
              << std::endl
              << target
              << std::endl;
}
void FragTrap::attack5(std::string target)
{
    std::cout << "My assets... frozen!"
              << std::endl
              << "I can't feel my fingers! Gah! I don't have any fingers!"
              << std::endl
              << "I am a robot popsicle!"
              << std::endl
              << target
              << std::endl;
}

FragTrap::FragTrap()
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

FragTrap::~FragTrap()
{
    if (Energy_points <= 0)
        std::cout << "Bask in my aura of death!" << std::endl;
    else
        std::cout << "ah ana mon3im ankhaliha douz" << std::endl;
}

FragTrap::FragTrap(std::string n) : name(n)
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

FragTrap::FragTrap(const FragTrap &f1)
{
    std::cout << "wa 3ta9 3ta9" << std::endl;
    name = f1.name;
}

FragTrap &FragTrap::operator=(const FragTrap &f)
{
    std::cout << "Assignation operator called" << std::endl;
    name = f.name;
    return *this;
}

void FragTrap::rangedAttack(std::string const &target)
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

void FragTrap::meleeAttack(std::string const &target)
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

void FragTrap::takeDamage(unsigned int amount)
{
    std::cout << "zahya dammage" << std::endl;
    if (Energy_points >= amount)
        Energy_points -= amount;
    else
        std::cout << "hhhhh da3ti a chab" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
    if ((Energy_points + amount) <= 100)
    {
        std::cout << "Good as new, I think. Am I leaking?" << std::endl;
        Energy_points += amount;
    }
    else
        Energy_points = 100;
}

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
    int r = 1;
    std::cout << "Hey I'm " << name << std::endl;
    if (this->Energy_points >= 25)
    {
        srand(time(0));
        r = rand() % 5;
        if ((r + 1) == 1)
            attack1(target);
        if ((r + 1) == 2)
            attack2(target);
        if ((r + 1) == 3)
            attack3(target);
        if ((r + 1) == 4)
            attack4(target);
        if ((r + 1) == 5)
            attack5(target);
        this->Energy_points -= 25;
    }
    else
        std::cout << "dammage sghar mn 25" << std::endl;
}