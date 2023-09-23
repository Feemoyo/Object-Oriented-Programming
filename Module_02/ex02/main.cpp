/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 08:19:08 by fmoreira          #+#    #+#             */
/*   Updated: 2023/09/23 11:55:34 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

void subjectTestEx00()
{
	Fixed a;
	Fixed b(a);
	Fixed c;
	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
}

void copyABeforeSet()
{
	Fixed a;
	Fixed b(a);

	a.setRawBits(256);
	std::cout << "A " << a.getRawBits() << std::endl;
	std::cout << "B " << b.getRawBits() << std::endl;
}

void copyAAfterSet()
{
	Fixed a;
	a.setRawBits(256);
	Fixed b(a);
	std::cout << "A " << a.getRawBits() << std::endl;
	std::cout << "B " << b.getRawBits() << std::endl;
}

void copyOperator()
{
	Fixed a;
	a.setRawBits(1024);
	Fixed b;
	b = a;
	std::cout << "A " << a.getRawBits() << std::endl;
	std::cout << "B " << b.getRawBits() << std::endl;
}

void subjectTestEx01()
{
	Fixed a;
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed const d(b);
	a = Fixed(1234.4321f);
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
}

void subjectTest02()
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
}

void sixComparisonOperators()
{
	Fixed a;
	Fixed b;
	Fixed i = 10.0f;
	Fixed j = i;

	a = Fixed(123.456f);
	b = Fixed(a.toFloat());

	std::cout << "\n< and > test" << std::endl;
	std::cout << "A = " << a.toFloat() << std::endl;
	std::cout << "B = A.toFloat()" << std::endl;
	std::cout << "I = " << i.toFloat() << std::endl;
	std::cout << "J = I\n"
			  << std::endl;

	std::cout << "A > I : " << ((a > i) ? "True" : "False") << std::endl;
	std::cout << "B < J : " << ((b < j) ? "True" : "False") << std::endl;
	std::cout << "J > B : " << ((j < b) ? "True" : "False") << std::endl;
	std::cout << "I > A : " << ((i > a) ? "True" : "False") << std::endl;
	std::cout << "A > B : " << ((a > b) ? "True" : "False") << std::endl;
	std::cout << "I < J : " << ((i < j) ? "True" : "False") << std::endl;

	std::cout << "\n<= and >= test" << std::endl;
	std::cout << "A >= I : " << ((a >= i) ? "True" : "False") << std::endl;
	std::cout << "B <= J : " << ((b <= j) ? "True" : "False") << std::endl;
	std::cout << "J >= B : " << ((j <= b) ? "True" : "False") << std::endl;
	std::cout << "I >= A : " << ((i >= a) ? "True" : "False") << std::endl;
	std::cout << "A >= B : " << ((a >= b) ? "True" : "False") << std::endl;
	std::cout << "I <= J : " << ((i <= j) ? "True" : "False") << std::endl;

	std::cout << "\n== and != test" << std::endl;
	std::cout << "A == I : " << ((a == i) ? "True" : "False") << std::endl;
	std::cout << "B != J : " << ((b != j) ? "True" : "False") << std::endl;
	std::cout << "J != B : " << ((j != b) ? "True" : "False") << std::endl;
	std::cout << "I == A : " << ((i == a) ? "True" : "False") << std::endl;
	std::cout << "A == B : " << ((a == b) ? "True" : "False") << std::endl;
	std::cout << "I != J : " << ((i != j) ? "True" : "False") << std::endl;
}

int main(void)
{
	{
		std::cout << "#########################" << std::endl;
		std::cout << "EX00 TEST\n"
				  << std::endl;
		subjectTestEx00();
		std::cout << "\n\n"
				  << std::endl;
	}
	{
		std::cout << "#########################" << std::endl;
		std::cout << "B(A) BEFORE COPY TEST\n"
				  << std::endl;
		copyABeforeSet();
		std::cout << "\n\n"
				  << std::endl;
	}
	{
		std::cout << "#########################" << std::endl;
		std::cout << "B(A) AFTER COPY TEST\n"
				  << std::endl;
		copyAAfterSet();
		std::cout << "\n\n"
				  << std::endl;
	}
	{
		std::cout << "#########################" << std::endl;
		std::cout << "B = A OPERATOR= COPY TEST\n"
				  << std::endl;
		copyOperator();
		std::cout << "\n\n"
				  << std::endl;
	}
	{
		std::cout << "#########################" << std::endl;
		std::cout << "EX01 Test\n"
				  << std::endl;
		subjectTestEx01();
		std::cout << "\n\n"
				  << std::endl;
	}
	{
		std::cout << "#########################" << std::endl;
		std::cout << "EX02 Test\n"
				  << std::endl;
		subjectTest02();
		std::cout << "\n\n"
				  << std::endl;
	}
	{
		std::cout << "#########################" << std::endl;
		std::cout << "Comparison Operators Test\n"
				  << std::endl;
		sixComparisonOperators();
		std::cout << "\n\n"
				  << std::endl;
	}
}