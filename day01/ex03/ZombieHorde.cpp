/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 15:51:34 by ahaddad           #+#    #+#             */
/*   Updated: 2021/05/24 18:12:25 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"

ZombieHorde::ZombieHorde(int number) : n(number)
{
    int i = -1;
    srand(time(0));
    std::string name[3] = {"Zombie one ","Zombie two ","Zombie three"};
    std::string type[3] = {"type one ","type two ","type three"};
    Zombie *zombie = new Zombie[n];
    while (++i < 5)
    {
        zombie[i].setname(name[rand() % 3]);
        zombie[i].settype(type[rand() % 3]);
        zombie[i].announce();
    }
    delete [] zombie;
}
