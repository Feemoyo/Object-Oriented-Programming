/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 07:24:33 by fmoreira          #+#    #+#             */
/*   Updated: 2023/10/24 05:43:41 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    std::cout << "~Default ClapTrap constructor called." << std::endl;
    this->_name = "";
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
    return ;
}

ClapTrap::~ClapTrap()
{
    std::cout << "~Default ClapTrap destructor called." << std::endl;
    return ;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    std::cout << "~Copy constructor ClapTrap called." << std::endl;
    this->_name = other.getName();
    this->_hitPoints = other.getHitPoints();
    this->_energyPoints = other.getEnergyPoints();
    return;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    std::cout << "~Copy assigment ClapTrap called." << std::endl;
    if (this == &other)
        return (*this);
    this->_name = other.getName();
    this->_hitPoints = other.getHitPoints();
    this->_energyPoints = other.getEnergyPoints();
    return (*this);
}

ClapTrap::ClapTrap(const std::string name)
{
    std::cout << "~ClapTrap constructor called." << std::endl;
    this->_name = name;
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
    return;
}

void    ClapTrap::attack(const std::string &target)
{
    if (!this->_checkAction())
	{
    	std::cout << "ClapTrap " + this->_name + " attacks " + target + ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	}
	return ;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " + this->_name + " took " << amount << " damage." << std::endl;
    this->_hitPoints -= amount;
	return ;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (!this->_checkAction())
    {
        std::cout << "ClapTrap " + this->_name + " healed for " << amount << " hit points." << std::endl;
        this->_hitPoints += amount;
		if (amount > 10)
			this->_hitPoints = 10;
    }
    return ;
}

bool    ClapTrap::_checkAction()
{
    if (this->_hitPoints > 0 && this->_energyPoints > 0)
    {
        this->_energyPoints--;
        return (0);
    }
    else
    {
        if (this->_hitPoints < 1)
            std::cout << "ClapTrap " << this->_name << "no longer has a life." << std::endl;
        if (this->_energyPoints < 1)
            std::cout << "ClapTrap " + this->_name + " has no energy available." << std::endl;
        return (1);
    }
}

std::string ClapTrap::getName() const
{
    return (this->_name);
}

void    ClapTrap::checkHealth() const
{
    if (this->_hitPoints < 1)
    {
        std::cout << "ClapTrap " + this->_name + " is dead." << std::endl;
        return ;    
    }
    std::cout << "ClapTrap " + this->_name + " has " << this->_hitPoints << " life points." << std::endl;
    return ;
}

int    ClapTrap::getHitPoints() const
{
    return (this->_hitPoints);
}

int    ClapTrap::getEnergyPoints() const
{
    return (this->_hitPoints);
}
