/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 00:48:19 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/15 13:39:28 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_H
#define ISQUAD_H
#include "ISpaceMarine.hpp"
#include <iostream>

class ISquad
{
protected:
    int count;
    ISpaceMarine *ispa;
public:
    virtual ~ISquad() {}
    virtual int getCount() const = 0;
    virtual ISpaceMarine *getUnit(int) const = 0;
    virtual int push(ISpaceMarine *) = 0;
};

#endif