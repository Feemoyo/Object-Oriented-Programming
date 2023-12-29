/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:09:21 by fmoreira          #+#    #+#             */
/*   Updated: 2023/12/29 15:55:33 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <cstdlib>

class ScalarConverter
{
	private:
		static char			_char;
		static int			_int;
		static float		_float;
		static double		_double;

		ScalarConverter( void );
		~ScalarConverter();
		ScalarConverter( ScalarConverter const &other );
		ScalarConverter &operator=( ScalarConverter const &other );
		
	public:

		static void 	convert( const std::string input );
		static void		castFromChar( void );
		static void		castFromInt( void );
		static void		castFromFloat( void );
		static void		castFromDouble( void );
		static void		impossibleCast( void );
		static void		terminalOutput( void );
};

#endif
