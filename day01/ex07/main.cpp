/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 20:44:16 by ahaddad           #+#    #+#             */
/*   Updated: 2021/05/25 21:47:38 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
int main(int ac, char **av)
{
    std::string str;
    std::ofstream Myfile("amine.txt");
    Myfile << "lah ysahel 3lina";
    Myfile.close();
    // std::ifstream Myfile("amine.txt");
    // while (std::getline(Myfile, str))
    //     std::cout << str;
    Myfile.close();
    return (0);
}