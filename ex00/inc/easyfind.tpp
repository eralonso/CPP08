/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eralonso <eralonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:23:24 by eralonso          #+#    #+#             */
/*   Updated: 2023/09/25 12:13:46 by eralonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template < typename T >
int	easyfind( const T& arr, int toFind )
{
	if ( std::find( arr.begin(), arr.end(), toFind ) == arr.end() )
		throw std::runtime_error( "Integer not found" );
	return ( toFind );
}

template < typename T >
void	test( T& arr, int *numbers, unsigned int size, int toFind )
{
	for ( unsigned int i = 0; i < size; i++ )
		arr.push_back( numbers[ i ] );
	try
	{
		easyfind( arr, toFind );
		std::cout << "Integer " << toFind << " Found" << std::endl;
	}
	catch ( const std::runtime_error& e )
	{
		std::cerr << e.what() << std::endl;
	}
	arr.clear();
}