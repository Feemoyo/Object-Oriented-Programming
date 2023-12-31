/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 10:18:33 by fmoreira          #+#    #+#             */
/*   Updated: 2023/12/31 15:03:39 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

void	testIntArray00(void)
{
	Array<int> intArray(5);

	for (unsigned int i = 0; i < intArray.size(); i++)
		intArray[i] = i;

	for (unsigned int i = 0; i < intArray.size(); i++)
		std::cout << intArray[i] << std::endl;

	std::cout << "\nArray.size(): " << intArray.size() << std::endl;

}

void	testStringArray01(void)
{
	Array<std::string> stringArray(3);

	for (unsigned int i = 0; i < stringArray.size(); i++)
		stringArray[i] = "Hello World!";
	
	for (unsigned int i = 0; i < stringArray.size(); i++)
		std::cout << stringArray[i] << std::endl;

	std::cout << "\nArray.size(): " << stringArray.size() << std::endl;
}

void	testFloatArray02(void)
{
	Array<float> floatArray(3);

	for (unsigned int i = 0; i < floatArray.size(); i++)
		floatArray[i] = i + 0.5;
	
	for (unsigned int i = 0; i < floatArray.size(); i++)
		std::cout << floatArray[i] << std::endl;

	std::cout << "\nArray.size(): " << floatArray.size() << std::endl;
}

void	testDoubleArray03(void)
{
	Array<double> doubleArray(3);

	for (unsigned int i = 0; i < doubleArray.size(); i++)
		doubleArray[i] = i + 0.5;
	
	for (unsigned int i = 0; i < doubleArray.size(); i++)
		std::cout << doubleArray[i] << std::endl;

	std::cout << "\nArray.size(): " << doubleArray.size() << std::endl;
}

void	testEmptyArray04(void)
{
	Array<int> intArray;

	std::cout << "\nArray.size(): " << intArray.size() << std::endl;
}

void	testCopyArray05(void)
{
	Array<int> intArray(5);

	std::cout << "\nArray(5)" << std::endl;
	for (unsigned int i = 0; i < intArray.size(); i++)
		intArray[i] = i;

	for (unsigned int i = 0; i < intArray.size(); i++)
		std::cout << intArray[i] << std::endl;

	std::cout << "\nArray.size(): " << intArray.size() << std::endl;

	Array<int> intArray2(intArray);
	std::cout << "\nArray2(Array)" << std::endl;
	for (unsigned int i = 0; i < intArray2.size(); i++)
		std::cout << intArray2[i] << std::endl;

	std::cout << "\nArray2.size(): " << intArray2.size() << std::endl;
}

void	testAssignationArray06(void)
{
	Array<int> intArray(5);

	std::cout << "\nArray(5)" << std::endl;
	for (unsigned int i = 0; i < intArray.size(); i++)
		intArray[i] = i;

	for (unsigned int i = 0; i < intArray.size(); i++)
		std::cout << intArray[i] << std::endl;

	std::cout << "\nArray.size(): " << intArray.size() << std::endl;

	Array<int> intArray2 = intArray;
	std::cout << "\nArray2(Array)" << std::endl;
	for (unsigned int i = 0; i < intArray2.size(); i++)
		std::cout << intArray2[i] << std::endl;

	std::cout << "\nArray2.size(): " << intArray2.size() << std::endl;
}

void	testOutOfLimitsArray07(void)
{
	Array<int> intArray(5);
	try
	{
		std::cout << intArray[42] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

int main(void)
{
	{
		std::cout << "00 - Test int Array\n" << std::endl;
		testIntArray00();
		std::cout << "\n" << std::endl;
	}
	{
		std::cout << "01 - Test string Array\n" << std::endl;
		testStringArray01();
		std::cout << "\n" << std::endl;
	}
	{
		std::cout << "02 - Test float Array\n" << std::endl;
		testFloatArray02();
		std::cout << "\n" << std::endl;
	}
	{
		std::cout << "03 - Test double Array\n" << std::endl;
		testDoubleArray03();
		std::cout << "\n" << std::endl;
	}
	{
		std::cout << "04 - Test empty Array\n" << std::endl;
		testEmptyArray04();
		std::cout << "\n" << std::endl;
	}
	{
		std::cout << "05 - Test copy Array\n" << std::endl;
		testCopyArray05();
		std::cout << "\n" << std::endl;
	}
	{
		std::cout << "06 - Test assignation Array\n" << std::endl;
		testAssignationArray06();
		std::cout << "\n" << std::endl;
	}
	{
		std::cout << "07 - Test out of limits Array\n" << std::endl;
		testOutOfLimitsArray07();
		std::cout << "\n" << std::endl;
	}
}
