/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 17:24:49 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/27 13:59:58 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


class Intern
{
private:
    /* data */
public:
    Intern(/* args */);
    Intern(Intern const &src);
    Intern &operator=(Intern const &src);
    Form *makeForm(std::string name, std::string target) const ;
    ~Intern();
    class failedform : public std::exception
    {
        virtual const char *what() const throw();
    };
};

typedef Form	*(*forms) (std::string target);

#endif