/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 16:41:55 by ahaddad           #+#    #+#             */
/*   Updated: 2021/07/01 18:52:58 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
# include "Base.hpp"

Base * generate(void)
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

// void identify(Base* p)
// {
    
// }

// void identify(Base& p)
// {
    
// }

int main()
{
    Base *b = NULL;
    b = generate();
    std::cout << "amine haddad" << std::endl;
    return 0;
}