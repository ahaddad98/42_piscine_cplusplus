// /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 20:44:16 by ahaddad           #+#    #+#             */
/*   Updated: 2021/05/26 12:05:41 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

void findandreplace(std::string & str, std::string to_search, std::string to_replace)
{
    size_t pos = str.find(to_search);
    while(pos != std::string::npos)
    {
        str.replace(pos, to_search.size(), to_replace);
        pos =str.find(to_search, pos + to_replace.size());
    }
}

int main(int ac, char **av)
{
    std::string str;
    if (ac == 4)
    {
        std::string str1 = av[2];
        std::string str2 = av[3];
        std::string str0 = av[1];
        int i = 0;
        std::ifstream Myfile("FILENAME.replace");
        str0 = av[1];
        str0 += ".replace";
        std::ofstream newfile(str0);
        while (std::getline(Myfile, str))
        {
            findandreplace(str, str1, str2);
            newfile << str;
            newfile << std::endl;
            i++;
        }
        newfile.close();
        Myfile.close();
    }
    else
        std::cout << "Error in argument" << std::endl;
    return (0);
}