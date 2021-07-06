/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 12:42:57 by ahaddad           #+#    #+#             */
/*   Updated: 2021/07/06 20:49:59 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
#include <iostream>
class span
{
private:
    unsigned int n;
public:
    span(/* args */);
    span(span const &src);
    span &operator=(span const &src);
    span(unsigned int _n);
    ~span();
};




#endif