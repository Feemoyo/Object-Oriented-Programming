/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:14:34 by fmoreira          #+#    #+#             */
/*   Updated: 2023/10/25 16:17:25 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
    std::cout << "~WrongAnimal Default constructor called." << std::endl;
    this->type = "WrongAnimal";
    return ;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << " ~WrongAnimal destructor called." << std::endl;
    return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
    std::cout << "~WrongAnimal copy constructor called." << std::endl;
    this->type = other.getType();
    return ;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
    std::cout << "~WrongAnimal copy assigment constructor called." << std::endl;
    if (this == &other)
        return (*this);
    this->type = other.getType();
    return (*this);
}

void WrongAnimal::makeSound() const
{
    std::cout << this->type << ": ???." << std::endl;
    return ;
}

std::string WrongAnimal::getType() const
{
    return (this->type);
}
