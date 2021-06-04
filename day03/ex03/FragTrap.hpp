/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 13:46:33 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/04 17:10:34 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
    void attack1(std::string target);
    void attack2(std::string target);
    void attack3(std::string target);
    void attack4(std::string target);
    void attack5(std::string target);

public:
    FragTrap();
    ~FragTrap();
    FragTrap(std::string name);
    FragTrap(const FragTrap &f1);
    FragTrap &operator=(const FragTrap &f);
    void vaulthunter_dot_exe(std::string const &target);
    void affich();
};

#endif