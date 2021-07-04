/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 00:55:18 by ahaddad           #+#    #+#             */
/*   Updated: 2021/07/04 23:44:51 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>


template<typename T>

class Array
{
private:
    unsigned int length;
    T *_array;
public:
    Array<T>(/* args */);
    Array<T>(unsigned int _n);
    Array<T>(Array<T> const & T);
    Array<T> &operator=(Array<T> const & T);
    int size() const {
    return length;
    }
    ~Array<T>();
};
template<typename T>
Array<T>::Array() : _array(new T[0]) , length(0)
{
}

template<typename T>
Array<T>::Array(unsigned int _n) : _array( new T(_n)) , length(_n)
{
    int i = 0;
    while (i < length)
    {
        _array[i] = T();
        i++;
    }
}

#endif