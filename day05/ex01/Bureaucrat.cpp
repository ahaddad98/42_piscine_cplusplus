/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 00:20:12 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/25 12:27:05 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(/* args */)
{
}

Bureaucrat::Bureaucrat(std::string _name, int _grade) : name(_name), grade(_grade)
{   
    if (grade < 1 || grade > 150) 
        throw (GradeTooHighException());
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(Bureaucrat const & bureauc)
{
    name= bureauc.name;
    grade= bureauc.grade;
    if (grade < 1 || grade > 150) 
        throw (GradeTooHighException());
    
}
Bureaucrat &Bureaucrat::operator=(Bureaucrat const & bureauc)
{
    name= bureauc.name;
    grade= bureauc.grade;
    if (grade < 1 || grade > 150) 
        throw (GradeTooHighException());
    return *this;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
        return "GRADE TOO HIGH";
}
const char *Bureaucrat::GradeTooLowException::what() const throw()
{
        return "GRADE TOO LOW";
}

std::string Bureaucrat::getname() const
{
    return name;
}

int Bureaucrat::getgrade()const
{
    return grade;
}

void  Bureaucrat::decr()
{
    grade+=1;
    if (grade < 1 || grade > 150) 
        throw (GradeTooLowException());
}
void  Bureaucrat::incr()
{
    grade-=1;
    if (getgrade() < 1 || getgrade() > 150) 
        throw (GradeTooHighException());
}

void	Bureaucrat::signForm (Form & form)
{
    if (form.getsigne() == true)
    {
        std::cout << this->getname() << " signs " << form.getname() << std::endl;
    }
    else
    {
        std::cout <<  this->getname() << " cant sign " << form.getname() << " because grade too low" << std::endl; 
    }
}

std::ostream &		operator << ( std::ostream& out, const Bureaucrat & in )
{
    out << in.getname() << ", bureaucrat grade " << in.getgrade() << "." << std::endl;
    return out;
}
