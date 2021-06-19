/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 23:53:53 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/20 00:40:28 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(/* args */)
{
    for (int i = 0; i < 4; ++i)
		amater[i] = NULL;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; ++i)
		if (amater[i] != NULL)
			delete (amater[i]);
}
void MateriaSource::learnMateria(AMateria *m)
{
    if (!m)
		return ;

	for (int i = 0; i < 4; ++i) {

		if (amater[i] == NULL) {
			amater[i] = m;
			break ;
		}
	}
}
AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; ++i) {

		if (amater[i] != NULL)
			if (amater[i]->getType() == type)
				return (amater[i]->clone());
	}
	return (0);
}