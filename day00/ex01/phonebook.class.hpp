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
using namespace std;
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
	int	postal_adress;
	int	phone_number;
	int	birthday_date;
	int		check;
	void init_args(Phonebook *ph_book);
};

#endif
