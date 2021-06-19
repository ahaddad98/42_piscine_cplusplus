/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 23:49:12 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/20 00:19:53 by ahaddad          ###   ########.fr       */
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
    int i = 0;
    while ( i < 4)
    {
		if (amater[i])
        {
			delete (amater[i]);
			amater[i] = NULL;
		}
        i++;
    }
}

Character::Character(std::string na) : name(na)
{
    int i = 0;
    while (i < 4)
    {
        amater[i] = NULL;
        i++;
    }
}

std::string const &Character::getName() const
{
    return name;
}
void Character::equip(AMateria *m)
{
    if (!m)
		return ;

	int i = 0;

	while (i < 4)
    {
		if (amater[i] == NULL)
        {
			amater[i] = m;
			break ;
		}
        i++;
    }
}
void Character::unequip(int idx)
{
    if (idx < 0 || idx > (4 - 1))
		return ;
	amater[idx] = NULL;
}
void Character::use(int idx, ICharacter &target)
{
    if (amater[idx] != NULL)
		amater[idx]->use(target);
}

std::ostream &		operator << ( std::ostream& out, const Character & in )
{
	out << "<Character> " << in.getName() << std::endl;
	return (out);
}