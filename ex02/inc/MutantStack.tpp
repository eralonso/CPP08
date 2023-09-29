/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eralonso <eralonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 10:35:44 by eralonso          #+#    #+#             */
/*   Updated: 2023/09/29 12:41:00 by eralonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template < typename T >
MutantStack< T >::MutantStack( void ): std::stack< T >() {}

template < typename T >
MutantStack< T >::MutantStack( const MutantStack& mts ): std::stack< T >( mts ) {}

template < typename T >
MutantStack< T >::~MutantStack( void ) {}

template < typename T >
MutantStack< T >&	MutantStack< T >::operator=( const MutantStack& mts )
{
	return ( std::stack< T >::operator=( mts ) );
}

template < typename T >
typename MutantStack< T >::iterator	MutantStack< T >::begin( void )
{
	return ( this->c.begin() );
}

template < typename T >
typename MutantStack< T >::iterator	MutantStack< T >::end( void )
{
	return ( this->c.end() );
}