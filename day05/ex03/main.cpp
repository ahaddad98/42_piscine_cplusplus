/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 00:20:07 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/27 15:59:25 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	try
	{
	
	Bureaucrat person_1("Amine", 1);
	Intern intern;
	Form *form_1 = intern.makeForm("shrubbery creation", "target1");
	std::cout << *form_1;
	Form *form_2 = intern.makeForm("robotomy request", "target2");
	std::cout << *form_2;
	Form *form_3 = intern.makeForm("presidential pardon", "target3");
	std::cout << *form_3;
	Form *form_4 = intern.makeForm("prffesidential pardon", "target3");
	std::cout << *form_4;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}