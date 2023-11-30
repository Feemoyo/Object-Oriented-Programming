/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:08:56 by fmoreira          #+#    #+#             */
/*   Updated: 2023/11/30 14:51:57 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

char	ScalarConverter::_char = 0;
int		ScalarConverter::_int = 0;
float	ScalarConverter::_float = 0.0f;
double	ScalarConverter::_double = 0.0;

ScalarConverter::ScalarConverter( void )
{
	return ;
}

ScalarConverter::~ScalarConverter()
{
	return ;
}

ScalarConverter::ScalarConverter( ScalarConverter const &other )
{
	*this = other;
	return ;
}

ScalarConverter &ScalarConverter::operator=( ScalarConverter const &other )
{
	if (this == &other)
		return (*this);
	return (*this);
}

void	ScalarConverter::convert( const std::string input )
{
	char	*intChecker;
	char	*floatChecker;
	char	*doubleChecker;

	int		intValue = static_cast<int>(strtol(input.c_str(), &intChecker, 10));
	float	floatValue = static_cast<float>(strtof(input.c_str(), &floatChecker));
	double	doubleValue = static_cast<double>(strtod(input.c_str(), &doubleChecker));

	if (input.length() == 1 && std::isalpha(input[0]))
	{
		ScalarConverter::_char = input[0];
		ScalarConverter::castFromChar();
	}
	else if (*intChecker == '\0')
	{
		ScalarConverter::_int = intValue;
		ScalarConverter::castFromInt();
	}
	else if (*doubleChecker == '\0')
	{
		ScalarConverter::_float = floatValue;
		ScalarConverter::castFromFloat();
	}
	else if (*floatChecker == 'f' && *(floatChecker + 1) == '\0')
	{
		ScalarConverter::_double = doubleValue;
		ScalarConverter::castFromDouble();
	}
	else
	{
		ScalarConverter::impossibleCast();
		return ;
	}
	ScalarConverter::terminalOutput();
	return ;
}

void	ScalarConverter::castFromChar( void )
{
	ScalarConverter::_int = static_cast<int>(ScalarConverter::_char);
	ScalarConverter::_float = static_cast<float>(ScalarConverter::_char);
	ScalarConverter::_double = static_cast<double>(ScalarConverter::_char);
	
	return ;
}

void	ScalarConverter::castFromInt( void )
{
	ScalarConverter::_char = static_cast<char>(ScalarConverter::_int);
	ScalarConverter::_float = static_cast<float>(ScalarConverter::_int);
	ScalarConverter::_double = static_cast<double>(ScalarConverter::_int);
	
	return ;
}

void	ScalarConverter::castFromFloat( void )
{
	ScalarConverter::_char = static_cast<char>(ScalarConverter::_float);
	ScalarConverter::_int = static_cast<int>(ScalarConverter::_float);
	ScalarConverter::_double = static_cast<double>(ScalarConverter::_float);

	return ;
}

void	ScalarConverter::castFromDouble( void )
{
	ScalarConverter::_char = static_cast<char>(ScalarConverter::_double);
	ScalarConverter::_int = static_cast<int>(ScalarConverter::_double);
	ScalarConverter::_float = static_cast<float>(ScalarConverter::_double);

	return ;
}

void	ScalarConverter::impossibleCast( void )
{
	std::cout << "char: Impossible" << std::endl;
	std::cout << "int: Impossible" << std::endl;
	std::cout << "float: Impossible" << std::endl;
	std::cout << "double: Impossible" << std::endl;
	
	return ;
}

void	ScalarConverter::terminalOutput( void )
{
	if(static_cast<double>(ScalarConverter::_int) != ScalarConverter::_double)
	{
		std::cout << "char: Impossible" << std::endl;
		if (ScalarConverter::_int <= -2147483648 || ScalarConverter::_int >= 2147483647)
			std::cout << "int: Impossible" << std::endl;
		else
			std::cout << "int: " << ScalarConverter::_int << std::endl;
		std::cout << "float: " << ScalarConverter::_float << std::endl;
		std::cout << "double: " << ScalarConverter::_double << std::endl;
	}
	else
	{
		std::cout << "char: ";
		if (std::isprint(ScalarConverter::_char))
			std::cout << "'" << ScalarConverter::_char << "'" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
		std::cout << "int: " << ScalarConverter::_int << std::endl;
		std::string dotSomething = (ScalarConverter::_double - ScalarConverter::_int == 0) ? ".0" : "";
		std::cout << "float: " << ScalarConverter::_float << dotSomething << "f" << std::endl;
		std::cout << "double: " << ScalarConverter::_double << dotSomething << std::endl;
	}
	return ;
}
