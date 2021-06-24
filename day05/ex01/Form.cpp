/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 16:33:56 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/24 17:48:08 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string _name , int _gra_sign, int _gra_exec) : name(_name), grade_signed(_gra_sign), grade_executer(_gra_exec)
{
    signe = false;
}

Form::~Form()
{
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
std::ostream & operator<<(std::ostream & os , const Form & form)
{
    os << "amine " << form.getname() << std::endl;
    return os;
}