/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:14:34 by fmoreira          #+#    #+#             */
/*   Updated: 2023/10/26 16:26:30 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
    std::cout << "~Dog Default constructor called." << std::endl;
    this->type = "Dog";
    return ;
}

Dog::~Dog()
{
    std::cout << "~Dog destructor called." << std::endl;
    return ;
}

Dog::Dog(const Dog &other) : Animal()
{
    std::cout << "~Dog copy constructor called." << std::endl;
    this->type = other.getType();
    return ;
}

Dog &Dog::operator=(const Dog &other)
{
    std::cout << "~Dog copy assigment constructor called." << std::endl;
    if (this == &other)
        return (*this);
    this->type = other.getType();
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << this->type << ": BARK BARK!." << std::endl;
    return ;
}

Brain &Dog::getBrain() const
{
    return (*this->brain);
}
