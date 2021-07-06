/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 12:44:23 by ahaddad           #+#    #+#             */
/*   Updated: 2021/07/07 00:57:16 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

span::span(/* args */)
{
}

span::span(unsigned int _n) : n(_n)
{
}

span::span(span const & src)
{
    *this = src;
}

span &span::operator=(span const & src)
{
    n = src.n;
    return *this;
}

span::~span()
{
}

void	span::addNumber(int number)
{
    if (vect.size() >= n)
        throw failedtoaddelement();
    else
        vect.push_back(number);
}

const char *span::failedtoaddelement::what() const throw()
{
    return "failed to add element"; 
}

int span::shortestSpan()
{
    return *min_element(vect.begin(), vect.end());
}
int span::longestSpan()
{
    int min = *min_element(vect.begin(), vect.end());
    int max = *max_element(vect.begin(), vect.end());
    return (max - min);
}

void span::setvect(std::vector<int> _vect)
{
    vect = _vect;
}