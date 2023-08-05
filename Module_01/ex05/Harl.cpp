/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 10:18:34 by fmoreira          #+#    #+#             */
/*   Updated: 2023/08/05 08:55:37 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl ()
{
    std::cout << "Harl is ready!" << std::endl;
}

Harl::~Harl ()
{
    std::cout << "Harl is out!" << std::endl;
}

void Harl::complain (std::string level)
{
    std::string levels[] = {"debug", "info", "warning", "error"};
    void (Harl::*function[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    
    size_t i = 0;

    while (i != 4 && level != levels[i])
        i++;

    switch (i)
    {
    case 0:
        (this->*function[0])();
        break;
    case 1:
        (this->*function[1])();
        break;
    case 2:
        (this->*function[2])();
        break;
    case 3:
        (this->*function[3])();
        break;
    default:
        break;
    }
}

void Harl::debug( void )
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't putenough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}