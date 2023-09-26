/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eralonso <eralonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 11:34:15 by eralonso          #+#    #+#             */
/*   Updated: 2023/09/26 11:34:17 by eralonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <easyfind.hpp>
#include <vector>
#include <list>
#include <deque>

int main( void )
{
	std::vector< int >	vec;
	std::list< int >	lst;
	std::deque< int >	que;
	int					arr[ 6 ] = { 0, 1, 2, 3, -100, INT_MAX };

	std::cout << "TEST [ VECTOR ]\n" << std::endl;
	test( vec, arr, 6, -1 );
	test( vec, arr, 6, 0 );
	test( vec, arr, 6, INT_MAX );
	test( vec, arr, 6, INT_MIN );
	std::cout << "\n\nTEST [ LIST ]\n" << std::endl;
	test( lst, arr, 6, -1 );
	test( lst, arr, 6, 0 );
	test( lst, arr, 6, INT_MAX );
	test( lst, arr, 6, INT_MIN );
	std::cout << "\n\nTEST [ DEQUE ]\n" << std::endl;
	test( que, arr, 6, -1 );
	test( que, arr, 6, 0 );
	test( que, arr, 6, INT_MAX );
	test( que, arr, 6, INT_MIN );
    return ( 0 );
}