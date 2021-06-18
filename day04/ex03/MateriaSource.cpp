/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 23:53:53 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/18 15:57:45 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(/* args */)
{
}

MateriaSource::~MateriaSource()
{
}
void MateriaSource::learnMateria(AMateria *m)
{
    (void)m;
}
AMateria *MateriaSource::createMateria(std::string const &type)
{
    (void)type;
    return NULL;
}