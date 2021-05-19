/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 11:35:29 by ahaddad           #+#    #+#             */
/*   Updated: 2021/05/15 12:15:17 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"
#include <iomanip>

void Phonebook::init_args(Phonebook *ph_book)
{
    std::cin.ignore();
    std::cout << "First name " << std::endl;
    getline(std::cin, ph_book->first_name);
    std::cout << "Last name \n";
    getline(std::cin, ph_book->last_name);
    std::cout << "Nickname \n";
    getline(std::cin, ph_book->nickname);
    std::cout << "Login \n";
    getline(std::cin, ph_book->login);
    std::cout << "Email adress \n";
    getline(std::cin, ph_book->email_adress);
    std::cout << "Favorite meal \n";
    getline(std::cin, ph_book->favorite_meal);
    std::cout << "Underwear color\n";
    getline(std::cin, ph_book->underwear_color);
    std::cout << "Darkest scret\n";
    getline(std::cin, ph_book->darkest_secret);
    std::cout << "Postal adress\n";
    getline(std::cin, ph_book->postal_adress);
    std::cout << "Phone number\n";
    getline(std::cin, ph_book->phone_number);
    std::cout << "Birthday date\n";
    getline(std::cin, ph_book->birthday_date);
}

int which_action(std::string action1)
{
    int check = 0;
    std::cin >> action1;
    if (action1.compare("ADD") == 0)
        check = 1;
    if (action1.compare("SEARCH") == 0)
        check = 2;
    if (action1.compare("EXIT") == 0)
    {
        check = 3;
        // std::cout << "amine haddad\n";
    }
    return (check);
}

void print(std::string str)
{
    int i = 0;
    int size = 0;
    size = str.size();
    if (size > 9)
    {
        // std::cout << std::setw(10);
        while (i < 9)
        {
            std::cout << str[i];
            i++;
        }
        std::cout << ".";
    }
    else
    {
        std::cout << std::setw(10);
        std::cout << str;
    }
}

void Phonebook::search(Phonebook *ph_book, int i)
{
    int j = 0;
    std::string index;
    int k = -1;
    if (i == 0)
        std::cout << "Data not found" << std::endl;
    while (j < i)
    {
        std::cout << std::setw(10);
        std::cout << j + 1 << "|";
        print(ph_book[j].first_name);
        std::cout << "|";
        print(ph_book[j].last_name);
        std::cout << "|";
        print(ph_book[j].nickname);
        std::cout << std::endl;
        j++;
    }
    if (i != 0)
    {
        std::cin >> index;
        if (index.length() == 1)
        {
            if (isdigit(index[0]))
            {
                k = std::stoi(index);
                if (k > 0 && k < (i + 1))
                {
                    std::cout << "First name       : " << ph_book[k - 1].last_name << "\n";
                    std::cout << "Last name        : " << ph_book[k - 1].nickname << "\n";
                    std::cout << "Nickname         : " << ph_book[k - 1].login << "\n";
                    std::cout << "Email adress     : " << ph_book[k - 1].email_adress << "\n";
                    std::cout << "Favorite_meal    : " << ph_book[k - 1].favorite_meal << "\n";
                    std::cout << "Underwear_color  : " << ph_book[k - 1].underwear_color << "\n";
                    std::cout << "Darkest_secret   : " << ph_book[k - 1].darkest_secret << "\n";
                    std::cout << "Postal_adress    : " << ph_book[k - 1].postal_adress << "\n";
                    std::cout << "Phone_number     : " << ph_book[k - 1].phone_number << "\n";
                    std::cout << "Birthday_date    : " << ph_book[k - 1].birthday_date << "\n";
                }
                else if (k <= 0 || k >= (i + 1))
                    std::cout << "index not found\n";
            }
            else
                std::cout << "index not found\n";

        }
        else
            std::cout << "index not found\n";
    }
}
