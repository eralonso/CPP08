/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eralonso <eralonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 11:33:48 by eralonso          #+#    #+#             */
/*   Updated: 2023/09/26 17:09:52 by eralonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"

void	testCopy( void )
{
	Span	sp( 6 );

	for ( int i = 0; i < 6; i++ )
		sp.addNumber( i );

	Span	cp( sp );
}

int main( void )
{
	Span	sp( 6 );
	int		arr[ 7 ] = { -1, 12, 7, 9, 3, 125, 0};
	// std::vector< int >arr;

	// arr.push_back( -1 );
	// arr.push_back( 2 );
	// arr.push_back( 8 );
	// arr.push_back( 12 );
	// arr.push_back( 1231 );
	// arr.push_back( 9 );
	// sp.addNumber(INT_MIN);
	// sp.addNumber(7);
	// sp.addNumber(12);
	// sp.addNumber(10);
	// sp.addNumber(3);
	// sp.addNumber(INT_MAX);

	sp.fill( arr, arr + 6 );
	try
	{
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch ( const std::exception& e )
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << sp.longestSpan() << std::endl;	
	}
	catch ( const std::exception& e )
	{
		std::cerr << e.what() << std::endl;
	}
    return ( 0 );
}