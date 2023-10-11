/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 14:07:50 by fmoreira          #+#    #+#             */
/*   Updated: 2023/10/11 08:54:58 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon ( void )
{
    return ;
}

Weapon::~Weapon ()
{
    return ;
}

Weapon::Weapon (const std::string type)
{
    this->setType(type);
    return ;
}

const std::string& Weapon::getType () const
{
    return this->_type;
}

void Weapon::setType (const std::string type)
{
    this->_type = type;
}
