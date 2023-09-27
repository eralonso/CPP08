/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eralonso <eralonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 11:07:27 by eralonso          #+#    #+#             */
/*   Updated: 2023/09/27 17:45:02 by eralonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( void ): _maxSize( 0 ) {}

Span::Span( unsigned int N ): _maxSize( N ) {}

Span::Span( const Span& span ): _maxSize( span._maxSize ) {}

Span::~Span( void )
{
	this->_arr.clear();
}

Span&	Span::operator=( const Span& span )
{
	if ( this != &span )
	{
		this->_arr.clear();
		this->_arr = span._arr;
		this->_maxSize = span._maxSize;
	}
	return ( *this );
}

void	Span::addNumber( const int n )
{
	if ( this->_arr.size() + 1 > this->_maxSize )
		throw std::length_error( "Span is full" );
	this->_arr.push_back( n );
}

long	Span::shortestSpan( void ) const
{
	long	minSpan;

	if ( this->_arr.size() < 2 )
		throw std::runtime_error( "Can't find shortest span with less than 2 numbers" );
	minSpan = UINT_MAX;
	for ( unsigned int i = 0; i < this->_arr.size(); i++ )
	{
		for ( unsigned int j = 0; j < this->_arr.size(); j++ )
		{
			if ( i != j && std::abs( static_cast< long >( this->_arr[ i ] ) - static_cast< long >( this->_arr[ j ] ) ) < minSpan )
				minSpan = std::abs( static_cast< long >( this->_arr[ i ] ) - static_cast< long >( this->_arr[ j ] ) );
		}
	}
	return ( minSpan );
}

long	Span::longestSpan( void ) const
{
	std::vector< int >::const_iterator	min;
	std::vector< int >::const_iterator	max;

	if ( this->_arr.size() < 2 )
		throw std::runtime_error( "Can't find longest span with less than 2 numbers" );
	min = std::min_element( this->_arr.begin(), this->_arr.end() );
	max = std::max_element( this->_arr.begin(), this->_arr.end() );
	return ( std::abs( static_cast< long >( *max ) - static_cast< long >( *min ) ) );
}