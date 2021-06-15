/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 00:46:02 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/15 21:49:01 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTCALMARINE_H
#define TACTCALMARINE_H
#include "ISpaceMarine.hpp"
#include <iostream>
class TacticalMarine : public ISpaceMarine
{
private:
    /* data */
public:
    TacticalMarine(/* args */);
    ~TacticalMarine();
    ISpaceMarine *clone() const;
    void battleCry() const;
    void rangedAttack() const;
    void meleeAttack() const;
};

#endif