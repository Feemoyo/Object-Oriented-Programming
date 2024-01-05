/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 14:20:21 by fmoreira          #+#    #+#             */
/*   Updated: 2024/01/05 12:33:23 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <ctime>

void	subjectTest00(void)
{
	Span sp = Span(5);
	
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	
	std::cout << "sp:" << sp << std::endl;

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	return ;
}

void	addRangeTest01(void)
{
	Span sp = Span(20);
	std::vector<int> vec;
		
	for (int i = 0; i < 20; i++)
		vec.push_back(i+42);

	
	sp.addRange(vec.begin(), vec.end());
	std::cout << "sp: " << sp << std::endl;
	 
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	try
	{
		sp.addNumber(-42);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return ;
}

void	testLongestShortestException02(void)
{

	try
	{
		Span sp(1);
		sp.addNumber(24);
		std::cout << sp << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		Span sp(1);
		sp.addNumber(42);
		std::cout << sp << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

}

void	testWithALotNumbers(void)
{
	Span sp = Span(10000);
	std::vector<int> vec;

	while (vec.size() < 10000)
		vec.push_back(rand());

	sp.addRange(vec.begin(), vec.end());
	std::cout << "sp: " << sp << std::endl;
	
	std::cout << "\nShortestt and Longest" << std::endl;
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

int		main( void )
{
	srand(time(NULL));
	{
		std::cout << "00 - Test Subject\n" << std::endl;
		subjectTest00();
		std::cout << std::endl;
	}
	{
		std::cout << "01 - Test addRange method\n" << std::endl;
		addRangeTest01();
		std::cout << std::endl;
	}
	{
		std::cout << "02 - Test Longest and Shortest exception\n" << std::endl;
		testLongestShortestException02();
		std::cout << std::endl;
	}
	{
		std::cout << "03 - Test with a lot of numbers\n" << std::endl;
		testWithALotNumbers();
		std::cout << std::endl;
	}
}
