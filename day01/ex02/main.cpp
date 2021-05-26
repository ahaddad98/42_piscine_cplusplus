/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 20:21:50 by ahaddad           #+#    #+#             */
/*   Updated: 2021/05/26 15:52:13 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <cstdlib>
#include <ctime>

Zombie *ZombieEvent::newZombie(std::string name)
{
    Zombie *zombie = new Zombie();
    zombie->setname(name);
    zombie->settype(ZombieType);
    zombie->announce();
    return zombie;
}

void randomChump()
{
    Zombie zombie;
    srand(time(0));
    std::string first[3] = {"Zombie one ", "Zombie two ", "Zombie three"};
    zombie.setname(first[rand() % 3]);
    zombie.settype("type 2");
    zombie.announce();
}

int main()
{
    Zombie zombie;
    ZombieEvent zombieevent;
    zombieevent.setZombieType("type1");
    zombie = *zombieevent.newZombie("amine");
    randomChump();
}