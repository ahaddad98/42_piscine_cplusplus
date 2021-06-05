/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 19:00:21 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/05 21:23:32 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_H
# define NINJATRAP_H
# include  <iostream>
# include "FragTrap.hpp"
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
private:
    
public:
    NinjaTrap();
    NinjaTrap(const NinjaTrap &f1);
    NinjaTrap(std::string na);
    NinjaTrap &operator=(const NinjaTrap & N);
    ~NinjaTrap();
    void ninjaShoebox(FragTrap const & frag)const ;
    void ninjaShoebox(ClapTrap const & clap)const ;
    void ninjaShoebox(ScavTrap const & scav)const ;
};



#endif