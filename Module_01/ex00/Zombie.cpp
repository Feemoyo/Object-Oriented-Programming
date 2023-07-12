/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 16:09:40 by fmoreira          #+#    #+#             */
/*   Updated: 2023/07/12 17:33:54 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie ( void )
{
    return ;
}

Zombie::~Zombie ()
{
    if (this->name.empty())
        std::cout << "Unnamed_Z: Am i undead and i'm gonna be dead again? Brain!" <<std::endl;
    else
        std::cout << this->name + ": Am i undead and i'm gonna be dead again? Brain!" <<std::endl;
    return ;
}

void Zombie::announce ( void )
{
    if (this->name.empty())
        std::cout << "Unnamed_Z: BraiiiiiiinnnzzzZ..." << std::endl;
    else
        std::cout << this->name + ": BraiiiiiiinnnzzzZ..." << std::endl;
    return ;
}