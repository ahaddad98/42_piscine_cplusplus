/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 18:16:18 by ahaddad           #+#    #+#             */
/*   Updated: 2021/05/24 18:52:14 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void    cout_with_ptr(std::string *str)
{
    std::cout << *str << std::endl;
}

void    cout_with_ref(std::string &str)
{
    std::cout << str << std::endl;
}

int main()
{
    std::string str = "HI THIS IS BRAIN";
    cout_with_ptr(&str);
    cout_with_ref(str);
}