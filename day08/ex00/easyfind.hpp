/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 12:39:58 by ahaddad           #+#    #+#             */
/*   Updated: 2021/07/06 20:08:24 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
#include <iostream>
#include <algorithm>

template<typename T>
int easyfind(T container, int to_find)
{
    if (std::find(container.begin() , container.end() , to_find) ==  container.end())
        return 1;
    return 0;
}

#endif