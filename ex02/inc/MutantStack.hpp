/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eralonso <eralonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 10:07:20 by eralonso          #+#    #+#             */
/*   Updated: 2023/09/29 13:36:58 by eralonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>

template < typename T >
class MutantStack: public std::stack< T >
{
	public:
		MutantStack( void );
		MutantStack( const MutantStack& mts );
		~MutantStack( void );
		MutantStack&	operator=( const MutantStack& mts );

		typedef typename std::stack< T >::container_type::iterator iterator;

		iterator		begin( void );
		iterator		end( void );
};

#include "MutantStack.tpp"