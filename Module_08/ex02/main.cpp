/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 15:44:02 by fmoreira          #+#    #+#             */
/*   Updated: 2024/01/02 16:44:47 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

void	subjectTest00(void)
{
	MutantStack<int> mstack;
	
	mstack.push(5);
	mstack.push(17);
	
	std::cout << "Top: " << mstack.top() << std::endl;
	
	mstack.pop();

	std::cout << "Size: " << mstack.size() << std::endl;
	
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	
	MutantStack<int>::iterator it = mstack.begin();
	std::cout << "Begin: " << *it << std::endl;
	MutantStack<int>::iterator ite = mstack.end();
	std::cout << "End: " << *ite << std::endl;
	
	++it;
	--it;
	std::cout << "While it: " << std::endl;
	while (it != ite)
	{
		std::cout << "\t" << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return ;
}

void	testString01(void)
{
	MutantStack<std::string> mstack;
	
	mstack.push("Hello");
	mstack.push("World");
	
	std::cout << "Top: " << mstack.top() << std::endl;
	
	mstack.pop();

	std::cout << "Size: " << mstack.size() << std::endl;
	
	mstack.push("Marvim");
	mstack.push("The");
	mstack.push("Paranoid");
	mstack.push("Android");
	
	MutantStack<std::string>::iterator it = mstack.begin();
	std::cout << "Begin: " << *it << std::endl;
	MutantStack<std::string>::iterator ite = mstack.end();
	std::cout << "End: " << *ite << std::endl;
	
	++it;
	--it;
	std::cout << "While it: " << std::endl;
	while (it != ite)
	{
		std::cout << "\t" << *it << std::endl;
		++it;
	}
	std::stack<std::string> s(mstack);
	return ;
}

int main()
{
	{
		std::cout << "\n00 - Subject test" << std::endl;
		subjectTest00();
		std::cout << std::endl;
	}
	{
		std::cout << "\n01 - Test string" << std::endl;
		testString01();
		std::cout << std::endl;
	}
}
