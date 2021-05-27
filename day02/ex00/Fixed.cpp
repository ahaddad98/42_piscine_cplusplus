/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 20:46:48 by ahaddad           #+#    #+#             */
/*   Updated: 2021/05/27 17:07:54 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(int const r) : raw(r)
{
}

Fixed::Fixed(const Fixed& f1)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = f1;
}

Fixed    & Fixed::operator=(const Fixed &f)
{
    std::cout << "Assignation operator called" << std::endl;
    raw = f.getRawBits();
    return *this;
}

void Fixed::setRawBits(int const raw)
{
    this->raw = raw;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return raw;
}

Fixed::Fixed()
{
    raw  = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}
