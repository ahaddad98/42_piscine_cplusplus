/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 19:32:02 by ahaddad           #+#    #+#             */
/*   Updated: 2021/05/25 14:02:11 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Human.hpp"

int main()
{
    Human human;

    std::cout << human.identify() << std::endl;
    std::cout << human.getbrain().identify() << std::endl;
}