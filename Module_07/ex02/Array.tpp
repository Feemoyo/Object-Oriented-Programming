/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 10:18:28 by fmoreira          #+#    #+#             */
/*   Updated: 2023/12/19 11:52:05 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array( void ) : _array(NULL), _size(0)
{
	return ;
}

template<typename T>
Array<T>::~Array( void )
{
	if (this->_array)
		delete [] this->_array;
	return ;
}

template<typename T>
Array<T>::Array( Array const &other )
{
	this->_size = other._size;
	this->_array = new T[this->_size];
	for (unsigned int i = 0; i < this->_size; i++)
		this->_array[i] = other._array[i];
	return ;
}

template<typename T>
Array<T> &Array<T>::operator=( Array const &other )
{
	if (this->_array)
		delete [] this->_array;
	this->_size = other._size;
	this->_array = new T[this->_size];
	for (unsigned int i = 0; i < this->_size; i++)
		this->_array[i] = other._array[i];
	return (*this);
}

template<typename T>
Array<T>::Array( unsigned int n ) : _array(new T[n]), _size(n)
{
	return ;
}

template<typename T>
unsigned int	Array<T>::size( void ) const
{
	return (this->_size);
}

template<typename T>
T	&Array<T>::operator[]( unsigned int index )
{
	if (index >= this->_size)
		throw(Array::OutOfLimitsException());
	return (this->_array[index]);
}

template<typename T>
const char* Array<T>::OutOfLimitsException::what() const throw()
{
	return ("Error: Out of limits");
}
