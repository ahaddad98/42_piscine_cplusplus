/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 00:47:09 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/16 16:00:03 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(/* args */)
{
    std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::~TacticalMarine()
{
    std::cout << "Aaargh..." <<std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const & tact)
{
    *this = tact;
}

ISpaceMarine *TacticalMarine::clone() const
{
     return  ((ISpaceMarine*)new TacticalMarine(*this));
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
    std::cout << "* attacks with a chainsword *" << std::endl;
}