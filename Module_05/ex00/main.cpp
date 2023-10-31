/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 08:41:32 by fmoreira          #+#    #+#             */
/*   Updated: 2023/10/27 15:07:30 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

void    test00( void )
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

    delete bureaucrat;
}

int main()
{
 {
    std::cout << "00 - Teste Bureaucrat grade < 1 && grade > 150" << std::endl;
    test00();
    std::cout << "\n" << std::endl;
 }   
}
