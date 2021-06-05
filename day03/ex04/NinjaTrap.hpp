/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 19:00:21 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/05 15:25:49 by ahaddad          ###   ########.fr       */
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
    NinjaTrap(std::string na);
    NinjaTrap &operator=(const NinjaTrap & N);
    ~NinjaTrap();
    void ninjaShoebox(FragTrap const & frag)const ;
    void ninjaShoebox(ClapTrap const & clap)const ;
    void ninjaShoebox(ScavTrap const & scav)const ;
};



#endif