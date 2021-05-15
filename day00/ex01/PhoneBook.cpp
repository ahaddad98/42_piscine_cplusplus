/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 14:50:33 by ahaddad           #+#    #+#             */
/*   Updated: 2021/05/15 18:02:19 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"

int main()
{
    Phonebook ph_book;
    ph_book.init_args(&ph_book);
    cout << ph_book.first_name << "\n";
    cout << ph_book.last_name << "\n";
    cout << ph_book.nickname << "\n";
    cout << ph_book.login << "\n";
    cout << ph_book.email_adress << "\n";
    cout << ph_book.favorite_meal << "\n";
    cout << ph_book.underwear_color << "\n";
    cout << ph_book.darkest_secret << "\n";
    return 0;
}
