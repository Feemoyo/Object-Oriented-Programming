/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 09:27:17 by fmoreira          #+#    #+#             */
/*   Updated: 2024/01/02 14:55:21 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <exception>
#include <string>

class Span
{
	private:
		unsigned int		_num;
		std::vector<int>	_vec;
		Span( void );

	public:
		~Span( void );
		Span( Span const & src );
		Span &	operator=( Span const & other );

		Span( unsigned int len );
		void	addNumber(size_t num);
		void	addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		unsigned int	longestSpan( void );
		unsigned int	shortestSpan( void );

		void	printSpan( void ) const;

		class impossibleAdd : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class impossibleLongShort : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream &	operator<<( std::ostream & o, Span const & i );


#endif
