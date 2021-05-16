/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 14:50:33 by ahaddad           #+#    #+#             */
/*   Updated: 2021/05/16 13:48:59 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"

int main()
{
    Phonebook ph_book[8];
    int i = 0;
    int check;
    char action1[10];
    while (1)
    {
        check = which_action(action1);
        if (i < 8)
        {
            if (check == 1)
                ph_book[i].init_args(&ph_book[i]);
            if (check == 3)
                exit(0);
            i++;
        }
        if (i >= 8)
            cout << "you can't add more than 8\n";
    }
    // cout << ph_book.last_name << "\n";
    // cout << ph_book.nickname << "\n";
    // cout << ph_book.login << "\n";
    // cout << ph_book.email_adress << "\n";
    // cout << ph_book.favorite_meal << "\n";
    // cout << ph_book.underwear_color << "\n";
    // cout << ph_book.darkest_secret << "\n";
    // cout << ph_book.postal_adress << "\n";
    // cout << ph_book.phone_number << "\n";
    // cout << ph_book.birthday_date << "\n";
    return 0;
}
