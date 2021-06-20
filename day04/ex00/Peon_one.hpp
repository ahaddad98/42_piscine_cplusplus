/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon_one.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 15:29:37 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/20 15:32:47 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_ONE_H
# define PEON_ONE_H
#include "Victim.hpp"
#include "iostream"

class Peon_one : public Victim
{
private:
    // std::string name;
    Peon_one(/* args */);
public:
    Peon_one(std::string na);
    std::string getname() const ;
    Peon_one(const Peon_one & peo);
    Peon_one &operator=(const Peon_one & peo);
    void getPolymorphed() const;
    virtual ~Peon_one();
};

std::ostream & operator<<(std::ostream & os, Peon_one const & peo);

#endif

