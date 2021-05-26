/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 20:21:55 by ahaddad           #+#    #+#             */
/*   Updated: 2021/05/26 15:51:02 by ahaddad          ###   ########.fr       */
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
    void setname(std::string p);
    std::string getname();
    void settype(std::string p);
    std::string gettype();
    void announce();
};

#endif