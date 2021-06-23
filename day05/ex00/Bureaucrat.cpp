/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 00:20:12 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/23 16:17:38 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(/* args */)
{
}
Bureaucrat::Bureaucrat(std::string _name, int _grade) : name(_name), grade(_grade)
{
    try
    {
        if (grade < 0)
            throw (grade);
    }
    catch(int garde)
    {
        std::cout << "error in value of " << grade << '\n';
    }
    
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(Bureaucrat const & bureauc)
{
    name= bureauc.name;
    grade= bureauc.grade;
}
Bureaucrat &Bureaucrat::operator=(Bureaucrat const & bureauc)
{
    name= bureauc.name;
    grade= bureauc.grade;
    return *this;
}

std::string Bureaucrat::getname() const
{
    return name;
}

int Bureaucrat::getgrade()const
{
    return grade;
}

void  Bureaucrat::GradeTooLowException()
{
    
}
void  Bureaucrat::GradeTooHighException()
{
    
}

std::ostream & operator  << (std::ostream & os, const Bureaucrat & bur)
{
    os << bur.getname() << ", bureaucrat grade " << bur.getgrade() << "." << std::endl;
    return os;
}