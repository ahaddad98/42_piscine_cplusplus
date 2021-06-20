/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 16:57:05 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/20 17:48:58 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_H
# define RADSCORPION_H
# include "Enemy.hpp"
 
class RadScorpion : public Enemy
{
private:
    /* data */
public:
    RadScorpion(/* args */);
    RadScorpion(const RadScorpion & rad);
    RadScorpion &operator=(const RadScorpion & rad);
    ~RadScorpion();
};

#endif