/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 12:37:01 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/26 23:55:15 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H
#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
private:
    std::string target;

public:
    ShrubberyCreationForm(/* args */);
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(ShrubberyCreationForm const & src);
    ShrubberyCreationForm &operator=(ShrubberyCreationForm const &src);
    ~ShrubberyCreationForm();
    void action() const;
};

#endif
