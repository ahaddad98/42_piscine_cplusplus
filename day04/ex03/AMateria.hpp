/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 23:46:02 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/19 23:58:37 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H
 
#include <iostream>
#include "ICharacter.hpp"

class ICharacter;
class AMateria
{
protected:
    std::string  _type;
    unsigned int _xp;
    
public:
    AMateria();
    AMateria(std::string const & type);
    AMateria(AMateria const & amat);
    AMateria &operator=(AMateria const & amat);
    virtual ~AMateria();
    std::string const & getType() const;
    unsigned int getXP() const;
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter & target);
};

std::ostream &		operator << ( std::ostream& out, const AMateria & in );

#endif
