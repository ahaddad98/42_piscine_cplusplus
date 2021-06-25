/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 12:39:52 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/25 17:04:04 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM
# define ROBOTOMY_REQUEST_FORM
# include "Form.hpp"
 
class RobotomyRequestForm : public Form
{
private:
    std::string target;
public:
    RobotomyRequestForm(/* args */);
    RobotomyRequestForm(std::string _target);
    RobotomyRequestForm(RobotomyRequestForm const &src);
    RobotomyRequestForm &operator=(RobotomyRequestForm const &src);
    ~RobotomyRequestForm();
    std::string gettarget();
    void action() const;
    
};
#endif