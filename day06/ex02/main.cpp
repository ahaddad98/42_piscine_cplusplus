/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 16:41:55 by ahaddad           #+#    #+#             */
/*   Updated: 2021/07/02 14:49:15 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Base.hpp"

Base *generate(void)
{
    srand(time(0));
    int r = rand() % 3;
    if (r == 0)
    {
        std::cout << "A" << std::endl;
        return new A;
    }
    if (r == 1)
    {
        std::cout << "B" << std::endl;
        return new B;
    }
    if (r == 2)
    {
        std::cout << "C" << std::endl;
        return new C;
    }
    return NULL;
}

void identify(Base *p)
{
    A *_a;
    _a = dynamic_cast<A *>(p);
    if (_a != NULL)
    {
        std::cout << "A" << std::endl;
        return;
    }
    B *_b;
    _b = dynamic_cast<B *>(p);
    if (_b != NULL)
    {
        std::cout << "B" << std::endl;
        return;
    }
    C *_c;
    _c = dynamic_cast<C *>(p);
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
        (void)_a;
        std::cout << "A" << std::endl;
    }
    catch (std::bad_cast &e)
    {
        (void)e;
    }
    try
    {
        B &_b = dynamic_cast<B &>(p);
        (void)_b;
        std::cout << "B" << std::endl;
    }
    catch (std::bad_cast &e)
    {
        (void)e;
    }
    try
    {
        C &_c = dynamic_cast<C &>(p);
        (void)_c;
        std::cout << "C" << std::endl;
    }
    catch (std::bad_cast &e)
    {
        (void)e;
    }
}

int main()
{
    std::cout << "/**************** Random instanciate ************************/" << std::endl;
    Base *base = generate();
    std::cout << "/***************** identifypointer **************************/" << std::endl;
    identify(base);
    std::cout << "/***************** identify Referende ***********************/" << std::endl;
    identify(*base);
    return 0;
}