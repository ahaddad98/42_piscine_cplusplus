/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 00:20:07 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/27 16:41:07 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    try
    {
        Bureaucrat sejuani("kilua", 1);
        Form *shru = new ShrubberyCreationForm("bob");
        shru->action();
        shru->beSigned(sejuani);
        Form *robo = new RobotomyRequestForm("Gon");
        robo->action();
        robo->beSigned(sejuani);
        Form *pres = new PresidentialPardonForm("hisoka");
        pres->action();
        pres->beSigned(sejuani);
        delete shru;
        delete pres;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}