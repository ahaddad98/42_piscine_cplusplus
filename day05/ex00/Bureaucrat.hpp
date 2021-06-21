/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 00:20:09 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/22 00:41:49 by ahaddad          ###   ########.fr       */
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
public:
    Bureaucrat(/* args */);
    Bureaucrat(Bureaucrat const & bureauc);
    Bureaucrat &operator=(Bureaucrat const & bureauc);
    Bureaucrat(std::string _name, int _grade);
    ~Bureaucrat();
};

#endif