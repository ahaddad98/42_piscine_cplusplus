/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 15:12:53 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/20 14:14:46 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_H
# define PEON_H
#include "Victim.hpp"
#include "iostream"

class Peon : public Victim
{
private:
    // std::string name;
    Peon(/* args */);
public:
    Peon(std::string na);
    std::string getname() const ;
    Peon(const Peon & peo);
    Peon &operator=(const Peon & peo);
    void getPolymorphed() const;
    virtual ~Peon();
};

std::ostream & operator<<(std::ostream & os, Peon const & peo);

#endif

