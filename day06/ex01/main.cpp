/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 19:25:30 by ahaddad           #+#    #+#             */
/*   Updated: 2021/07/01 16:37:07 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{   
    return  reinterpret_cast<uintptr_t>(ptr);
}
Data* deserialize(uintptr_t raw)
{
    return  reinterpret_cast<Data*>(raw);
}

int main()
{
    Data *data = new Data(10);
    uintptr_t _data;
    _data = serialize(data);
    std::cout << data->gettotcheckvalue() << std::endl;
    data = deserialize(_data);
    std::cout << data->gettotcheckvalue() << std::endl;
    delete data;
    return 0;
}