/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 19:31:49 by ahaddad           #+#    #+#             */
/*   Updated: 2021/05/25 13:58:09 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <sstream>
Brain::Brain()
{
}

std::string   Brain::identify() const
{
    std::stringstream str;
    std::string adrss;
    str << this;
    str >> adrss;
    return adrss;
}
