/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 13:46:34 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/01 12:44:14 by ahaddad          ###   ########.fr       */
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

FragTrap::FragTrap()
{
    std::cout << "constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "destructor called" << std::endl;
}

FragTrap::FragTrap(std::string n) : name(n)
{
}

FragTrap::FragTrap(const FragTrap &f1)
{
    std::cout << "Copy constructor called" << std::endl;
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

// void FragTrap::takeDamage(unsigned int amount)
// {
// }

// void FragTrap::beRepaired(unsigned int amount)
// {
// }

// void vaulthunter_dot_exe(std::string const &target)
// {
// }