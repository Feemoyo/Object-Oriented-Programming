/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 08:41:33 by fmoreira          #+#    #+#             */
/*   Updated: 2023/12/18 08:49:08 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

void testSubject00(void)
{
	int a = 2;
	int b = 3;
	::swap( a, b );
	
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	
	std::string c = "chaine1";
	std::string d = "chaine2";
	
	::swap(c, d);
	
	std::cout << "c = " << c << ", d = " << d << std::endl;
	
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
}

void testSwap(void)
{
	int a = 42;
	int b = 24;

	std::cout << "a = " << a << ", b = " << b << std::endl;
	::swap(a, b);
	std::cout << "swap(a, b)" << std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl;
}

int main(void)
{
	{
		std::cout << "00 - Test subject" << std::endl;
        testSubject00();
        std::cout << "\n" << std::endl;
	}
	{
		std::cout << "01 - Test swap" << std::endl;
        testSwap();
        std::cout << "\n" << std::endl;
	}

	return(0);
}
