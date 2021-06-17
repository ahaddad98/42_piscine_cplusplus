/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 23:51:37 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/17 23:26:09 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_H
#define ICHARACTER_H

class ICharacter;
#include "AMateria.hpp"

class ICharacter
{
private:
    /* data */
public:
    virtual ~ICharacter() {}
    virtual std::string const &getName() const = 0;
    // virtual void equip(AMateria *m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter &target) = 0;
};

#endif