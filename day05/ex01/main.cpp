/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 00:20:07 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/27 14:53:52 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat bur1("joly", 1);
        Bureaucrat bur2("joly", 3);
        Form form1("amine", 2, 20);
        form1.beSigned(bur1);
        std::cout << form1;
        bur1.signForm(form1);
        form1.beSigned(bur2);
        std::cout << form1;
        bur2.signForm(form1);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}