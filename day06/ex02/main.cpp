/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 16:41:55 by ahaddad           #+#    #+#             */
/*   Updated: 2021/07/02 13:12:24 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Base.hpp"

Base *generate(void)
{
    srand(time(0));
    int r = rand() % 3;
    if (r == 0)
        return new A;
    if (r == 1)
        return new B;
    if (r == 2)
        return new C;
    return NULL;
}

void identify(Base *p)
{
    A *_a = dynamic_cast<A *>(p);
    if (_a != NULL)
    {
        std::cout << "A" << std::endl;
        return;
    }
    B *_b = dynamic_cast<B *>(p);
    if (_b != NULL)
    {
        std::cout << "B" << std::endl;
        return;
    }
    C *_c = dynamic_cast<C *>(p);
    if (_c != NULL)
    {
        std::cout << "C" << std::endl;
        return;
    }
    std::cout << "Not A not B and not C" << std::endl;
}

void identify(Base &p)
{
    try
    {
        A &_a = dynamic_cast<A &>(p);
        std::cout << "A" << std::endl;
        ;
    }
    catch (std::bad_cast &e)
    {
        std::cerr << e.what() << std::endl;
        ;
    }
    try
    {
        B &_b = dynamic_cast<B &>(p);
        std::cout << "B" << std::endl;
        ;
    }
    catch (std::bad_cast &e)
    {
        std::cerr << e.what() << std::endl;
        ;
    }
    try
    {
        C &_c = dynamic_cast<C &>(p);
        std::cout << "C" << std::endl;
        ;
    }
    catch (std::bad_cast &e)
    {
        std::cerr << e.what() << std::endl;
        ;
    }
}

int main()
{
    return 0;
}