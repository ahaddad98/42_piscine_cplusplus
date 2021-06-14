/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 15:12:59 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/14 16:19:34 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_H
# define SORCERER_H
# include <iostream>
# include "Victim.hpp"
# include "Peon.hpp"
 
class Sorcerer
{
private:
    std::string name;
    std::string title;
    Sorcerer();
public:
    Sorcerer(std::string na, std::string tit);
    Sorcerer(const Sorcerer &sor);
    std::string getname() const ;
    std::string gettitle() const;
    Sorcerer &operator=(const Sorcerer &sor);
    void polymorph(Victim const & vic) const;
    void polymorph(Peon const & peo) const;
    ~Sorcerer();
};
std::ostream & operator<<(std::ostream & os, Sorcerer const & sor);

#endif