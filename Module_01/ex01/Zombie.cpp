/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 16:09:40 by fmoreira          #+#    #+#             */
/*   Updated: 2023/07/16 13:13:39 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie ( void )
{
    return ;
}

Zombie::Zombie (const std::string name)
{
    this->name = name;
    return ;
}

Zombie::~Zombie ()
{
    if (this->name.empty())
        std::cout << "Unnamed_Z: Am I undead and I'm gonna be dead again? Bye-Brain!" <<std::endl;
    else
        std::cout << this->name + ": Am I undead and I'm gonna be dead again? Bye-Brain!" <<std::endl;
    return ;
}

void Zombie::setName (const std::string name)
{
    this->name = name;
}

void Zombie::announce ( void )
{
    if (this->name.empty())
        std::cout << "Unnamed_Z: BraiiiiiiinnnzzzZ..." << std::endl;
    else
        std::cout << this->name + ": BraiiiiiiinnnzzzZ..." << std::endl;
    return ;
}