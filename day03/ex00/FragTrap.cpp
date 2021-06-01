/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 13:46:34 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/01 21:37:31 by ahaddad          ###   ########.fr       */
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

void FragTrap::attack1()
{
    std::cout << "Hyah!"
              << std::endl
              << "Heyyah!"
              << std::endl
              << "Take that!"
              << std::endl
              << "Bop!"
              << std::endl;
}
void FragTrap::attack2()
{
    std::cout << "2 Hyah!"
              << std::endl
              << "2 Heyyah!"
              << std::endl
              << "2 Take that!"
              << std::endl
              << "2 Bop!"
              << std::endl;
}
void FragTrap::attack3()
{
    std::cout << "3 Hyah!"
              << std::endl
              << "3 Heyyah!"
              << std::endl
              << "3 Take that!"
              << std::endl
              << "3 Bop!"
              << std::endl;
}
void FragTrap::attack4()
{
    std::cout << "4 Hyah!"
              << std::endl
              << "4 Heyyah!"
              << std::endl
              << "4 Take that!"
              << std::endl
              << "4 Bop!"
              << std::endl;
}
void FragTrap::attack5()
{
    std::cout << "5 Hyah!"
              << std::endl
              << "5 Heyyah!"
              << std::endl
              << "5 Take that!"
              << std::endl
              << "5 Bop!"
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
    std::cout << "layss layss layss" << std::endl;
}

FragTrap::~FragTrap()
{
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
    std::cout << "layss layss layss" << std::endl;
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
    std::cout << "sbitar sbitar " << std::endl;
    if ((Energy_points + amount) <= 100)
        Energy_points += amount;
    else
        Energy_points = 100;
}

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
    int r = 1;
    if (this->Energy_points >= 25)
    {
        // Random Attack
        srand(time(0));
        r = rand() % 5;
        if ((r+1) == 1)
            attack1();
        if ((r+1) == 2)
            attack2();
        if ((r+1) == 3)
            attack3();
        if ((r+1) == 4)
            attack4();
        if ((r+1) == 5)
            attack5();
        this->Energy_points -= 25;
    }
    else
    {
        std::cout << "dammage sghar mn 25" << std::endl;
    }    
        std::cout << target << std::endl;
}