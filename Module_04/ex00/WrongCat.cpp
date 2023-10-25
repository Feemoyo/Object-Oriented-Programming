/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:14:34 by fmoreira          #+#    #+#             */
/*   Updated: 2023/10/25 16:20:59 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
    std::cout << "~WrongCat Default constructor called." << std::endl;
    this->type = "WrongCat";
    return ;
}

WrongCat::~WrongCat()
{
    std::cout << "~WrongCat destructor called." << std::endl;
    return ;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal()
{
    std::cout << "~WrongCat copy constructor called." << std::endl;
    this->type = other.getType();
    return ;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
    std::cout << "~WrongCat copy assigment constructor called." << std::endl;
    if (this == &other)
        return (*this);
    this->type = other.getType();
    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout << this->type << ": WrongMeow WrongMeow!." << std::endl;
    return ;
}
