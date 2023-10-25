/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:14:34 by fmoreira          #+#    #+#             */
/*   Updated: 2023/10/25 15:49:59 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
    std::cout << "~Animal Default constructor called." << std::endl;
    this->type = "Animal";
    return ;
}

Animal::~Animal()
{
    std::cout << " ~Animal destructor called." << std::endl;
    return ;
}

Animal::Animal(const Animal &other)
{
    std::cout << "~Animal copy constructor called." << std::endl;
    this->type = other.getType();
    return ;
}

Animal &Animal::operator=(const Animal &other)
{
    std::cout << "~Animal copy assigment constructor called." << std::endl;
    if (this == &other)
        return (*this);
    this->type = other.getType();
    return (*this);
}

void Animal::makeSound() const
{
    std::cout << this->type << ": ???." << std::endl;
    return ;
}

std::string Animal::getType() const
{
    return (this->type);
}
