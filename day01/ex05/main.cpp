/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 19:32:02 by ahaddad           #+#    #+#             */
/*   Updated: 2021/05/24 21:48:09 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Human.hpp"

int main()
{
    // Brain brain;
    Human human;

    std::cout << human.identify() << std::endl;
// std::cout << human.getBrain().identify() << std::endl;
    // std::cout << brain.identify() << std::endl;
    // std::cout << human->identify(&brain) << std::endl;
    
}