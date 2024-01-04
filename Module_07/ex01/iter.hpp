/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 08:59:38 by fmoreira          #+#    #+#             */
/*   Updated: 2024/01/04 17:38:22 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void	iter(T *array, size_t len, void (*func)(T &))
{
	for (size_t i = 0; i < len; i++)
		func(array[i]);
}

template <typename T>
void	iter(T *array, size_t len, void (*func)(T const &))
{
	for (size_t i = 0; i < len; i++)
		func(array[i]);
}

template <typename T>
void	printValue(T &value)
{
	std::cout << value << std::endl;
}

template <typename T>
void	plusValue(T &value)
{
	value += 1;
}

template <>
void	plusValue(std::string &value)
{
	std::cout << "Not possible with string" << std::endl;
	(void)value;
}

template <typename T>
void	minumValue(T &value)
{
	value -= 1;
}

template <>
void	minumValue(std::string &value)
{
	std::cout << "Not possible with string" << std::endl;
	(void)value;
}

template <typename T>
void	doubleValue(T &value)
{
	value *= 2;
}

template <>
void	doubleValue(std::string &value)
{
	std::cout << "Not possible with string" << std::endl;
	(void)value;
}

template <>
void	doubleValue(char &value)
{
	std::cout << "Unfeasible with char" << std::endl;
	(void)value;
}

#endif
