/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 19:57:02 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/04 20:27:23 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H
#include <iostream>

class ClapTrap
{
protected:
    unsigned int Hit_points;
    unsigned int Max_hit_points;
    unsigned int Energy_points;
    unsigned int Max_energy_points;
    unsigned int level;
    unsigned int Melee_attack_damage;
    unsigned int Ranged_attack_damage;
    unsigned int Armor_damage_reduction;
    std::string name;

public:
    ClapTrap();
    ClapTrap(std::string na);
    ClapTrap &operator=(const ClapTrap &f);
    ~ClapTrap();
    void rangedAttack(std::string const &target);
    void meleeAttack(std::string const &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif