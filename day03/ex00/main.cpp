/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 13:46:30 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/02 15:56:33 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
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
    return (0);
}