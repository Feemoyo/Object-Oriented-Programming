/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 10:18:34 by fmoreira          #+#    #+#             */
/*   Updated: 2023/10/07 09:19:05 by fmoreira         ###   ########.fr       */
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

void Harl::complain (const std::string level)
{
    std::string levels[] = {"debug", "info", "warning", "error", "nothing"};
    void (Harl::*function[5])(void) = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error, &Harl::_nothing};
    
    size_t i = 0;

    while (i != 4 && level != levels[i])
	{
        i++;
	}
	(this->*function[i])();
}

void Harl::_debug( void )
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::_info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't putenough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::_warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::_error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::_nothing( void )
{
    return ;
}
