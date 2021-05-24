/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 15:49:39 by ahaddad           #+#    #+#             */
/*   Updated: 2021/05/24 16:42:11 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HORDE_H
#define ZOMBIE_HORDE_H
#include "Zombie.hpp"

class ZombieHorde
{
private:
    int n;

public:
    ZombieHorde(int n);
    void New_zombies(int n);
};

#endif