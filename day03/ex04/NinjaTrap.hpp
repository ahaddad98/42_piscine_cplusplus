/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 19:00:21 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/10 14:59:48 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_H
# define NINJATRAP_H
# include  <iostream>
# include "FragTrap.hpp"
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
private:
    
public:
    NinjaTrap();
    NinjaTrap(const NinjaTrap &N);
    NinjaTrap(std::string na);
    NinjaTrap &operator=(const NinjaTrap & N);
    ~NinjaTrap();
    void rangedAttack(std::string const &target);
    void meleeAttack(std::string const &target);
    void ninjaShoebox(FragTrap const & frag)const ;
    void ninjaShoebox(ClapTrap const & clap)const ;
    void ninjaShoebox(ScavTrap const & scav)const ;
    void ninjaShoebox(NinjaTrap const & scav)const ;
};



#endif