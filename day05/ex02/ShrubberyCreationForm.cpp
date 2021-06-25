/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 12:39:10 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/25 17:03:35 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target)
    : Form("ShrubberyCreationForm", 145, 137)
{
    target = _target;
    target += "_shrubbery";
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : Form(src), target(src.target)
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src)
{
    (void)src;
    return *this;
}

void ShrubberyCreationForm::action() const 
{
    std::ofstream MyFile(target);
    MyFile << "hhhhhhh chajra";
    MyFile.close();
}

