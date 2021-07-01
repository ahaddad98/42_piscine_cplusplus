/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 16:24:25 by ahaddad           #+#    #+#             */
/*   Updated: 2021/07/01 16:37:12 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP
# include <iostream>

class Data
{
private:
    int _to_check_value;
public:
    Data(/* args */);
    Data(int);
    Data(Data const & data);
    Data &operator=(Data const & data);
    ~Data();
    int gettotcheckvalue() const; 
};


#endif