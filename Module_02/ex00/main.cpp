/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 08:19:08 by fmoreira          #+#    #+#             */
/*   Updated: 2023/09/01 09:50:37 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

void subjectTest()
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

int main(void)
{
    {
        std::cout << "PDF TEST\n"
                  << std::endl;
        subjectTest();
        std::cout << "\n\n"
                  << std::endl;
    }
    {
        std::cout << "B(A) BEFORE COPY TEST\n"
                  << std::endl;
        copyABeforeSet();
        std::cout << "\n\n"
                  << std::endl;
    }
    {
        std::cout << "B(A) AFTER COPY TEST\n"
                  << std::endl;
        copyAAfterSet();
        std::cout << "\n\n"
                  << std::endl;
    }
    {
        std::cout << "B = A OPERATOR= COPY TEST\n"
                  << std::endl;
        copyOperator();
        std::cout << "\n\n"
                  << std::endl;
    }
}