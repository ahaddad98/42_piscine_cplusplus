/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 14:17:06 by ahaddad           #+#    #+#             */
/*   Updated: 2021/05/25 19:59:22 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

// HumanB::HumanB()
// {
// }
HumanB::HumanB(std::string nm) : name(nm)
{
}

void    HumanB::setweapon(Weapon& wep)
{
    weapon = &wep;
}
void    HumanB::attack()
{
    // weapon.settype("some other type of club");
    // weapon.settype("ahs");
    // weapon.settype("some other type of club");
    //  weapon.gettype();
    std::cout << name << " attacks with his " << weapon->gettype() << std::endl;
}