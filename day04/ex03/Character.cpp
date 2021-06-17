/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 23:49:12 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/17 23:45:55 by ahaddad          ###   ########.fr       */
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

std::string const &Character::getName() const
{
    
}
// void equip(AMateria *m)
void Character::unequip(int idx)
{
    
}
void Character::use(int idx, ICharacter &target)
{
    
}