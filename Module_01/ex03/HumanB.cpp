/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 10:55:08 by fmoreira          #+#    #+#             */
/*   Updated: 2023/07/18 11:47:28 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB (std::string name)
{
    this->_name = name;
    this->_weapon = NULL;
    return ;
}

HumanB::HumanB (std::string name, Weapon &weapon)
{
    this->_name = name;
    this->_weapon = &weapon;
    return ;
}

HumanB::~HumanB ()
{
    return ;
}

void    HumanB::attack ( void )
{
    std::cout << this->_name;
    std::cout << " attacks with their ";
    if (this->_weapon)
        std::cout << this->_weapon->getType() << std::endl;
    else
        std::cout << std::endl;

    return ;
}

void    HumanB::setWeapon (Weapon &weapon)
{
    this->_weapon = &weapon;
    
    return ;
}
