/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 08:59:41 by fmoreira          #+#    #+#             */
/*   Updated: 2024/01/04 18:59:15 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp" 

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

void    intArray(void)
{
	int        arrayInt[5] = {1, 2, 3, 4, 5};
	
	std::cout << "intArray ::printValue" << std::endl;
	::iter(arrayInt, 5, ::printValue);

	std::cout << "\nintArray * 2" << std::endl;
	iter(arrayInt, 5, ::doubleValue);
	iter(arrayInt, 5, ::printValue);

	std::cout << "\nintArray + 1 and ::printValue" << std::endl;
	::iter(arrayInt, 5, ::plusValue);
	::iter(arrayInt, 5, ::printValue);

	std::cout << "\nintArray - 1 and ::printValue" << std::endl;
	::iter(arrayInt, 5, ::minumValue);
	::iter(arrayInt, 5, ::printValue);

	std::cout << std::endl;
}

void    charArray(void)
{
	char        arrayChar[5] = {'H', 'E', 'L', 'L', 'O'};
	
	std::cout << "charArray ::printValue" << std::endl;
	::iter(arrayChar, 5, ::printValue);

	std::cout << "\ncharArray * 2 and ::printValue" << std::endl;
	::iter(arrayChar, 5, ::doubleValue);
	::iter(arrayChar, 5, ::printValue);

	std::cout << "\ncharArray + 1 and ::printValue" << std::endl;
	::iter(arrayChar, 5, ::plusValue);
	::iter(arrayChar, 5, ::printValue);

	std::cout << std::endl;
}

void    stringArray(void)
{
	std::string arrayString[5] = {"Hello", "World", "Array", "Test", "42"};
	
	std::cout << "stringArray ::printValue" << std::endl;
	::iter(arrayString, 5, ::printValue);

	std::cout << "\ntringArray * 2 and ::printValue" << std::endl;
	::iter(arrayString, 5, ::doubleValue);
	::iter(arrayString, 5, ::printValue);

	std::cout << std::endl;
}

int main (void)
{
	{
		std::cout << "00 - Test int Array\n" << std::endl;
		intArray();
		std::cout << "\n" << std::endl;
	}
	{
		std::cout << "01 - Test char Array\n" << std::endl;
		charArray();
		std::cout << "\n" << std::endl;
	}
	{
		std::cout << "02 - Test string Array\n" << std::endl;
		stringArray();
		std::cout << "\n" << std::endl;
	}
}
