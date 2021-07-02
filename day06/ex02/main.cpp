/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 16:41:55 by ahaddad           #+#    #+#             */
/*   Updated: 2021/07/02 13:48:29 by ahaddad          ###   ########.fr       */
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

void identify_pointer(Base *p)
{
    A *_a;
    _a= dynamic_cast<A *>(p);
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

void identify_refernce(Base &p)
{
    try
    {
        A &_a = dynamic_cast<A &>(p);
        (void)_a;
        std::cout << "A" << std::endl;
    }
    catch (std::bad_cast &e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        B &_b = dynamic_cast<B &>(p);
        (void)_b;
        std::cout << "B" << std::endl;
    }
    catch (std::bad_cast &e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        C &_c = dynamic_cast<C &>(p);
        (void)_c;
        std::cout << "C" << std::endl;
    }
    catch (std::bad_cast &e)
    {
        std::cerr << e.what() << std::endl;
    }
}

int main()
{
    std::cout << "/**************** Random instanciate ************************/" << std::endl;
    std::cout << generate() << std::endl;
   std::cout << "/***************** identifypointer **************************/" << std::endl;
    identify_pointer(new A);
    identify_pointer(new B);
    identify_pointer(new C);
    std::cout << "/***************** identify Referende ***********************/" << std::endl;
    identify_refernce(*(new A));
    identify_refernce(*(new B));
    identify_refernce(*(new C));
    return 0;
}