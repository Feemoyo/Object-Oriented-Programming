/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 10:18:24 by fmoreira          #+#    #+#             */
/*   Updated: 2023/12/31 15:03:02 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <stdlib.h>

template <typename T>
class   Array
{
	private:
		T               *_array;
		unsigned int    _size;
	
	public:
		Array<T>( void ) : _array(NULL), _size(0)
		{
			return ;
		};
		
		~Array<T>( void )
		{
			if (this->_array)
				delete [] this->_array;
			return ;
		};
		
		Array<T>( Array<T> const &other )
		{
			this->_size = other._size;
			this->_array = new T[this->_size];
			for (unsigned int i = 0; i < this->_size; i++)
				this->_array[i] = other._array[i];
			return ;
		};
		
		Array<T> &operator=( Array<T> const &other )
		{
			if (this->_array)
				delete [] this->_array;
			this->_size = other._size;
			this->_array = new T[this->_size];
			for (unsigned int i = 0; i < this->_size; i++)
				this->_array[i] = other._array[i];
			return (*this);
		};


		Array<T>( unsigned int n ) : _array(new T[n]), _size(n)
		{
			return ;
		};
		
		unsigned int	size( void ) const
		{
			return (this->_size);
		}

		T	&operator[]( unsigned int index ) const
		{
			if (index >= this->_size)
				throw(Array::OutOfLimitsException());
			return (this->_array[index]);
		};

		class OutOfLimitsException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Error: Out of limits");
				}
		};
};

#endif
