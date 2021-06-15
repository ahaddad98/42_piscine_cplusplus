/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 00:38:22 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/15 13:18:45 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_H
# define SQUAD_H
# include "ISquad.hpp"

class Squad : public ISquad
{
private:
    /* data */
public:
    Squad(/* args */);
    ~Squad();
};

#endif