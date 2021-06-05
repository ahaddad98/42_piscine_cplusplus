/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 19:00:18 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/05 21:26:50 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap()
{
    this->Hit_points = 60;
    this->Max_hit_points = 60;
    this->Energy_points = 120;
    this->Max_energy_points = 120;
    this->level = 1;
    this->Melee_attack_damage = 60;
    this->Ranged_attack_damage = 5;
    this->Armor_damage_reduction = 0;
}
NinjaTrap::NinjaTrap(std::string na) : ClapTrap(na)
{
    this->Hit_points = 100;
    this->Max_hit_points = 100;
    this->Energy_points = 100;
    this->Max_energy_points = 100;
    this->level = 1;
    this->Melee_attack_damage = 30;
    this->Ranged_attack_damage = 20;
    this->Armor_damage_reduction = 20;
}

NinjaTrap::~NinjaTrap()
{
}

NinjaTrap::NinjaTrap(const NinjaTrap &N)
{
    name = N.name;
    this->Hit_points = N.Hit_points;
    this->Max_hit_points = N.Max_hit_points;
    this->Energy_points = N.Energy_points;
    this->Max_energy_points = N.Max_energy_points;
    this->level = 1;
    this->Melee_attack_damage = N.Melee_attack_damage;
    this->Ranged_attack_damage = N.Ranged_attack_damage;
    this->Armor_damage_reduction = N.Armor_damage_reduction;
}

NinjaTrap &NinjaTrap::operator=(const NinjaTrap &N)
{
    name = N.name;
    this->Hit_points = N.Hit_points;
    this->Max_hit_points = N.Max_hit_points;
    this->Energy_points = N.Energy_points;
    this->Max_energy_points = N.Max_energy_points;
    this->level = 1;
    this->Melee_attack_damage = N.Melee_attack_damage;
    this->Ranged_attack_damage = N.Ranged_attack_damage;
    this->Armor_damage_reduction = N.Armor_damage_reduction;
    return *this;
}

void NinjaTrap::ninjaShoebox(FragTrap const &frag) const
{
    if (this->Energy_points >= 25)
    {
        std::cout << this->name << " hhhhh 3andek ydorbek asahbi" << std::endl;
        std::cout << frag.getname() << " gha khalih " << std::endl;
    }
    else
        std::cout << "hhhh bslama" << std::endl;
}

void NinjaTrap::ninjaShoebox(ClapTrap const &clap) const
{
    if (this->Energy_points >= 25)
    {
        std::cout << this->name << " hhhhh 3andek ydorbek asahbi" << std::endl;
        std::cout << clap.getname() << " gha khalih " << std::endl;
    }
    else
        std::cout << "hhhh bslama" << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap const &scav) const
{
    if (this->Energy_points >= 25)
    {
        std::cout << this->name << " hhhhh 3andek ydorbek asahbi" << std::endl;
        std::cout << scav.getname() << " gha khalih " << std::endl;
    }
    else
        std::cout << "hhhh bslama" << std::endl;
}
