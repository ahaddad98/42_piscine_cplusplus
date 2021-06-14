/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 16:52:10 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/14 19:52:14 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_H
# define ENEMY_H
# include <iostream>
class Enemy
{
protected:
    int hp;
    std::string type;
public:
    Enemy(/* args */);
    Enemy(const Enemy & en);
    Enemy &operator=(Enemy const en);
    virtual ~Enemy();
    Enemy(int hit_p, std::string const & typ);
    int getHP() const;
    std::string getType() const;
    virtual void takeDamage(int dam);
};

#endif 