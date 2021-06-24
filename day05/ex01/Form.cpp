/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 16:33:56 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/25 00:16:15 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string _name,const int _gra_sign,const int _gra_exec) : name(_name), grade_signed(_gra_sign), grade_executer(_gra_exec)
{
    if (grade_signed < 1)
        throw(GradeTooHighException());
    if (grade_signed > 150)
        throw(GradeTooLowException());
    if (grade_executer < 1)
        throw(GradeTooHighException());
    if (grade_executer > 150)
        throw(GradeTooLowException());
    signe = false;
}

Form::~Form()
{
}

Form::Form(const Form &form)
 : name(form.name) , grade_signed(form.grade_signed), grade_executer(form.grade_executer)
{
    signe = form.signe;
    if (grade_signed < 1)
        throw(GradeTooHighException());
    if (grade_signed > 150)
        throw(GradeTooLowException());
    if (grade_executer < 1)
        throw(GradeTooHighException());
    if (grade_executer > 150)
        throw(GradeTooLowException());
}

Form &Form::operator=(Form const & form)
{
    signe = form.signe;
    if (grade_signed < 1)
        throw(GradeTooHighException());
    if (grade_signed > 150)
        throw(GradeTooLowException());
    if (grade_executer < 1)
        throw(GradeTooHighException());
    if (grade_executer > 150)
        throw(GradeTooLowException());
    return *this;
}

int Form::getgrade_signed() const
{
    return grade_signed;
}
int Form::getgrade_executer() const
{
    return grade_executer;
}
std::string Form::getname() const
{
    return name;
}
std::ostream &operator<<(std::ostream &os, const Form &form)
{
    os << "amine " << form.getname() << std::endl;
    return os;
}

void Form::beSigned(Bureaucrat const & bur)
{
    if (bur.getgrade() >= grade_signed)
    {
        signe = true;
    }
    else
    {
        signe = false;
    }
}

const char *Form::GradeTooHighException::what() const throw()
{
    return "GRADE TO HIGH";
}
const char *Form::GradeTooLowException::what() const throw()
{
    return "GRADE TO LOW";
}