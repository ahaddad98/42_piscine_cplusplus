/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 15:13:05 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/07 15:18:08 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_H
# define VICTIM_H

class Victim
{
private:
    /* data */
public:
    Victim(/* args */);
    Victim(const Victim & vic);
    Victim & operator=(const  Victim & vic);
    ~Victim();
};

#endif