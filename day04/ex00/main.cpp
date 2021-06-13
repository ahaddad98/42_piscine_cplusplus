/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 15:12:46 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/07 15:12:47 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
# include "Victim.hpp"
int main()
{
    Sorcerer robert("Robert", "the Magnificent");
    Victim jim("Jimmy");
    // Peon joe("Joe");
    std::cout << robert << jim;
    // robert.polymorph(jim);
    // robert.polymorph(joe);
    return 0;
}