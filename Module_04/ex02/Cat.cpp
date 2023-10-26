/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:14:34 by fmoreira          #+#    #+#             */
/*   Updated: 2023/10/26 17:09:02 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
    std::cout << "~Cat Default constructor called." << std::endl;
    this->type = "Cat";
    return ;
}

Cat::~Cat()
{
    std::cout << "~Cat destructor called." << std::endl;
    return ;
}

Cat::Cat(const Cat &other) : AAnimal()
{
    std::cout << "~Cat copy constructor called." << std::endl;
    this->type = other.getType();
    return ;
}

Cat &Cat::operator=(const Cat &other)
{
    std::cout << "~Cat copy assigment constructor called." << std::endl;
    if (this == &other)
        return (*this);
    this->type = other.getType();
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << this->type << ": meow meow!." << std::endl;
    return ;
}

Brain &Cat::getBrain() const
{
    return (*this->brain);
}
