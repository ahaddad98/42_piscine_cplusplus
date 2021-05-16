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
using namespace std;
int which_action(char *actoin1);
class Phonebook
{
public:

	string first_name;
	string last_name;
	string nickname;
	string login;
	string email_adress;
	string favorite_meal;
	string underwear_color;
	string darkest_secret;
	string	postal_adress;
	string	phone_number;
	string	birthday_date;
	string	action;
	char	action1[10];
	int		check;
	void init_args(Phonebook *ph_book);
};

#endif
