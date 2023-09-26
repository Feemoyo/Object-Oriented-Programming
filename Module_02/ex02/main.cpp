/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 08:19:08 by fmoreira          #+#    #+#             */
/*   Updated: 2023/09/26 11:28:42 by fmoreira         ###   ########.fr       */
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

	std::cout << "A = " << a.toFloat() << std::endl;
	std::cout << "B = A.toFloat()" << std::endl;
	std::cout << "I = " << i.toFloat() << std::endl;
	std::cout << "J = I\n"
			  << std::endl;

	std::cout << "\n< and > test" << std::endl;
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

void fourArithmeticOperators()
{
	Fixed a;
	Fixed b;
	Fixed i = 1.25f;
	Fixed j = i;

	a = Fixed(0.75f);
	b = Fixed(a.toFloat());

	std::cout << "A = " << a.toFloat() << std::endl;
	std::cout << "B = A.toFloat()" << std::endl;
	std::cout << "I = " << i.toFloat() << std::endl;
	std::cout << "J = I\n"
			  << std::endl;

	std::cout << "\n+ and - test" << std::endl;
	std::cout << "A + I : " << (a + i) << std::endl;
	std::cout << "B - J : " << (b - j) << std::endl;
	std::cout << "A + B : " << (a + b) << std::endl;
	std::cout << "I - J : " << (i - j) << std::endl;

	std::cout << "\n* and / test" << std::endl;
	std::cout << "A * I : " << (a * i) << std::endl;
	std::cout << "B / J : " << (b / j) << std::endl;
	std::cout << "A * B : " << (a * b) << std::endl;
	std::cout << "I / J : " << (i / j) << std::endl;

	std::cout << "\nDivision by X / 0" << std::endl;
	std::cout << "A / 0 : " << (a / 0) << std::endl;
	std::cout << "B / 0 : " << (b / 0) << std::endl;
	std::cout << "I / 0 : " << (i / 0) << std::endl;
	std::cout << "J / 0 : " << (j / 0) << std::endl;

	std::cout << "\nDivision by 0 / X" << std::endl;
	std::cout << "0 / A : " << (0 / a.toInt()) << std::endl;
	std::cout << "0 / B : " << (0 / b.toFloat()) << std::endl;
	std::cout << "0 / I : " << (0 / i.toInt()) << std::endl;
	std::cout << "0 / J : " << (0 / j.toFloat()) << std::endl;
}

void fourIncrementDecrement()
{
	Fixed a = 0.42f;
	Fixed b = -0.24f;
	Fixed i = 4242;
	Fixed j = -321.123f;

	std::cout << "A = " << a.toFloat() << std::endl;
	std::cout << "B = " << b.toFloat() << std::endl;
	std::cout << "I = " << i.toFloat() << std::endl;
	std::cout << "J = " << j.toFloat() << "\n"
			  << std::endl;

	std::cout << "\nIncrement++" << std::endl;
	std::cout << "A++ + 1000 : " << a++ + 1000 << std::endl;
	std::cout << "B++ + 1000 : " << b++ + 1000 << std::endl;
	std::cout << "I++ + 1000 : " << i++ + 1000 << std::endl;
	std::cout << "J++ + 1000 : " << j++ + 1000 << std::endl;
	std::cout << "A++ : " << a++ << std::endl;
	std::cout << "B++ : " << b++ << std::endl;
	std::cout << "I++ : " << i++ << std::endl;
	std::cout << "J++ : " << j++ << std::endl;

	std::cout << "\n++Increment" << std::endl;
	std::cout << "++A + 1000 : " << ++a + 1000 << std::endl;
	std::cout << "++B + 1000 : " << ++b + 1000 << std::endl;
	std::cout << "++I + 1000 : " << ++i + 1000 << std::endl;
	std::cout << "++J + 1000 : " << ++j + 1000 << std::endl;
	std::cout << "++A : " << ++a << std::endl;
	std::cout << "++B : " << ++b << std::endl;
	std::cout << "++I : " << ++i << std::endl;
	std::cout << "++J : " << ++j << std::endl;

	std::cout << "\nDecrement--" << std::endl;
	std::cout << "A-- + 1000 : " << a-- + 1000 << std::endl;
	std::cout << "B-- + 1000 : " << b-- + 1000 << std::endl;
	std::cout << "I-- + 1000 : " << i-- + 1000 << std::endl;
	std::cout << "J-- + 1000 : " << j-- + 1000 << std::endl;
	std::cout << "A-- : " << a-- << std::endl;
	std::cout << "B-- : " << b-- << std::endl;
	std::cout << "I-- : " << i-- << std::endl;
	std::cout << "J-- : " << j-- << std::endl;

	std::cout << "\n--Decrement" << std::endl;
	std::cout << "--A + 1000 : " << --a + 1000 << std::endl;
	std::cout << "--B + 1000 : " << --b + 1000 << std::endl;
	std::cout << "--I + 1000 : " << --i + 1000 << std::endl;
	std::cout << "--J + 1000 : " << --j + 1000 << std::endl;
	std::cout << "--A : " << --a << std::endl;
	std::cout << "--B : " << --b << std::endl;
	std::cout << "--I : " << --i << std::endl;
	std::cout << "--J : " << --j << std::endl;
}

void memberFunctionMin()
{
	Fixed a;
	Fixed b;
	Fixed const i = 27.25f;
	Fixed const j = i * 3;
	Fixed minA;
	Fixed const minI = Fixed::min(i, j);

	a = Fixed(0.75f);
	b = Fixed(a.toFloat() * 2);
	minA = Fixed::min(a, b);

	std::cout << "A = " << a.toFloat() << std::endl;
	std::cout << "B = A.toFloat() * 2" << std::endl;
	std::cout << "I = " << i.toFloat() << std::endl;
	std::cout << "J = I * 3\n" << std::endl;
	
	std::cout << "Min member function" << std::endl;
	std::cout << "minA(a, b): " << minA.toFloat() << std::endl;
	std::cout << "const minI(i, j): " << minI.toFloat() << std::endl;
}

void memberFunctionMax()
{
	Fixed a;
	Fixed b;
	Fixed const i = 27.25f;
	Fixed const j = i * 3;
	Fixed maxB;
	Fixed const maxJ = Fixed::max(j, i);

	a = Fixed(0.75f);
	b = Fixed(a.toFloat() * 2);
	maxB = Fixed::max(b, a);

	std::cout << "A = " << a.toFloat() << std::endl;
	std::cout << "B = A.toFloat() * 2" << std::endl;
	std::cout << "I = " << i.toFloat() << std::endl;
	std::cout << "J = I * 3\n" << std::endl;
	
	std::cout << "Max member function" << std::endl;
	std::cout << "maxB(b, a): " << maxB.toFloat() << std::endl;
	std::cout << "const maxJ(j, i): " << maxJ.toFloat() << std::endl;
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
	{
		std::cout << "#########################" << std::endl;
		std::cout << "Comparison Operators Test\n"
				  << std::endl;
		fourArithmeticOperators();
		std::cout << "\n\n"
				  << std::endl;
	}
	{
		std::cout << "#########################" << std::endl;
		std::cout << "Increment/Decrement Operators Test\n"
				  << std::endl;
		fourIncrementDecrement();
		std::cout << "\n\n"
				  << std::endl;
	}
	{
		std::cout << "#########################" << std::endl;
		std::cout << "Member function Min Test\n"
				  << std::endl;
		memberFunctionMin();
		std::cout << "\n\n"
				  << std::endl;
	}
	{
		std::cout << "#########################" << std::endl;
		std::cout << "Member function Max Test\n"
				  << std::endl;
		memberFunctionMax();
		std::cout << "\n\n"
				  << std::endl;
	}
}