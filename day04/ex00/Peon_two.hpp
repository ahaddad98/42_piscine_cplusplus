/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon_two.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 15:35:05 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/20 15:35:56 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_TWO_H
# define PEON_TWO_H
#include "Victim.hpp"
#include "iostream"

class Peon_two : public Victim
{
private:
    // std::string name;
    Peon_two(/* args */);
public:
    Peon_two(std::string na);
    std::string getname() const ;
    Peon_two(const Peon_two & peo);
    Peon_two &operator=(const Peon_two & peo);
    void getPolymorphed() const;
    virtual ~Peon_two();
};

std::ostream & operator<<(std::ostream & os, Peon_two const & peo);

#endif
