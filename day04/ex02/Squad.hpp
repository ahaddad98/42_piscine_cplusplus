/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 00:38:22 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/15 21:10:34 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_H
# define SQUAD_H
# include "ISquad.hpp"

typedef struct s_list
{
    ISpaceMarine *ispa;
    s_list *next;
}t_list;

class Squad : public ISquad
{
private:
    t_list *isp;
    int count;
public:
    Squad(/* args */);
    int getCount() const;
    ISpaceMarine *getUnit(int) const;
    int push(ISpaceMarine *);
    ~Squad();
    
};

#endif