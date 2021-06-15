/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 00:47:09 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/15 21:50:30 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(/* args */)
{
}

TacticalMarine::~TacticalMarine()
{
}

ISpaceMarine *TacticalMarine::clone() const
{
}
void TacticalMarine::battleCry() const
{
    std::cout << "For the holy PLOT!" << std::endl;
}
void TacticalMarine::rangedAttack() const
{
    std::cout <<  "* attacks with a bolter *" << std::endl;
}
void TacticalMarine::meleeAttack() const
{
    std::cout << "* attacks with chainfists *" << std::endl;
}