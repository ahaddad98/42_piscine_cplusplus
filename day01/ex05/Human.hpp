/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 19:31:59 by ahaddad           #+#    #+#             */
/*   Updated: 2021/05/25 14:03:55 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
# define HUMAN_H
# include <iostream>
# include "Brain.hpp"
# include <sstream>

class Human
{
private:
    Brain const brain;
public:
    Brain const &getbrain() const;
    std::string identify() const;
};

#endif