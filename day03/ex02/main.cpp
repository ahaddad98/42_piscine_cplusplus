/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 13:46:30 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/07 11:40:31 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
    std::cout << "***** HERE IS CLAPTRAP ******" << std::endl;
    ClapTrap claptrap1("amine");
    claptrap1.meleeAttack("l3do");
    std::cout << "***** HERE IS FRAGTRAP ******" << std::endl;
    FragTrap fragtrap1("Amine");
    fragtrap1.rangedAttack("Kilua");
    fragtrap1.meleeAttack("Hisoka");
    fragtrap1.takeDamage(10);
    fragtrap1.beRepaired(10);
    fragtrap1.vaulthunter_dot_exe("amine");
    std::cout << "***** HERE IS SCAVTRAP ******" << std::endl;
    ScavTrap scavtrap;
    ScavTrap scavtrap1("Amine");
    scavtrap.rangedAttack("kilua");
    scavtrap1.meleeAttack("gon");
    scavtrap1.takeDamage(10);
    scavtrap1.beRepaired(10);
    scavtrap1.challengeNewcomer();
    return (0);
}