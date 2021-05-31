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

Fixed::Fixed(int r)
{
    this->raw = r << this->bits;
	std::cout << "Int Constructor called" << std::endl;
}

Fixed::Fixed(float fl)
{
    this->raw = (int)roundf(fl * (1 << this->bits));
	std::cout << "Float Constructor called" << std::endl;
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

int				Fixed::toInt(void) const
{
	return (this->raw >> this->bits);
}

float			Fixed::toFloat(void) const
{
	return (((float)this->raw) / (1 << this->bits));
}

std::ostream	&operator<<(std::ostream &os, Fixed const &fixed)
{
	os << fixed.toFloat();
	return (os);
}
