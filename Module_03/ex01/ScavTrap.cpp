/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 06:51:45 by fmoreira          #+#    #+#             */
/*   Updated: 2023/10/24 10:52:55 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
    std::cout << "~Default ScavTrap constructor called." << std::endl;
    return ;
}

ScavTrap::~ScavTrap()
{
    std::cout << "~Default ScavTrap destructor called." << std::endl;
    return ;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap() 
{
    std::cout << "~Copy constructor ScavTrap called." << std::endl;
    this->_name = other.getName();
    this->_hitPoints = other.getHitPoints();
    this->_energyPoints = other.getEnergyPoints();
    return ;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    std::cout << "~Copy assigment ScavTrap called." << std::endl;
    if (this == &other)
        return (*this);
    this->_name = other.getName();
    this->_hitPoints = other.getHitPoints();
    this->_energyPoints = other.getEnergyPoints();
    return (*this);
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap()
{
    std::cout << "~ScavTrap constructor called." << std::endl;
    this->_maxHP = 100;
    this->_guardGate = false;
    this->_name = name;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    return;
}

void    ScavTrap::guardGate()
{
    if (!this->_guardGate)
    {
        std::cout << this->getName() << " ScavTrap now is in Gate keeper mode." << std::endl;
        this->_guardGate = true;
    }
    else
    {
        std::cout << this->getName() << " ScavTrap is no longer in Gate keeper mode." << std::endl;
        this->_guardGate = false;
    }
}
