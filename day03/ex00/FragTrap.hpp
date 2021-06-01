/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 13:46:33 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/01 19:52:40 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H
#include <iostream>

class FragTrap
{
private:
    unsigned int Hit_points;
    unsigned int Max_hit_points;
    unsigned int Energy_points;
    unsigned int Max_energy_points;
    unsigned int level;
    unsigned int Melee_attack_damage;
    unsigned int Ranged_attack_damage;
    unsigned int Armor_damage_reduction;
    void attack1();
    void attack2();
    void attack3();
    void attack4();
    void attack5();
    std::string name;

public:
    FragTrap();
    ~FragTrap();
    FragTrap(std::string name);
    FragTrap(const FragTrap &f1);
    FragTrap &operator=(const FragTrap &f);
    void rangedAttack(std::string const &target);
    void meleeAttack(std::string const &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void vaulthunter_dot_exe(std::string const &target);
    void affich();
};

#endif