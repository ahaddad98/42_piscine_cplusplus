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

#define RESET   "\033[0m"
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define WHITE   "\033[37m"      /* White */

void Phonebook::init_args(Phonebook *ph_book)
{
    std::cin.ignore();
    std::cout << RED <<"First name " << WHITE << std::endl;
    getline(std::cin, ph_book->first_name);
    std::cout << RED << "Last name \n"  << WHITE ;
    getline(std::cin, ph_book->last_name);
    std::cout << RED << "Nickname \n" <<  WHITE;
    getline(std::cin, ph_book->nickname);
    std::cout << RED << "Login \n" <<  WHITE;
    getline(std::cin, ph_book->login);
    std::cout << RED << "Email adress \n" <<  WHITE;
    getline(std::cin, ph_book->email_adress);
    std::cout << RED << "Favorite meal \n" <<  WHITE ;
    getline(std::cin, ph_book->favorite_meal);
    std::cout << RED << "Underwear color\n" <<  WHITE ;
    getline(std::cin, ph_book->underwear_color);
    std::cout << RED << "Darkest scret\n" <<  WHITE ;
    getline(std::cin, ph_book->darkest_secret);
    std::cout << RED << "Postal adress\n" <<  WHITE ;
    getline(std::cin, ph_book->postal_adress);
    std::cout << RED << "Phone number\n" <<  WHITE ;
    getline(std::cin, ph_book->phone_number);
    std::cout << RED << "Birthday date\n" <<  WHITE ;
    getline(std::cin, ph_book->birthday_date);
}

int which_action(char *action1)
{
    int check = 0;
    std::cin >> action1;
    if (strcmp(action1, "ADD") == 0)
        check = 1;
    if (strcmp(action1, "SEARCH") == 0)
        check = 2;
    if (strcmp(action1, "EXIT") == 0)
        check = 3;
    return (check);
}

void    print(std::string str)
{
    int i = 0;
    int size = 0;
    size = str.size();
    if (size > 9)
    {
        while (i < 9)
        {
            std::cout << GREEN <<str[i] << WHITE;
            i++;
        }
        std::cout << GREEN << "." << WHITE;
    }
    else
    {
        std::cout << std::setw(10);
        std::cout << GREEN << str << WHITE;
    }
}

void Phonebook::search(Phonebook *ph_book, int i)
{
    int j = 0;
    std::string  index;
    int k = -1;
    if (i == 0)
        std::cout << "Data not found" << std::endl;
    while (j < i)
    {
        std::cout << std::setw(10);
        std::cout << GREEN <<j + 1 << WHITE << "|" ;
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
        if (index.size() == 1)
        {
            k = std::stoi(index);
            std::cout << k << "\n";
            if (k > 0 && k < (i+1))
            {
                std::cout << YELLOW <<"First name       : " <<ph_book[k - 1].last_name << "\n" <<  WHITE ;
                std::cout << YELLOW <<"Last name        : " <<ph_book[k - 1].nickname << "\n" <<  WHITE;
                std::cout << YELLOW <<"Nickname         : " <<ph_book[k - 1].login << "\n" <<  WHITE;
                std::cout << YELLOW <<"Email adress     : " <<ph_book[k - 1].email_adress << "\n" <<  WHITE;
                std::cout << YELLOW <<"Favorite_meal    : " <<ph_book[k - 1].favorite_meal << "\n" <<  WHITE;
                std::cout << YELLOW <<"Underwear_color  : " <<ph_book[k - 1].underwear_color << "\n" <<  WHITE;
                std::cout << YELLOW <<"Darkest_secret   : " <<ph_book[k - 1].darkest_secret << "\n" <<  WHITE;
                std::cout << YELLOW <<"Postal_adress    : " <<ph_book[k - 1].postal_adress << "\n" <<  WHITE;
                std::cout << YELLOW <<"Phone_number     : " <<ph_book[k - 1].phone_number << "\n" <<  WHITE;
                std::cout << YELLOW <<"Birthday_date    : " <<ph_book[k - 1].birthday_date << "\n" <<  WHITE;
            }
        }
        else if (k <= 0 || k > (i + 1))
        {
            std::cout << "index not found\n";
        }
    }
}
