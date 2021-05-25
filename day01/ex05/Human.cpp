/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 19:31:56 by ahaddad           #+#    #+#             */
/*   Updated: 2021/05/25 14:02:14 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include <sstream>

Brain const& Human::getbrain() const
{
    return brain;
}

std::string   Human::identify() const
{
    return brain.identify();
}
