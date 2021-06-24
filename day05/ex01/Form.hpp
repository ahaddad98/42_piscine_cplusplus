/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 16:32:20 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/24 17:48:00 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H
#include <iostream>
//  using namespace std;
class Form
{
private:
    std::string const name;
    bool signe ;
    int  const grade_signed;
    int  const grade_executer;
public:
    Form(/* args */);
    Form(std::string _name , int _gra_sign, int _gra_exec);
    Form(const Form  & form);
    Form & operator=(const Form & form);
    ~Form();
    int getgrade_signed() const ;
    int getgrade_executer() const ;
    std::string getname() const ;
};

std::ostream & operator<<(std::ostream os , const Form & form);

#endif