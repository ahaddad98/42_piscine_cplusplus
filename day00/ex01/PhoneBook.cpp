/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 14:50:33 by ahaddad           #+#    #+#             */
/*   Updated: 2021/05/16 16:39:28 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"

int main()
{
    Phonebook *ph_book = new Phonebook[8];
    int i = 0;
    int check;
    char action1[10];
    while (1)
    {
        check = which_action(action1);
        if (i < 8)
        {
            if (check == 1)
            {
                ph_book[i].init_args(&ph_book[i]);
            }
            if (check == 2)
                ph_book->search(ph_book, i);
            if (check == 3)
                exit(0);
            if (check == 1)
                i++;
        }
        if (i >= 8)
            std::cout << "you can't add more than 8\n";
    }
            // std::cout << ph_book[i].last_name << "\n";
            // std::cout << ph_book[i].nickname << "\n";
            // std::cout << ph_book[i].login << "\n";
            // std::cout << ph_book[i].email_adress << "\n";
            // std::cout << ph_book[i].favorite_meal << "\n";
            // std::cout << ph_book[i].underwear_color << "\n";
            // std::cout << ph_book[i].darkest_secret << "\n";
            // std::cout << ph_book[i].postal_adress << "\n";
            // std::cout << ph_book[i].phone_number << "\n";
            // std::cout << ph_book[i].birthday_date << "\n";
    return 0;
}
