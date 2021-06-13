/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 15:12:59 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/07 15:17:22 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_H
# define SORCERER_H
# include <iostream>
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
    ~Sorcerer();
};
std::ostream &  operator<<(std::ostream & o, Sorcerer const & sor);

#endif