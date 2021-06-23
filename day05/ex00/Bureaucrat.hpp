/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 00:20:09 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/23 14:55:38 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT
# define BUREAUCRAT
# include <iostream>
class Bureaucrat
{
private:
    std::string name;
    int grade;
    Bureaucrat(/* args */);
public:
    Bureaucrat(Bureaucrat const & bureauc);
    Bureaucrat &operator=(Bureaucrat const & bureauc);
    Bureaucrat(std::string _name, int _grade);
    std::string getname() const ;
    int getgrade() const ;
    void  GradeTooLowException();
    void  GradeTooHighException();
    ~Bureaucrat();
};

std::ostream & operator  << (std::ostream  os, const Bureaucrat & bur);

#endif