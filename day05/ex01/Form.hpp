/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 16:32:20 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/25 00:29:33 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H
# include <iostream>
# include "Bureaucrat.hpp"
# include <stdexcept>

class Bureaucrat;

class Form
{
private:
    const std::string name;
    const int  grade_signed;
    const int  grade_executer;
    bool signe;
public:
    Form(/* args */);
    Form(std::string _name , const int _gra_sign,const  int _gra_exec);
    Form(const Form  &form);
    Form & operator=(Form const &form);
    ~Form();
    int getgrade_signed() const ;
    int getgrade_executer() const ;
    std::string getname() const ;
    void beSigned(Bureaucrat const & bur);
    class GradeTooHighException :  public std::exception 
    {
        virtual const char *what() const throw();
    };
    class GradeTooLowException :  public std::exception 
    {
        virtual const char *what() const throw();
    };
};

std::ostream & operator<<(std::ostream os , const Form & form);

#endif