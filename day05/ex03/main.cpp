/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 00:20:07 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/27 00:24:53 by ahaddad          ###   ########.fr       */
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
	Bureaucrat	person_1( "Amine", 1   );
	Intern		intern;
	Form	*form_1 = intern.makeForm("shrubbery creation", "target1");
	Form	*form_2 = intern.makeForm("robotomy request", "target2");
	Form	*form_3 = intern.makeForm("presidential pardon", "target3");
	std::cout << *form_1 ;
	std::cout << *form_2 ;
	std::cout << *form_3 ;
    return (0);
}