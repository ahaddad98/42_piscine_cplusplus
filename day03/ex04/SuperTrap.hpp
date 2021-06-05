/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 13:54:57 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/05 15:09:53 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_H
# define SUPERTRAP_H
# include <iostream>
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "ClapTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public FragTrap , public NinjaTrap
{
private:
    
public:
    SuperTrap();
    SuperTrap(std::string _name);
    SuperTrap(const SuperTrap &s);
    ~SuperTrap();
    SuperTrap &operator=(const SuperTrap &s);
};

#endif