/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eralonso <eralonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 19:10:39 by eralonso          #+#    #+#             */
/*   Updated: 2023/09/27 12:41:26 by eralonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <iterator>
#include <numeric>

class Span
{
	private:
		std::vector< int >	_arr;
		unsigned int		_maxSize;
	public:
		Span( void );
		Span( unsigned int N );
		Span( const Span& span );
		~Span( void );
		Span&			operator=( const Span& span );
		void			addNumber( const int n );
		long			shortestSpan( void ) const;
		long			longestSpan( void ) const;
		template < typename T >
		void			fill( const typename T::iterator& begin, const typename T::iterator& end );
};

#include "Span.tpp"