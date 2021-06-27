/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 16:33:56 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/27 15:34:07 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string _name, const int _gra_sign, const int _gra_exec) : name(_name), grade_signed(_gra_sign), grade_executer(_gra_exec)
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
    : name(form.name), grade_signed(form.grade_signed), grade_executer(form.grade_executer)
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

Form &Form::operator=(Form const &form)
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
bool Form::getsigne() const
{
    return signe;
}
std::ostream &operator<<(std::ostream &os, const Form &form)
{
    os << "the form " << form.getname() << " with his grade " << form.getgrade_signed() << std::endl;
    return os;
}

void Form::beSigned(Bureaucrat const &bur)
{
    if (bur.getgrade() <= grade_signed)
        signe = true;
    else
        throw(GradeTooLowException());
}

const char *Form::GradeTooHighException::what() const throw()
{
    return "GRADE TO HIGH";
}
const char *Form::GradeTooLowException::what() const throw()
{
    return "GRADE TO LOW";
}
const char *Form::UnsignedForm::what() const throw()
{
    return "UnsignedForm";
}

void Form::execute(Bureaucrat const &executor) const
{
    try
    {
        if (executor.getgrade() <= this->getgrade_executer())
        {
            action();
        }
        else
            throw UnsignedForm();
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}