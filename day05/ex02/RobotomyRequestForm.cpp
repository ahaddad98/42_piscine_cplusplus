/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 12:41:11 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/25 17:04:35 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string _target)
    : Form(_target, 72, 45), target(_target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : Form(src), target(src.target)
{
}
RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &src)
{
    (void)src;
    return *this;
}
std::string RobotomyRequestForm::gettarget()
{
    return target;
}

void RobotomyRequestForm::action() const
{
    int r = 0;
    srand(time(0));
    r = rand() % 2;
    if (r == 0)
        std::cout << target << "> has been robotomized successfully" << std::endl;
    else    
        std::cout << target << "> has been robotomized failure" << std::endl;
}