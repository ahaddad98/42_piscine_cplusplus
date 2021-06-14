/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 16:51:12 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/14 16:51:54 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CHARACTER_H
# define CHARACTER_H
# include "AWeapon.hpp"
# include "Enemy.hpp"
class Character
{
private:
    std::string _name;
    int ap;
    AWeapon *weapon;
public:
    Character(/* args */);
    Character(const Character &cha);
    Character &operator=(const Character &cha);
    Character(std::string const & name);
    ~Character();
    void recoverAP();
    void equip(AWeapon *weapon);
    void attack(Enemy *enemy);
    std::string  getName() const;
    AWeapon  *getweapon() const;
    int  getap() const;
};

std::ostream		&operator<<(std::ostream &os, Character const &rhs);

#endif

