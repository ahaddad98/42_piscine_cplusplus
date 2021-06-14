/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 16:50:34 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/14 16:51:55 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(/* args */)
{
}

Character::~Character()
{
}

Character::Character(std::string const & name) : _name(name)
{
    ap = 40;
    weapon = NULL;
}

Character::Character(const Character &cha)
{
    _name = cha._name;
    ap = cha.ap;
}
Character &Character::operator=(const Character &cha)
{
    _name = cha._name;
    ap = cha.ap;
    return *this;
}

std::string  Character::getName() const
{
    return _name;
}
AWeapon  *Character::getweapon() const
{
    return weapon;
}
int  Character::getap() const
{
    return ap;
}

void Character::recoverAP()
{
    this->ap += 10;
	if (this->ap > 40)
		this->ap = 40;
}
void Character::equip(AWeapon *weapon)
{
    this->weapon = weapon;
}
void Character::attack(Enemy *enemy)
{
    if (this->weapon)
	{
		if (this->ap > this->weapon->getAPCost())
		{
			std::cout << this->_name
				<< " attacks " << enemy->getType()
				<< " with a " << this->weapon->getName()
				<< std::endl;
			this->weapon->attack();

			enemy->takeDamage(this->weapon->getDamage());
			if (enemy->getHP() <= 0)
				delete enemy;

			this->ap -= this->weapon->getAPCost();
		}
	}
}

std::ostream		&operator<<(std::ostream &os, Character const &cha)
{
	os << cha.getName()
		<< " has " << cha.getap()
		<< " AP and ";
	if (cha.getweapon())
		os << "wields a " << cha.getweapon()->getName() << std::endl;
	else
		os << "is unarmed" <<  std::endl;
	return (os);
}