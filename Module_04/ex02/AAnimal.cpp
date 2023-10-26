/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:14:34 by fmoreira          #+#    #+#             */
/*   Updated: 2023/10/26 17:08:21 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void)
{
    std::cout << "~AAnimal Default constructor called." << std::endl;
    this->type = "AAnimal";
    return ;
}

AAnimal::~AAnimal()
{
    std::cout << " ~AAnimal destructor called." << std::endl;
    return ;
}

AAnimal::AAnimal(const AAnimal &other)
{
    std::cout << "~AAnimal copy constructor called." << std::endl;
    this->type = other.getType();
    return ;
}

AAnimal &AAnimal::operator=(const AAnimal &other)
{
    std::cout << "~AAnimal copy assigment constructor called." << std::endl;
    if (this == &other)
        return (*this);
    this->type = other.getType();
    return (*this);
}

void AAnimal::makeSound() const
{
    std::cout << this->type << ": ???." << std::endl;
    return ;
}

std::string AAnimal::getType() const
{
    return (this->type);
}
