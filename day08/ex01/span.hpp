/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 12:42:57 by ahaddad           #+#    #+#             */
/*   Updated: 2021/07/07 12:31:49 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Span_HPP
# define Span_HPP
#include <iostream>
#include <vector>
#include <exception>
#include <algorithm>
class Span
{
private:
    std::vector<int> vect;
    unsigned int n;
public:
    Span(/* args */);
    Span(Span const &src);
    Span &operator=(Span const &src);
    Span(unsigned int _n);
    ~Span();

    void	addNumber(int number);

    class failedtoaddelement : public std::exception
    {
        virtual const char *what() const throw();
    };
    void setvect(std::vector<int> _vect);
    int shortestSpan();
    int longestSpan();
    
};

#endif