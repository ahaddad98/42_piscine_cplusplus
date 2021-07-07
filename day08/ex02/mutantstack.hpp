/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 12:46:30 by ahaddad           #+#    #+#             */
/*   Updated: 2021/07/07 20:10:53 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <iostream>
#include <iterator>
#include <stack>

template <typename T>

class MutantStack : public std::stack<T>
{
private:

public:
    typedef typename std::stack<T>::container_type::iterator iterator;
    MutantStack(){};
    MutantStack(MutantStack const & src)
    {
        *this = src;
    };
    MutantStack &operator=(MutantStack const & src)
    {
        this->c = src.c;
        return *this;
    };
    ~MutantStack(){};

    void push(T to_add)
    {
        this->c.push_back(to_add);
    }
    iterator begin()
    {
        return this->c.begin();
    }
    iterator end()
    {
        return this->c.end();
    }
};

#endif
