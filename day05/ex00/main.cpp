/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 00:20:07 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/27 14:28:24 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat bur("amine", 10);
        std::cout << bur;
        bur.incr();
        std::cout << bur;
        bur.decr();
        std::cout << bur;
        Bureaucrat bur1("ya9tina", 150);
        std::cout << bur1;
        bur1.decr();
        std::cout << bur1;
        bur1.incr();
        std::cout << bur1;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << '\n';
    }
    return 0;
}