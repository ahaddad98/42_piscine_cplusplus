/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 16:52:47 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/14 19:53:16 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(/* args */)
{
}

Enemy::~Enemy()
{
}

Enemy::Enemy(int hit_p, std::string const &typ) : hp(hit_p), type(typ)
{
}

Enemy::Enemy(const Enemy &en)
{
    hp = en.hp;
    type = en.type;
}
Enemy &Enemy::operator=(Enemy const en)
{
    hp = en.hp;
    type = en.type;
    return *this;
}

int Enemy::getHP() const
{
    return hp;
}
std::string Enemy::getType() const
{
    return type;
}