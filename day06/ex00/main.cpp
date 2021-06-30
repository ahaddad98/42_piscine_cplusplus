/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 11:58:45 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/30 11:21:06 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Error in parametere" << std::endl;
        return 0;
    }
    std::string str(av[1]);
    int is_point = 0;
    is_point = str.find('.');
    // std::cout << is_point << std::endl;
    int is_decimale = 0;
    int i  = 0;
    if (is_point != -1)
    {
        while (str[i] && isdigit(str[i]))
        {
            i++;
            is_decimale++;
        }
    }
    char _char;
    // int _int;
    // float _float;
    // double _double;
    try
    {
        _char = static_cast<char>(std::stoi(str));
        std::cout << "cast to char :" << _char << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}