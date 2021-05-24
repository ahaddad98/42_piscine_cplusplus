/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 15:08:52 by ahaddad           #+#    #+#             */
/*   Updated: 2021/05/24 17:54:07 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <iostream>

class Zombie
{
private:
    std::string name;
    std::string type;

public:
    Zombie();
    void    setname(std::string n);
    void    settype(std::string t);
    std::string getname();
    std::string gettype();
    void announce();
};

#endif