/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 12:39:10 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/27 12:38:59 by ahaddad          ###   ########.fr       */
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
        MyFile <<"               ,@@@@@@@," << std::endl
<< "       ,,,.   ,@@@@@@/@@,  .oo8888o.    " << std::endl
<< "    ,&%%&%&&%,@@@@@/@@@@@@,8888&&8/8o   "<< std::endl
<< "   ,%&&&&&%&&%,@@@&&@@/@@@88&&8888/88'  " << std::endl
<< "   %&&%&%&/%&&%@@&&@/ /@@@88888&&8888'  " << std::endl
<< "   %&&%/ %&%%&&@@\\ V /@@' `88&& `/88'   " << std::endl
<< "   `&%\\ ` /%&'    |.|        \\ '|8'     " << std::endl
<< "       |o|        | |         | |       " << std::endl 
<< "       |.|        | |         | |       " << std::endl
<< " \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_  " << std::endl;
    MyFile.close();
}

