/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 14:16:56 by ahaddad           #+#    #+#             */
/*   Updated: 2021/05/25 17:58:53 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string nm, Weapon& w) : name(nm), weapon(w)
{
}

HumanA::~HumanA()
{
}

void    HumanA::attack()
{
    // weapon.settype("some other type of club");
    // weapon.settype("ahs");
    // weapon.settype("some other type of club");
    //  weapon.gettype();
    std::cout << name << " attacks with his " << weapon.gettype() << std::endl;
}
