/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.tpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eralonso <eralonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 10:58:08 by eralonso          #+#    #+#             */
/*   Updated: 2023/09/26 16:44:15 by eralonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Span.hpp"

template < typename T >
void	Span::fill( T begin, T end )
{
	if ( std::distance( begin, end ) + this->_arr.size() > this->_maxSize  )
		throw std::length_error( "Length is too long" );
	this->_arr.insert( this->_arr.end(), begin, end );
}