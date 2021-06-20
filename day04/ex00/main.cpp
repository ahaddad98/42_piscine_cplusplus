/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 15:12:46 by ahaddad           #+#    #+#             */
/*   Updated: 2021/06/20 15:38:56 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
# include "Victim.hpp"
# include "Peon.hpp"
# include "Peon_one.hpp"
# include "Peon_two.hpp"

int main()
{
    Sorcerer robert("Robert", "the Magnificent");
    Victim jim("Jimmy");
    Peon joe("Joe");
    Peon_one jack("Jack");
    Peon_two joel("Joel");
    std::cout << robert << jim << joe << jack << joel;
    robert.polymorph(jim);
    robert.polymorph(joe);
    return 0;
}