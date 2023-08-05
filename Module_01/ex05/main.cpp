/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 10:10:15 by fmoreira          #+#    #+#             */
/*   Updated: 2023/08/05 09:03:24 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

void    testHarlPdf( void )
{
    Harl    harl;

    harl.complain("debug");
    harl.complain("info");
    harl.complain("warning");
    harl.complain("error");
}

void    testHarlWithoutParam( void )
{
    Harl    harl;

    harl.complain("");
}

void    testHarlWithoutMatch( void )
{
    Harl    harl;
    
    harl.complain("a random string");
}

void    testHarlWithoutMatchTwo( void )
{
    Harl    harl;
    
    harl.complain("a random string");
    harl.complain("a second string");
}

int main()
{
    {
        std::cout << "\n1 - PDF default test\n" << std::endl;
        testHarlPdf();
        std::cout << "\n" << std::endl;
    }
    {
        std::cout << "\n2 - Test without param\n" << std::endl;
        testHarlWithoutParam();
        std::cout << "\n" << std::endl;
    }
    {
        std::cout << "\n3 - Test without match\n" << std::endl;
        testHarlWithoutMatch();
        std::cout << "\n" << std::endl;
    }
    {
        std::cout << "\n4 - Test without match 2\n" << std::endl;
        testHarlWithoutMatchTwo();
        std::cout << "\n" << std::endl;
    }
    
    return (0);
}
