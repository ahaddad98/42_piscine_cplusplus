/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 14:50:33 by ahaddad           #+#    #+#             */
/*   Updated: 2021/05/17 14:05:32 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"

int main()
{
    Phonebook *ph_book = new Phonebook[8];
    int i = 0;
    int check;
    char action1[10];
    int index = -1;

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
            {
                ph_book->search(ph_book, i);
            }
            if (check == 3)
            {
                delete[] ph_book;
                exit(0);
            }
            if (check == 1)
                i++;
        }
        if (i >= 8)
            std::cout << "you can't add more than 8\n";
    }
    return 0;
}
