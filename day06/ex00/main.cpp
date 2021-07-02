/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 11:58:45 by ahaddad           #+#    #+#             */
/*   Updated: 2021/07/02 18:59:54 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <stdexcept>
#include <exception>
#include <string>
#define log std::cout <<
#define line << std::endl

int is_digital(std::string str)
{
    int len = str.length();
    int index = 0;
    int check_is_valide = 0;
    while (index < len)
    {
        if (isdigit(str[index]))
            check_is_valide++;
        index++;
    }
    if (check_is_valide == len)
        return 0;
    return 1;
}

int check_argument(std::string str)
{
    int index = 0;
    int check_is_valide = 0;
    int len = str.length();
    int check_point = 0;
    int check_float = 0;

    while (index < len)
    {
        if (isdigit(str[index]))
            check_is_valide++;
        index++;
    }
    if (check_is_valide == len)
        return 0;
    index = 0;
    check_is_valide = 0;
    if (str == "nan" || str == "nanf" || str == "-inf" || str == "+inf" || str == "-inff" || str == "+inff")
        return 2;
    if (str.length() > 1)
    {
        if (str[0] == '+' || str[0] == '-')
            str = str.substr(1, len - 1);
        if (is_digital(str) == 0)
            return 0;
        while (index < (int)str.length())
        {
            if (!isdigit(str[index]))
                check_is_valide++;
            index++;
        }
        if (check_is_valide > 2)
            return (1);
        else
        {
            check_float = str.find('f');
            check_point = str.find('.');
            if (check_float == -1 || check_point == -1)
                return (1);
        }
    }
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
    double value;

    if (ac != 2)
    {
        std::cout << "Error in parametere" << std::endl;
        return 0;
    }
    std::string str(av[1]);
    if (check_argument(str) == 2)
    {
        std::cout << "char: impossible" << std::endl
                  << "int: impossible" << std::endl
                  << "float: nanf" << std::endl
                  << "double: non" << std::endl;
        return 0;
    }
    if (check_argument(str) == 1)
    {
        log "impossible to cast: " << str line;
        return 0;
    }
    is_point = str.find('.');
    if (is_point != -1)
    {
        while (str[++is_point] && isdigit(str[is_point]))
        {
            ++is_decimale;
        }
    }
    else
        is_decimale = 1;
    std::cout.precision(is_decimale);
    std::cout.setf(std::ios::fixed);
    try
    {
        value = static_cast<double>(std::stod(str));
    }
    catch (std::exception &e)
    {
        if (str.length() == 1)
            value = str[0];
    }
    try
    {
        _char = static_cast<char>(value);
        if (_char > 127)
            std::cout << "char: impossible" << std::endl;
        else if (_char <= 32)
            std::cout << "char: non displayable" << std::endl;
        else
            std::cout << "char: \'" << _char << "\'" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << "char: impossible" << '\n';
    }
    try
    {
        if (value <= 2147483647 && value >= -2147483648)
        {
            _int = static_cast<int>(value);
            std::cout << "int: " << _int << std::endl;
        }
        else
            std::cout << "int: out range" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << "int: impossible" << '\n';
    }
    try
    {
        _float = static_cast<float>(value);
        std::cout << "float: " << _float << "f" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << "float: nanf" << '\n';
    }
    try
    {
        _double = static_cast<double>(value);
        std::cout << "double: " << _double << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << "double: nan" << '\n';
    }
    return 0;
}