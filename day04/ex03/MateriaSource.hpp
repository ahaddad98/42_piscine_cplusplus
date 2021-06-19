/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 23:53:19 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/20 00:34:30 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H 
# define MATERIASOURCE_H 
# include "IMateriaSource.hpp"


class MateriaSource : public IMateriaSource
{
private:
    AMateria *amater[4];
public:
    MateriaSource(/* args */);
    ~MateriaSource();
    void learnMateria(AMateria *);
    AMateria *createMateria(std::string const &type);
};




#endif