/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 00:20:09 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/25 17:27:28 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
#include <iostream>
#include <stdexcept>
#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
    std::string name;
    int grade;
    Bureaucrat(/* args */);

public:
    Bureaucrat(Bureaucrat const &bureauc);
    Bureaucrat &operator=(Bureaucrat const &bureauc);
    Bureaucrat(std::string _name, int _grade);
    class GradeTooHighException : public std::exception
    {
        virtual const char *what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        virtual const char *what() const throw();
    };
    std::string getname() const;
    int getgrade() const;
    void incr();
    void decr();
    void	signForm (Form & form); 
    ~Bureaucrat();
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &in);

#endif