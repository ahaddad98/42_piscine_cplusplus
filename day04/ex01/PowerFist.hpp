/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 16:55:33 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/20 17:47:52 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_H
# define POWERFIST_H
#include "AWeapon.hpp"

class PowerFist  : public AWeapon 
{
private:
    /* data */
public:
    PowerFist(/* args */);
    PowerFist(PowerFist const &pla);
    PowerFist & operator=(PowerFist const &pla);
    virtual ~PowerFist();
    void attack() const;
};



#endif