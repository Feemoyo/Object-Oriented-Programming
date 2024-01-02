/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 16:35:21 by fmoreira          #+#    #+#             */
/*   Updated: 2024/01/02 09:25:27 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <deque>
#include <iostream>
#include <ctime>

void testVector00(void)
{
	std::vector<int>	v;
	
	for (int i = 0; i < 10; i++)
		v.push_back(i);
	
	std::cout << "Vector: ";
	for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	try
	{
		easyfind(v, 5);
		easyfind(v, 10);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void testList01(void)
{
	std::list<int>	l;
	
	for (int i = 0; i < 10; i++)
		l.push_back(i);
	
	std::cout << "List: ";
	for (std::list<int>::iterator it = l.begin(); it != l.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	try
	{
		easyfind(l, 1);
		easyfind(l, 42);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void testDeque02(void)
{
	std::deque<int>	d;
	
	for (int i = 0; i < 10; i++)
		d.push_back(i);
	
	std::cout << "Deque: ";
	for (std::deque<int>::iterator it = d.begin(); it != d.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	try
	{
		easyfind(d, 4);
		easyfind(d, 42);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

int main(void)
{
	{
		std::cout << "Test Vector 00" << std::endl;
		testVector00();
		std::cout << std::endl;
	}
	{
		std::cout << "Test List 01" << std::endl;
		testList01();
		std::cout << std::endl;
	}
	{
		std::cout << "Test Deque 02" << std::endl;
		testDeque02();
		std::cout << std::endl;
	}
}
