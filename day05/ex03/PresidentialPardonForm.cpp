/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 12:42:24 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/25 17:05:07 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string _target)
    : Form("PresidentialPardonForm", 25, 5), target(_target)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src)
    : Form(src), target(src.target)
{
}

std::string PresidentialPardonForm::gettarget()
{
    return target;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &src)
{
    (void)src;
    return *this;
}

void PresidentialPardonForm::action() const
{
    std::cout << target << " has been pardoned by Zafod Beeblebrox" <<std::endl;
}