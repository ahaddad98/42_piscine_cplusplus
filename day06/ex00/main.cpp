/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 11:58:45 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/30 13:43:40 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <stdexcept>

int             check_argument(std::string str)
{
    int len;
    len = str.length();
    return (0);
}

int main(int ac, char **av)
{
    char _char;
    int _int;
    float _float;
    double _double;
    int is_point = 0;
    int is_decimale = 0;
    int i = 0;
    
    if (ac != 2)
    {
        std::cout << "Error in parametere" << std::endl;
        return 0;
    }
    std::string str(av[1]);
    is_point = str.find('.');
    if (is_point != -1)
    {
        while (str[i] && isdigit(str[i]))
        {
            is_decimale++;
            i++;
        }
    }
    else
        is_decimale = 1;
    std::cout.precision(is_decimale);
    std::cout.setf(std::ios::fixed);
    try
    {
        _char = static_cast<char>(std::stoi(str));
        if (_char <= 32)
            std::cout << "char: non displayable" << std::endl;
        else
            std::cout << "char: \'" << _char << "\'" << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "char: impossible" << '\n';
    }
    try
    {
        _int = static_cast<int>(std::stoi(str));
        std::cout << "int: " << _int << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "int: impossible" << '\n';
    }
    try
    {
        _float = static_cast<float>(std::stof(str));
        std::cout << "float: " << _float << "f" << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "float: nanf" << '\n';
    }
    try
    {
        _double = static_cast<double>(std::stod(str));
        std::cout << "double: " << _double << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "double: nan" << '\n';
    }
    return 0;
}