/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 08:33:19 by fmoreira          #+#    #+#             */
/*   Updated: 2023/12/18 08:48:12 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T &varA, T &varB)
{
	T varAux;
	
	varAux = varA;
	varA = varB;
	varB = varAux;
}

template <typename T>
T const min( T const &varA, T const &varB)
{
	return(varA >= varB ? varB : varA );
}

template <typename T>
T const max( T const &varA, T const &varB)
{
	return(varA <= varB ? varB : varA );
}

#endif
