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

#include <iostream>
#include <unistd.h>
#include "phonebook.class.hpp"

void Phonebook::init_args(Phonebook *ph_book)
{
    std::string p;
    getline(std::cin, p);
    std::cout << "donnez first name " << std::endl;
    getline(std::cin, ph_book->first_name);
    std::cout << "donnez last name \n";
    getline(std::cin, ph_book->last_name);
    std::cout << "donnez nickname \n";
    getline(std::cin, ph_book->nickname);
    std::cout << "donnez login \n";
    getline(std::cin, ph_book->login);
    std::cout << "donnez email adress \n";
    getline(std::cin, ph_book->email_adress);
    std::cout << "donnez favorite meal \n";
    getline(std::cin, ph_book->favorite_meal);
    std::cout << "donnez underwear color\n";
    getline(std::cin, ph_book->underwear_color);
    std::cout << "donnez darkest scret\n";
    getline(std::cin, ph_book->darkest_secret);
    std::cout << "donnez postal adress\n";
    getline(std::cin, ph_book->postal_adress);
    std::cout << "donnez phone number\n";
    getline(std::cin, ph_book->phone_number);
    std::cout << "donnez birthday date\n";
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

void    Phonebook::search(Phonebook *ph_book, int i)
{
    int j = 0;
    
    // i--;
    while (j < i)
    {
        std::cout << j + 1 << " | " << ph_book[j].first_name << " | " << ph_book[j].last_name <<" | " << ph_book[j].nickname << "\n";
        j++;
    }
}
// Phonebook::Phonebook(void)
// {
// 	// std::cout << "lazemna l3a9a" << std::endl;
// 	return;
// }

// Phonebook::~Phonebook(void)
// {
// 	// std::cout << "waaaaaaa waaaa waaa l3aa9aa" << std::endl;
// 	return;
// }
