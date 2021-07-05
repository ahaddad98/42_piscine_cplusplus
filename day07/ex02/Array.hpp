/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 00:55:18 by ahaddad           #+#    #+#             */
/*   Updated: 2021/07/05 16:51:27 by ahaddad          ###   ########.fr       */
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
    int length;
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

    /*****************************constructors**************************************/
    Array<T>(/* args */) : length(0), _array(nullptr)
    {
    }

    Array<T>(unsigned int _n) : length(_n), _array(new T(length))
    {
        int i = 0;
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
        if (this != &array)
        {
            // if (length != array.length)
            // {
            //     if (_array != nullptr)
            //     {
            //         // delete[] _array;
            //         // std::cout << "amine haddad" << std::endl;
            //         length = 0;
            //         _array = nullptr;
            //     }
                _array = new T[array.length];
                int i = 0;
                while (i < array.length)
                {
                    _array[i] = array[i];
                    i++;
                }
            // }
        }
        return *this;
    }
    /***************************operatot [] ******************************************/
    T &operator[](int index)
    {
        if (index < 0 || index > length)
            throw Errorinindex();
        else
            return _array[index];
    }
    T const &operator[](int index) const
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

template <typename T>
std::ostream &operator<<(std::ostream &out, Array<T> const &p)
{
    out << "the size of array is " << p.size() << std::endl;
    return out;
}

#endif