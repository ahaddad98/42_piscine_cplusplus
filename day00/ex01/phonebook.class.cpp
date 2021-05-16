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
#include "phonebook.class.hpp"

void	Phonebook::init_args(Phonebook *ph_book)
{
	cout << "donnez first name \n";
    getline(cin, ph_book->first_name);
    cout << "donnez last name \n";
    getline(cin, ph_book->last_name);
    cout << "donnez nickname \n";
    getline(cin, ph_book->nickname);
    cout << "donnez login \n";
    getline(cin, ph_book->login);
    cout << "donnez email adress \n";
    getline(cin, ph_book->email_adress);
    cout << "donnez favorite meal \n";
    getline(cin, ph_book->favorite_meal);
    cout << "donnez underwear color\n";
    getline(cin, ph_book->underwear_color);
    cout << "donnez darkest scret\n";
    getline(cin, ph_book->darkest_secret);
    cout << "donnez postal adress\n";
    getline(cin, ph_book->postal_adress);
    cout << "donnez phone number\n";
    getline(cin, ph_book->phone_number);
    cout << "donnez birthday date\n";
    getline(cin, ph_book->birthday_date);
}

int    which_action(char *action1)
{
    int check = 0;
    cin >> action1;
    if (strcmp(action1, "ADD") == 0)
        check = 1;
    if (strcmp(action1, "SEARCH") == 0)
        check = 2;
    if (strcmp(action1, "EXIT") == 0)
        check = 3;
    return (check);
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
