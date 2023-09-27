/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.tpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eralonso <eralonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 10:58:08 by eralonso          #+#    #+#             */
/*   Updated: 2023/09/27 17:44:51 by eralonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Span.hpp"

template < typename T >
void	Span::fill( const typename T::iterator& begin, const typename T::iterator& end )
{
	if ( std::distance( begin, end ) + this->_arr.size() > this->_maxSize  )
		throw std::length_error( "Length is too long" );
	this->_arr.insert( this->_arr.end(), begin, end );
}