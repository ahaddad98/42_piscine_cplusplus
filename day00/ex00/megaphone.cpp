/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 14:11:30 by ahaddad           #+#    #+#             */
/*   Updated: 2021/05/17 14:20:42 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac , char **av)
{
    // std::string s;
    int i = 1;
    int j = 0;
    // getline(std::cin, s);
    while (av[i])
    {
        while (av[i][j])
        {
            if (av[i][j] >= 97 && av[i][j] <= 122)
                av[i][j] = av[i][j] - 32;
            j++;
        }
        i++;
    }
    i = 1;
    while (av[i])
    {
        std::cout << av[i];
        i++;
    }
    std::cout << std::endl;
    return 0;
}