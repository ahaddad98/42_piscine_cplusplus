/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 00:20:09 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/24 16:00:49 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT
#define BUREAUCRAT
#include <iostream>
#include <stdexcept>

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
    ~Bureaucrat();
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &in);

#endif