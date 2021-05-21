/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 17:37:15 by ahaddad           #+#    #+#             */
/*   Updated: 2021/05/18 18:13:16 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
# define PONY_H
# include <iostream>

class Pony
{
    private:
        std::string name;
        int age;
        std::string color;

    public:
        Pony(std::string name, int age, std::string color);
};

#endif