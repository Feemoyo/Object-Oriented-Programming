/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:09:21 by fmoreira          #+#    #+#             */
/*   Updated: 2023/11/21 18:25:30 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>

static class ScalarConverter
{
	private:
		std::string	_input;
		int			_type;
		int			_precision;
		int			_flag;
		
		char		_char;
		int			_int;
		float		_float;
		double		_double;

		// void		_setType( void );
		// void		_setPrecision( void );
		// void		_setFlag( void );
		// void		_setChar( void );
		// void		_setInt( void );
		// void		_setFloat( void );
		// void		_setDouble( void );

	public:
		ScalarConverter( void );
		~ScalarConverter();
		ScalarConverter( ScalarConverter const &other );
		ScalarConverter &operator=( ScalarConverter const &other );

		ScalarConverter( const std::string input );
		void 		convert( const std::string scalarType );
		void		printChar( void ) const;
		void		printInt( void ) const;
		void		printFloat( void ) const;
		void		printDouble( void ) const;
		void		printAll( void ) const;
};

#endif
