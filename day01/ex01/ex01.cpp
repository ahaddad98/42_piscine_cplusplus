/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 18:56:28 by ahaddad           #+#    #+#             */
/*   Updated: 2021/05/21 20:05:47 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"

void        memoryleak()
{
    std::string* panthere = new std::string("String panthere");
    std::cout << *panthere << std::endl;
    delete panthere;
}

int main()
{
    memoryleak();
    return (0);
}