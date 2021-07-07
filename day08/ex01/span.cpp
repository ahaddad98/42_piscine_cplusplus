/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 12:44:23 by ahaddad           #+#    #+#             */
/*   Updated: 2021/07/07 20:14:45 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(/* args */)
{
    n = 0;
}

Span::Span(unsigned int _n) : n(_n)
{
}

Span::Span(Span const &src)
{
    *this = src;
}

Span &Span::operator=(Span const &src)
{
    n = src.n;
    return *this;
}

Span::~Span()
{
}

void Span::addNumber(int number)
{
    try
    {
        if (vect.size() >= n)
            throw failedtoaddelement();
        vect.push_back(number);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}

const char *Span::failedtoaddelement::what() const throw()
{
    return "failed to add element";
}

int Span::shortestSpan()
{
    int i = 0;
    int small_diff = 0;
    int j;
    if (vect.size() < 2)
        throw failedtoaddelement();
    if (vect[0] > vect[1])
        small_diff = vect[0] - vect[1];
    if (vect[0] < vect[1])
        small_diff = vect[1] - vect[0];
    while (i < (int)vect.size())
    {
        j = i + 1;
        while (j < (int)vect.size())
        {
            if (vect[i] > vect[j])
            {
                if (small_diff > (vect[i] - vect[j]))
                    small_diff = vect[i] - vect[j];
            }
            else if (vect[i] < vect[j])
            {
                if (small_diff > (vect[j] - vect[j]))
                    small_diff = vect[j] - vect[i];
            }
            else
                small_diff = 0;
            j++;
        }
        i++;
    }
    return small_diff;
}

int Span::longestSpan()
{
    int min = *min_element(vect.begin(), vect.end());
    int max = *max_element(vect.begin(), vect.end());
    return (max - min);
}
