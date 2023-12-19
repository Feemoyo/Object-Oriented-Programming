/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 08:59:38 by fmoreira          #+#    #+#             */
/*   Updated: 2023/12/18 12:51:55 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void	iter(T *array, size_t len, void (*func)(T const &))
{
	for (size_t i = 0; i < len; i++)
		func(array[i]);
}

template <typename T>
void	printValue(T const &value)
{
	std::cout << value << std::endl;
}

template <typename T>
void	doubleValue(T const &value)
{
	value *= 2;
}

#endif
