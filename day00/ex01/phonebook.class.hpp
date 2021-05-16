/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 11:25:45 by ahaddad           #+#    #+#             */
/*   Updated: 2021/05/15 12:15:19 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H
# include <iostream>
# include <cstring>
// using namespace std;
int which_action(char *actoin1);
class Phonebook
{
public:

	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string login;
	std::string email_adress;
	std::string favorite_meal;
	std::string underwear_color;
	std::string darkest_secret;
	std::string	postal_adress;
	std::string	phone_number;
	std::string	birthday_date;
	std::string	action;
	char	action1[10];
	int		check;
	void search(Phonebook *ph_book, int i);
	void init_args(Phonebook *ph_book);
};

#endif
