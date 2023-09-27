/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eralonso <eralonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 11:33:48 by eralonso          #+#    #+#             */
/*   Updated: 2023/09/27 13:31:06 by eralonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"
#include <array>

using std::array;

void	testCopy( void )
{
	Span	sp( 6 );

	for ( int i = 0; i < 6; i++ )
		sp.addNumber( i );

	Span	cp( sp );
}

int main( void )
{
	Span			sp( 6 );
	array< int, 6 >	arr = { -1, 12, 7, 9, 3, 125 };

	sp.fill< array< int, 6 > >( arr.begin(), arr.end() );
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