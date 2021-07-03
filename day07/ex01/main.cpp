/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddad <ahaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 00:30:49 by ahaddad           #+#    #+#             */
/*   Updated: 2021/07/04 00:50:03 by ahaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "iter.hpp"

void printint( int const & elem ) {
	std::cout << elem << std::endl;
}
void printfloat( float const & elem ) {
	std::cout << elem << "f" <<std::endl;
}

int main()
{
    int array_size = 5;
    int *int_array = new int[5];
    float *float_array = new float[5];
    for ( size_t i = 0; i < array_size; ++i ) 
    {
		int_array [i] = i;
		float_array [i] = i;
	}
    std::cout << "\n/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */\nType : int\n\n";
	iter <int> ( int_array, array_size, printint);
    std::cout << "\n/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */\nType : float\n\n";
	iter <float> (float_array, array_size, printfloat);
    return 0;
}