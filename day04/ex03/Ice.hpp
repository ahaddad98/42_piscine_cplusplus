/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 23:50:32 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/20 23:48:25 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H
# include "AMateria.hpp"

class Ice : public AMateria
{
private:
    /* data */
public:
    Ice(/* args */);
    virtual ~Ice();
    Ice(Ice const & cur);
    Ice &operator=(Ice const & cur);
    AMateria* clone() const;
    void use(ICharacter & target);
};



#endif