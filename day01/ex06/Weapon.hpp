/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 14:17:18 by ahaddad           #+#    #+#             */
/*   Updated: 2021/05/25 17:32:40 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H
# include <iostream>

class Weapon
{
    private:
        std::string type;

    public:
        void    settype(std::string t);
        std::string const& gettype() const;
        Weapon(std::string type);
        ~Weapon();
};

#endif