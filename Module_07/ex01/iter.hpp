/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 08:59:38 by fmoreira          #+#    #+#             */
/*   Updated: 2024/01/04 18:59:20 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void	iter(T const *array, size_t len, void (*func)(T const &))
{
	for (size_t i = 0; i < len; i++)
		func(array[i]);
}

template <typename T>
void	iter(T *array, size_t len, void (*func)(T &))
{
	for (size_t i = 0; i < len; i++)
		func(array[i]);
}

#endif
