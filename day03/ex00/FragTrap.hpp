/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 13:46:33 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/01 12:38:59 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H
#include <iostream>

class FragTrap
{
private:
    static int  const  Hit_points = 100;
    static int  const  Max_hit_points = 100;
    static int  const  Energy_points = 100;
    static int  const  Max_energy_points = 100;
    static int  const  level = 1;
    static int  const  Melee_attack_damage = 30;
    static int  const  Ranged_attack_damage = 20;
    static int  const  Armor_damage_reduction = 20;
    std::string name;
public:
    FragTrap();
    ~FragTrap();
    FragTrap(std::string name);
    FragTrap(const FragTrap& f1);
    FragTrap    & operator=(const FragTrap &f);
    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void vaulthunter_dot_exe(std::string const & target);
    void affich();
};

#endif