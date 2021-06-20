/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 00:47:40 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/20 23:32:43 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(/* args */)
{
    isp = NULL;
    count = 0;
}

Squad::~Squad()
{
    t_list *tmp;
    t_list *ispa;
    
    ispa = isp;
    while (ispa)
    {
        tmp = ispa;
        ispa = ispa->next;
        delete  tmp->ispa;
        delete tmp;
    }
    isp = NULL;
}

int Squad::getCount() const
{
    return count;
}


Squad::Squad(Squad const &squad)
{
    this->count = squad.count;
    t_list *tmp;
    t_list *ispa;
    
    ispa = isp;
    while (ispa)
    {
        tmp = ispa;
        ispa = ispa->next;
        delete  tmp->ispa;
        delete tmp;
    }
    isp = NULL;
    if (squad.isp == NULL)
		isp = NULL;
    else 
    {
		ispa = squad.isp;
		while (ispa)
        {
			this->push(ispa->ispa->clone());
			ispa = ispa->next;
		}
	}
}
Squad &Squad::operator=(Squad const &squad)
{
    this->count = squad.count;
    t_list *tmp;
    t_list *ispa;
    
    ispa = isp;
    while (ispa)
    {
        tmp = ispa;
        ispa = ispa->next;
        delete  tmp->ispa;
        delete tmp;
    }
    isp = NULL;
    if (squad.isp == NULL)
		isp = NULL;
    else 
    {
		ispa = squad.isp;
		while (ispa)
        {
			this->push(ispa->ispa->clone());
			ispa = ispa->next;
		}
	}
    return *this;
}


ISpaceMarine *Squad::getUnit(int N) const
{
    if (!isp)
        return NULL;
    t_list *tmp;
    int i = 0;
    tmp = isp;
    while (tmp && i < count)
    {
        if (i == N)
            return (tmp->ispa);
        tmp = tmp->next;
        i++;
    }
    return NULL;
}
int Squad::push(ISpaceMarine *ispac)
{
    t_list *newUnit = new t_list;
    t_list *tmp = isp;
    

    newUnit->ispa = ispac;
    newUnit->next = NULL;
    if (isp)
    {
        tmp = isp;
        while (tmp && tmp->next)
            tmp = tmp->next;
        tmp->next = newUnit;
    }
    else
    {
        isp = newUnit;
    }
    return ++count;
}