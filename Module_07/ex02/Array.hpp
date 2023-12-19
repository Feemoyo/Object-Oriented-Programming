/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 10:18:24 by fmoreira          #+#    #+#             */
/*   Updated: 2023/12/19 12:15:13 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class   Array
{
	private:
		T               *_array;
		unsigned int    _size;
	
	public:
		Array( void );
		~Array( void );
		Array( Array const &other );
		Array &operator=( Array const &other );

		Array( unsigned int n );
		unsigned int	size( void ) const;

		T	&operator[]( unsigned int index );

		class OutOfLimitsException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

#endif
