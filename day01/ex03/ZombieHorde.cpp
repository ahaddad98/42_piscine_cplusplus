/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 15:51:34 by ahaddad           #+#    #+#             */
/*   Updated: 2021/05/31 12:07:02 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"

void ZombieHorde::announce()
{
    int i = 0;
    while (i < n)
    {
        zombie[i].announce();
        i++;
    }
}

ZombieHorde::ZombieHorde() 
{
}

ZombieHorde::ZombieHorde(int number) : n(number)
{
    int i = -1;
    srand(time(0));
    std::string name[3] = {"Zombie one ", "Zombie two ", "Zombie three"};
    std::string type[3] = {"type one ", "type two ", "type three"};
    zombie = new Zombie[n];
    while (++i < 5)
    {
        zombie[i].setname(name[rand() % 3]);
        zombie[i].settype(type[rand() % 3]);
    }
    announce();
}

ZombieHorde::~ZombieHorde() 
{
    // delete[] zombie;
}
