/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 17:37:23 by ahaddad           #+#    #+#             */
/*   Updated: 2021/05/31 12:08:17 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void ponyOnTheStack()
{
    Pony Pony("jack", 3, "green");
    std::cout << "im form the stack\n";
}

void ponyOnTheHeap()
{
    Pony *pony = new Pony("ray", 2, "brown");
    std::cout << "im form the heap\n";
    delete pony;
}

int main()
{
    ponyOnTheStack();
    ponyOnTheHeap();
    return (0);
}