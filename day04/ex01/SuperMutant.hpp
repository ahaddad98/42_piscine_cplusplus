/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 16:58:24 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/14 16:58:53 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_H
# define SUPERMUTANT_H
# include "Enemy.hpp"
class SuperMutant : public Enemy
{
private:
    /* data */
public:
    SuperMutant(/* args */);
    SuperMutant(const SuperMutant & super);
    SuperMutant &operator=(const SuperMutant & super);
    ~SuperMutant();

    void takeDamage(int dam);
};

#endif