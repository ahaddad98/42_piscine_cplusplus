/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 12:40:29 by ahaddad           #+#    #+#             */
/*   Updated: 2021/07/07 20:16:28 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int main()
{
    std::vector<int> v(5);
    int i = 0;
    while (i < (int)v.size())
    {
        v[i] = i+1;
        i++;
    }
    if (easyfind(v, 0) == 0)
    {
        std::cout << "element found" << std::endl;
    }
    else
        std::cout << "element not found" << std::endl;
    return 0;
}