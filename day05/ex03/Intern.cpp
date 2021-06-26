/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 17:25:20 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/27 00:07:01 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Form* shrubberycreatioform(std::string  target) {
	return (Form *)new ShrubberyCreationForm(target);
}

Form* presdentialpardonform(std::string target)
{
    return (Form*)new PresidentialPardonForm(target);
}

Form* Robotomyrequestform(std::string target) {
	return new RobotomyRequestForm(target);
}

Form	*Intern::makeForm(std::string _name, std::string target) const
{
	std::string name[] = {"shrubbery creation", "presidential pardon", "robotomy request"};
    forms _forms[3] = { shrubberycreatioform,presdentialpardonform,Robotomyrequestform};
    int i = 0;
    while (i < 3)
    {
        if (!name[i].compare(_name))
        {
            std::cout << name[i] << " targeted on " << target <<std::endl;
            return _forms[i](target);
            break;
        }
        i++;
    }
    return NULL;
}

Intern::Intern(/* args */)
{
}

Intern::~Intern()
{
}
