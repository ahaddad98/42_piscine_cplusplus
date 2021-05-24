/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 19:31:59 by ahaddad           #+#    #+#             */
/*   Updated: 2021/05/24 21:51:18 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
# define HUMAN_H
# include <iostream>
# include "Brain.hpp"

class Human
{
private:
    Brain const brain;
public:
    Brain const getbrain();
    Human();
    Brain const *identify();
};

#endif