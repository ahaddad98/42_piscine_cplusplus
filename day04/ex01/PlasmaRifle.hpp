/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 16:53:54 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/14 18:53:02 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_H
# define PLASMARIFLE_H
#include "AWeapon.hpp"

class PlasmaRifle : public  AWeapon
{
private:
    /* data */
public:
    PlasmaRifle(/* args */);
    PlasmaRifle(PlasmaRifle const &pla);
    PlasmaRifle & operator=(PlasmaRifle const &pla);
    ~PlasmaRifle();
    virtual void attack() const;
};

#endif