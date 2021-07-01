/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 16:24:50 by ahaddad           #+#    #+#             */
/*   Updated: 2021/07/01 16:39:39 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(/* args */)
{
    _to_check_value = 10;
}
Data::Data(int val)
{
    _to_check_value = val;
}

Data::~Data()
{
}

Data::Data(Data const &data)
{
    *this = data;
}

Data &Data::operator=(Data const &data)
{
    _to_check_value = data._to_check_value;
    return *this;
}

int Data::gettotcheckvalue() const
{
    return _to_check_value;
}