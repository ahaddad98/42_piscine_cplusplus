/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 23:49:12 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/18 17:13:58 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"


Character::Character(/* args */)
{
    int i = 0;
    while (i < 4)
    {
        amater[i] = NULL;
        i++;
    }
}

Character::~Character()
{
}

Character::Character(std::string na) : name(na)
{
    
}

std::string const &Character::getName() const
{
    return name;
}
void Character::equip(AMateria *m)
{
    (void)m;
}
void Character::unequip(int idx)
{
    idx = 0;
}
void Character::use(int idx, ICharacter &target)
{
    idx = 0;
    (void)target;
}