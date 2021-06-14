/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 16:47:49 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/14 18:47:19 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_H
#define AWEAPON_H
#include <iostream>

class AWeapon
{
protected:
    std::string _name;
    int _apcost;
    int _dammage;

public:
    AWeapon();
    AWeapon(AWeapon const &wep);
    AWeapon &operator=(AWeapon const &wep);
    AWeapon(std::string const &name, int apcost, int damage);
    ~AWeapon();
    std::string getName() const;
    int getAPCost() const;
    int getDamage() const;
    virtual void attack() const = 0;
};

#endif