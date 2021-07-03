/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 00:38:48 by ahaddad           #+#    #+#             */
/*   Updated: 2021/07/04 00:19:56 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP
# include <iostream>

template<typename T>
T max(T const &x , T const & y)
{
    return ((x>y) ? x : y);
}

template<typename T>
T min(T const &x , T const & y)
{
    return ((x<y) ? x : y);
}

template<typename T>
void swap(T  &x , T  & y)
{
    T  temp;
    temp = x;
    x = y;
    y = temp;
}

#endif