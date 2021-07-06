/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 12:42:57 by ahaddad           #+#    #+#             */
/*   Updated: 2021/07/07 00:55:43 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
#include <iostream>
#include <vector>
#include <exception>
#include <algorithm>
class span
{
private:
    std::vector<int> vect;
    unsigned int n;
public:
    span(/* args */);
    span(span const &src);
    span &operator=(span const &src);
    span(unsigned int _n);
    ~span();

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