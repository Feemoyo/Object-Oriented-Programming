/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 10:53:53 by fmoreira          #+#    #+#             */
/*   Updated: 2023/10/31 17:39:09 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

bool FragTrap::_highFive = false;

FragTrap::FragTrap(void)
{
    std::cout << "~Default FragTrap constructor called." << std::endl;
    return ;
}

FragTrap::~FragTrap()
{
    std::cout << "~Default FragTrap destructor called." << std::endl;
    return ;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap()
{
    std::cout << "~Copy constructor FragTrap" << std::endl;
    this->_name = other.getName();
    this->_hitPoints = other.getHitPoints();
    this->_energyPoints = other.getEnergyPoints();
    return ;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    std::cout << "~Capy assigment FragTrap called." << std::endl;
    if (this == &other)
        return (*this);
    this->_name = other.getName();
    this->_hitPoints = other.getHitPoints();
    this->_energyPoints = other.getEnergyPoints();
    return (*this);
}

FragTrap::FragTrap(const std::string name) : ClapTrap()
{
    std::cout << "~FragTrap constructor called." << std::endl;
    this->_maxHP = 100;
    this->_name = name;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    return ;
}

void    FragTrap::attack(const std::string &target)
{
    if (!this->_checkAction())
	{
    	std::cout << "FragTrap " + this->_name + " attacks " + target + ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	}
	return ;
}

void    FragTrap::highFiveGuys(void)
{
    if (!this->_highFive)
    {
        std::cout << this->_name << ": C`mon guys HIGH FIVE!" << std::endl;
        this->_highFive = true;
    }
    else
    {
        std::cout << this->_name << ": YEAAAH!" << std::endl;
        this->_highFive = false;
    }
    return ;
}
