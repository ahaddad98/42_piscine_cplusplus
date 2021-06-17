/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 23:49:45 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/17 22:32:43 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H
# include "AMateria.hpp"


class Cure : public AMateria
{
private:
    /* data */
public:
    Cure(/* args */);
    Cure(Cure const & cur);
    Cure &operator=(Cure const & cur);
    ~Cure();
    AMateria* clone() const;
    void use(ICharacter & target);
};

#endif