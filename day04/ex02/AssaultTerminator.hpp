/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 00:44:02 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/16 16:25:02 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  ASSAULTTERMINATOR_H
#define  ASSAULTTERMINATOR_H
#include "TacticalMarine.hpp"
# include <iostream>
# include "ISpaceMarine.hpp"
class AssaultTerminator : public ISpaceMarine
{
private:
    /* data */
public:
    AssaultTerminator(/* args */);
    AssaultTerminator(AssaultTerminator const &assaut);
    ~AssaultTerminator();
    ISpaceMarine *clone() const;
    void battleCry() const;
    void rangedAttack() const;
    void meleeAttack() const;
};

#endif