/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 13:46:30 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/07 12:23:22 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"


int main()
{
    std::cout << "***** HERE IS CLAPTRAP ******" << std::endl;
    ClapTrap claptrap;
    ClapTrap claptrap1("amine");
    claptrap1.meleeAttack("wayli");
    std::cout << "***** HERE IS FRAGTRAP ******" << std::endl;
    FragTrap fragtrap1("Amine");
    fragtrap1.takeDamage(10);
    fragtrap1.beRepaired(10);
    std::cout << "***** HERE IS SCAVTRAP ******" << std::endl;
    ScavTrap scavtrap1("Amine");
    scavtrap1.challengeNewcomer();
    std::cout << "***** HERE IS NINJATRAP ******" << std::endl;
    NinjaTrap ninjatrap;
    ninjatrap.ninjaShoebox(fragtrap1);
    ninjatrap.ninjaShoebox(claptrap);
    ninjatrap.ninjaShoebox(scavtrap1);
    return (0);
}