/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 09:13:38 by fmoreira          #+#    #+#             */
/*   Updated: 2023/09/14 09:06:37 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed ( void )
{
    std::cout << "Default constructor called." << std::endl;
    this->_fixedPoint = 0;
    return ;
}

Fixed::Fixed (const int integer)
{
    std::cout << "Int constructor called." << std::endl;
    this->_fixedPoint = integer << this->_fractBits;
    return ;
}

Fixed::Fixed (const float floating)
{
    std::cout << "Float constructor called." << std::endl;
    this->_fixedPoint = roundf(floating * (float)(1 << this->_fractBits));
    return ;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called." << std::endl;
    return ;
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called." << std::endl;
    this->_fixedPoint = other.getRawBits();
    return ;
}

Fixed& Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called." << std::endl;
    if (this == &other)
        return (*this);
    this->_fixedPoint = other.getRawBits();
    return (*this);
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called." << std::endl;
    return (this->_fixedPoint);
}

void Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_fixedPoint = raw;
    return ;
}

float Fixed::toFloat( void ) const
{
    return (roundf(this->_fixedPoint) / (1 << this->_fractBits));
}

int Fixed::toInt( void ) const
{
    return (this->_fixedPoint >> this->_fractBits);
}

std::ostream &operator<<(std::ostream &output, const Fixed &fixed)
{
    output << fixed.toFloat();
    return (output);
}