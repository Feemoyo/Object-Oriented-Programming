/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 16:09:40 by fmoreira          #+#    #+#             */
/*   Updated: 2023/10/04 12:55:12 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie ( void )
{
    return ;
}

Zombie::Zombie (const std::string name)
{
    this->_name = name;
    return ;
}

Zombie::~Zombie ()
{
    if (this->_name.empty())
        std::cout << "UnnamedZ: Am I undead and I'm gonna be dead again? Bye-Brain!" <<std::endl;
    else
        std::cout << this->_name + ": Am I undead and I'm gonna be dead again? Bye-Brain!" <<std::endl;
    return ;
}

void Zombie::setName (const std::string name)
{
    this->_name = name;
}

void Zombie::announce ( void )
{
    if (this->_name.empty())
        std::cout << "UnnamedZ: BraiiiiiiinnnzzzZ..." << std::endl;
    else
        std::cout << this->_name + ": BraiiiiiiinnnzzzZ..." << std::endl;
    return ;
}
