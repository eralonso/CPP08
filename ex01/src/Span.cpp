/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eralonso <eralonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 11:07:27 by eralonso          #+#    #+#             */
/*   Updated: 2023/09/28 14:02:07 by eralonso         ###   ########.fr       */
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
	this->_arr.insert( n );
}

void	Span::fill( unsigned int n )
{
	if ( this->_arr.size() + n > this->_maxSize )
		throw std::length_error( "Length is too long" );
	for ( unsigned int i = 0; i < n; i++ )
	{
		srand( time( NULL ) );
		this->_arr.insert( rand() );
	}
}

long	Span::shortestSpan( void ) const
{
	long	minSpan;

	minSpan = std::numeric_limits< unsigned int >::max();
	if ( this->_arr.size() < 2 )
		throw std::runtime_error( "Can't find shortest span with less than 2 numbers" );
	for ( std::multiset< int >::const_iterator it = this->_arr.cbegin(); it != this->_arr.cend(); it++ )
		if ( std::abs( *it ) < minSpan )
			minSpan = *it;
	return ( minSpan );
}

long	Span::longestSpan( void ) const
{
	std::multiset< int >::const_iterator	min;
	std::multiset< int >::const_iterator	max;

	if ( this->_arr.size() < 2 )
		throw std::runtime_error( "Can't find longest span with less than 2 numbers" );
	min = std::min_element( this->_arr.begin(), this->_arr.end() );
	max = std::max_element( this->_arr.begin(), this->_arr.end() );
	return ( std::abs( static_cast< long >( *max ) - static_cast< long >( *min ) ) );
}