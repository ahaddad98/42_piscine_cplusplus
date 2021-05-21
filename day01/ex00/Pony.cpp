/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 17:37:00 by ahaddad           #+#    #+#             */
/*   Updated: 2021/05/18 18:22:37 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name, int age, std::string color)
{
    this->name = name;
    this->age = age;
    this->color = color;
    std::cout << this->name << std::endl;
    std::cout << this->age << std::endl;
    std::cout << this->color << std::endl;
}
