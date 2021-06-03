/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 13:46:30 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/03 17:31:37 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
int main()
{
    std::cout << "***** HERE IS FRAGTRAP ******" << std::endl;
    FragTrap fragtrap;
    FragTrap fragtrap1("Amine");
    FragTrap fragtrap2("Amine1");
    fragtrap = fragtrap1;
    fragtrap.rangedAttack("mon3im");
    fragtrap1.rangedAttack("bolles");
    fragtrap1.meleeAttack("bolles");
    fragtrap1.takeDamage(10);
    fragtrap1.beRepaired(10);
    fragtrap1.vaulthunter_dot_exe("amine");
    fragtrap1.vaulthunter_dot_exe("amine");
    std::cout << "***** HERE IS SCAVTRAP ******" << std::endl;
    ScavTrap scavtrap;
    ScavTrap scavtrap1("Amine");
    ScavTrap scavtrap2("Amine1");
    scavtrap = scavtrap1;
    scavtrap.rangedAttack("mon3im");
    scavtrap1.rangedAttack("bolles");
    scavtrap1.meleeAttack("bolles");
    scavtrap1.takeDamage(10);
    scavtrap1.beRepaired(10);
    scavtrap1.challengeNewcomer();
    return (0);
}