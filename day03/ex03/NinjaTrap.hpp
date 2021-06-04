/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 19:00:21 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/04 20:46:00 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_H
# define NINJATRAP_H
# include  <iostream>
# include "FragTrap.hpp"
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
private:
    // unsigned int Hit_points;
    // unsigned int Max_hit_points;
    // unsigned int Energy_points;
    // unsigned int Max_energy_points;
    // unsigned int level;
    // unsigned int Melee_attack_damage;
    // unsigned int Ranged_attack_damage;
    // unsigned int Armor_damage_reduction;
    // std::string name;
public:
    NinjaTrap();
    NinjaTrap(std::string na);
    NinjaTrap &operator=(const NinjaTrap & N);
    ~NinjaTrap();
    void ninjaShoebox(FragTrap const & frag);
    void ninjaShoebox(ClapTrap const & clap);
    void ninjaShoebox(ScavTrap const & scav);
};



#endif