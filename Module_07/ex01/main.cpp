/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 08:59:41 by fmoreira          #+#    #+#             */
/*   Updated: 2023/12/18 13:02:17 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp" 

void    intArray(void)
{
	int        arrayInt[5] = {1, 2, 3, 4, 5};
	
	std::cout << "intArray ::printValue" << std::endl;
	::iter(arrayInt, 5, ::printValue);

	std::cout << "\nintArray * 2" << std::endl;
	::iter(arrayInt, 5, ::doubleValue);
	::iter(arrayInt, 5, ::printValue);

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
