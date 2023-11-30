/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:14:34 by fmoreira          #+#    #+#             */
/*   Updated: 2023/11/29 17:20:39 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
    std::cout << "~Cat Default constructor called." << std::endl;
    this->type = "Cat";
    this->brain = new Brain();
    return ;
}

Cat::~Cat()
{
    delete(this->brain);
    std::cout << "~Cat destructor called." << std::endl;
    return ;
}

Cat::Cat(const Cat &other) : Animal()
{ 
    std::cout << "~Cat copy constructor called." << std::endl;
    if (this->brain != NULL)
        delete(this->brain);
    this->type = other.getType();
    this->brain = new Brain(other.getBrain());
    return ;
}

Cat &Cat::operator=(const Cat &other)
{
    std::cout << "~Cat copy assigment constructor called." << std::endl;
    if (this == &other)
        return (*this);
    if (this->brain != NULL)
        delete(this->brain);
    this->type = other.getType();
    this->brain = new Brain(other.getBrain());
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
