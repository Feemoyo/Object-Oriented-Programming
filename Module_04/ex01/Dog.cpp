/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:14:34 by fmoreira          #+#    #+#             */
/*   Updated: 2023/12/02 07:41:54 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
    std::cout << "~Dog Default constructor called." << std::endl;
    this->type = "Dog";
    this->brain = new Brain();
    return ;
}

Dog::~Dog()
{
    delete(this->brain);
    std::cout << "~Dog destructor called." << std::endl;
    return ;
}

Dog::Dog(const Dog &other) : Animal()
{
    std::cout << "~Dog copy constructor called." << std::endl;
    this->type = other.getType();
    this->brain = new Brain(other.getBrain());
    return ;
}

Dog &Dog::operator=(const Dog &other)
{
    std::cout << "~Dog copy assigment constructor called." << std::endl;
    if (this == &other)
        return (*this);
    if (this->brain != NULL)
        delete(this->brain);
    this->type = other.getType();
    this->brain = new Brain(other.getBrain());
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
