/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 00:20:07 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/25 17:06:59 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    try
    {
        Bureaucrat sejuani("sejuani",1);
        RobotomyRequestForm a("tcharaye7");
        a.action();
        // Form form1("samir", 2, 20);
        // form1.beSigned(sejuani);
        // std::cout << form1;
        // sejuani.signForm(form1);

    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}