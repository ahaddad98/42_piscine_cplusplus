/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 14:17:02 by ahaddad           #+#    #+#             */
/*   Updated: 2021/05/25 17:58:50 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H
# include <iostream>
# include "Weapon.hpp"
class HumanA
{
private:
    std::string name;
    std::string type;
    Weapon& weapon;
public:
    void attack();
    HumanA(std::string nm, Weapon& w);
    ~HumanA();
};

#endif