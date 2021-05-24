/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 20:22:01 by ahaddad           #+#    #+#             */
/*   Updated: 2021/05/24 14:07:07 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_H
# define ZOMBIEEVENT_H
# include <iostream>
# include "Zombie.hpp"
class ZombieEvent
{
private:
    std::string    ZombieType;
public:
    Zombie *newZombie(std::string name);
    void setZombieType(std::string type);
};

#endif