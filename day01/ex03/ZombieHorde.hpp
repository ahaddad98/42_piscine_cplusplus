/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 15:49:39 by ahaddad           #+#    #+#             */
/*   Updated: 2021/05/26 16:34:39 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HORDE_H
#define ZOMBIE_HORDE_H
#include "Zombie.hpp"

class ZombieHorde
{
private:
    int n;
    Zombie *zombie;
public:
    ZombieHorde();
    ~ZombieHorde();
    ZombieHorde(int n);
    void announce();
    void New_zombies(int n);
};

#endif