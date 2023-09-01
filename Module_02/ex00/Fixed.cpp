/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 09:13:38 by fmoreira          #+#    #+#             */
/*   Updated: 2023/09/01 08:20:59 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed ()
{
    this->fixedPoint = 0;
    std::cout << "Default constructor called." << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called." << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
    this->fixedPoint = other.fixedPoint;
    std::cout << "Copy constructor called." << std::endl;
}

Fixed& Fixed::operator=(const Fixed &other)
{
    if (this == &other)
        return (*this);
    this->fixedPoint = other.fixedPoint;
    std::cout << "Copy assignment operator called." << std::endl;
    return (*this);
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called." << std::endl;
    return (this->fixedPoint);
}

void Fixed::setRawBits( int const raw )
{
    this->fixedPoint = raw;
    std::cout << "setRawBits member function called" << std::endl;
}