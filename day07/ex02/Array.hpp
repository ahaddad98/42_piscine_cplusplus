/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 00:55:18 by ahaddad           #+#    #+#             */
/*   Updated: 2021/07/05 17:59:15 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
#include <exception>

template <typename T>
class Array
{
private:
    unsigned int length;
    T *_array;

public:
    /****************************exception od operator []*****************************/
    class Errorinindex : public std::exception
    {
        virtual const char *what() const throw()
        {
            return "error in index";
        }
    };
    // class Errorinlength : public std::exception
    // {
    //     virtual const char *what() const throw()
    //     {
    //         return "error in length";
    //     }
    // };

    /*****************************constructors**************************************/
    Array<T>(/* args */)
    {
        _array = new T[0];
        length = 0;
    }

    Array<T>(unsigned int _n)
    {
        length = _n;
        _array = new T[length];
        unsigned int i = 0;
        while (i < length)
        {
            _array[i] = 0;
            i++;
        }
    }
    /***************************operator= and copy constructor***********************/
    Array<T>(Array<T> const &array)
    {
        *this = array;
    }
    Array<T> &operator=(Array<T> const &array)
    {
        length = array.length;
        _array = new T[array.length];
        unsigned int i = 0;
        while (i < length)
        {
            _array[i] = array._array[i];
            i++;
        }
        return *this;
    }
    /***************************operatot [] ******************************************/
    T &operator[](unsigned int index)
    {
        if (index < 0 || index >= length)
            throw Errorinindex();
        else
            return _array[index];
    }
    /***************************size to get the size of the array*********************/
    int size() const
    {
        return length;
    }
    /***************************** destrucor *****************************************/
    ~Array<T>()
    {
        delete[] _array;
    }
};

#endif