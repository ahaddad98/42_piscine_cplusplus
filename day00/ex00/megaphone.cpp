/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 14:11:30 by ahaddad           #+#    #+#             */
/*   Updated: 2021/05/22 14:44:29 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac , char **av)
{
    int i = 1;
    int j;

    if (ac > 1)
    {
        while (av[i])
        {
            j = 0;
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
            if (i != ac -1)
                std::cout << " ";
            i++;
        }
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << std::endl;
    return 0;
}