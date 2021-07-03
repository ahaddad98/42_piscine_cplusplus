/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 00:30:53 by ahaddad           #+#    #+#             */
/*   Updated: 2021/07/04 00:39:55 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template<typename T>
void iter(T *array, int  length_array, void (*func)(T const &arr))
{
    int i = 0;
    while (i < length_array)
    {
        func(array[i]);
        i++;
    }
}

#endif