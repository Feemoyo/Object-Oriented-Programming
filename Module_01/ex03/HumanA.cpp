/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 08:52:13 by fmoreira          #+#    #+#             */
/*   Updated: 2023/07/18 10:32:40 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
    : _name(name), _weapon(weapon)
{
    return ;
}

HumanA::~HumanA ()
{
    return ;
}

void    HumanA::attack ( void )
{
    std::cout << this->_name;
    std::cout << " attacks with their ";
    std::cout << this->_weapon.getType() << std::endl;

    return ;
}

