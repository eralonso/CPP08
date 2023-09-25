/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eralonso <eralonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 18:05:43 by eralonso          #+#    #+#             */
/*   Updated: 2023/09/25 12:13:51 by eralonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template < typename T >
int		easyfind( const T& arr, int toFind );

template < typename T >
void	test( const T& arr, int *numbers, unsigned int size, int toFind );

#include "easyfind.tpp"