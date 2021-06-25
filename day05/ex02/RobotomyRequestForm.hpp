/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 12:39:52 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/25 17:27:00 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H
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