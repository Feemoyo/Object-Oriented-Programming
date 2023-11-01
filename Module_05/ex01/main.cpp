/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 08:41:32 by fmoreira          #+#    #+#             */
/*   Updated: 2023/11/01 13:45:57 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

void    test00( void )
{
    Bureaucrat bureaucrat1("Garl", 75);

    std::cout << "--- Copy constructor ---" << std::endl;
    Bureaucrat bureaucrat2(bureaucrat1);
    std::cout << std::endl;
    
    Bureaucrat bureaucrat3;

    std::cout << "--- Copy assigment ---" << std::endl;
    bureaucrat1 = bureaucrat3;
    std::cout << std::endl;
    
    std::cout << bureaucrat1 << std::endl;
    std::cout << bureaucrat2 << std::endl;
    std::cout << bureaucrat3 << std::endl;
}

void    test01( void )
{
    Bureaucrat  *bureaucrat;

    try
    {
        bureaucrat = new Bureaucrat("Carl", 0);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    try
    {
        bureaucrat = new Bureaucrat("Larl", 151);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    bureaucrat = new Bureaucrat("Yarl", 1);
    
    delete (bureaucrat);
}

void    test02( void )
{
    Bureaucrat  *bureaucrat;
    bureaucrat = new Bureaucrat("Flarl", 1);
    std::cout << *bureaucrat << std::endl;
    try
    {
        bureaucrat->incrementGrade();
        std::cout << *bureaucrat << std::endl;;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        bureaucrat->decrementGrade();
        std::cout << *bureaucrat << std::endl;;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    delete (bureaucrat);
}

void    test03( void )
{
    Bureaucrat  *bureaucrat;
    bureaucrat = new Bureaucrat("Zarl", 150);
    std::cout << *bureaucrat << std::endl;
    try
    {
        bureaucrat->decrementGrade();
        std::cout << *bureaucrat << std::endl;;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        bureaucrat->incrementGrade();
        std::cout << *bureaucrat << std::endl;;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    delete (bureaucrat);
}

int main()
{
{
    std::cout << "00 - Teste Bureaucrat Orthodox Canonical" << std::endl;
    test00();
    std::cout << "\n" << std::endl;
 }
 {
    std::cout << "01 - Teste Bureaucrat grade < 1 && grade > 150" << std::endl;
    test01();
    std::cout << "\n" << std::endl;
 }
 {
    std::cout << "02 - Teste Bureaucrat grade 1 decrement and increment" << std::endl;
    test02();
    std::cout << "\n" << std::endl;
 }
 {
    std::cout << "03 - Teste Bureaucrat grade 1 decrement and increment" << std::endl;
    test03();
    std::cout << "\n" << std::endl;
 }
}
