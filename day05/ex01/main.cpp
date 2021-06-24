/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 00:20:07 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/24 15:52:38 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat bur("amine", 180);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << '\n';
    }
    // Bureaucrat bur1("amine1", -1);
    // std::cout << bur << std::endl;
    return 0;
}