/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 09:13:38 by fmoreira          #+#    #+#             */
/*   Updated: 2023/09/23 10:51:59 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed ( void ) // #Default constructor
{
    // std::cout << "Default constructor called." << std::endl;
    this->_fixedPoint = 0;
    return ;
}

Fixed::Fixed (const int integer) // #Int constructor
{
    // std::cout << "Int constructor called." << std::endl;
    this->_fixedPoint = integer << this->_fractBits;
    return ;
}

Fixed::Fixed (const float floating) //#Float constructor
{
    // std::cout << "Float constructor called." << std::endl;
    this->_fixedPoint = roundf(floating * (float)(1 << this->_fractBits));
    return ;
}

Fixed::~Fixed() // #Default destructor
{
    // std::cout << "Destructor called." << std::endl;
    return ;
}

Fixed::Fixed(const Fixed &other) // #Copy constructor
{
    // std::cout << "Copy constructor called." << std::endl;
    this->_fixedPoint = other.getRawBits();
    return ;
}

Fixed& Fixed::operator=(const Fixed &other) // #Copy assigment constructor
{
    // std::cout << "Copy assignment operator called." << std::endl;
    if (this == &other)
        return (*this);
    this->_fixedPoint = other.getRawBits();
    return (*this);
}

bool    Fixed::operator>(const Fixed &fixed) const // #Operator ">"
{
    if (this->_fixedPoint > fixed.getRawBits())
        return true;
    return false;
}

bool    Fixed::operator<(const Fixed &fixed) const // #Operator "<"
{
    if (this->_fixedPoint < fixed.getRawBits())
        return true;
    return false;
}

bool    Fixed::operator>=(const Fixed &fixed) const // #Operator ">="
{
    if (this->_fixedPoint >= fixed.getRawBits())
        return true;
    return false;
}

bool    Fixed::operator<=(const Fixed &fixed) const // #Operator "<="
{
    if (this->_fixedPoint <= fixed.getRawBits())
        return true;
    return false;
}

bool    Fixed::operator==(const Fixed &fixed) const // #Operator "=="
{
    if (this->_fixedPoint == fixed.getRawBits())
        return true;
    return false;
}

bool    Fixed::operator!=(const Fixed &fixed) const // #Operator "!="
{
    if (this->_fixedPoint != fixed.getRawBits())
        return true;
    return false;
}

Fixed Fixed::operator+(const Fixed &fixed) const // #Operator "+"
{
    return(this->toFloat() + fixed.toFloat());
}

Fixed Fixed::operator-(const Fixed &fixed) const // #Operator "-"
{
    return(this->toFloat() - fixed.toFloat());
}

Fixed Fixed::operator*(const Fixed &fixed) const // #Operator "*"
{
    return(this->toFloat() * fixed.toFloat());
}

Fixed Fixed::operator/(const Fixed &fixed) const // #Operator "/"
{
    return(this->toFloat() / fixed.toFloat());
}

Fixed Fixed::operator++(int) // #Operator var"++"
{
    Fixed aux = *this;
    ++(*this);
    return (aux);
}

Fixed Fixed::operator--(int) // #Operator "--"
{
    Fixed aux = *this;
    --(*this);
    return (aux);
}

Fixed   &Fixed::operator++( void ) // #Operator "++"var
{
    this->_fixedPoint += 1;
    return (*this);
}

Fixed   &Fixed::operator--( void ) // #Operator "--"
{
    this->_fixedPoint -= 1;
    return (*this);
}

Fixed   Fixed::min (Fixed &a, Fixed &b) // #Min Methods
{
    if (a.getRawBits() < b.getRawBits())
        return (a);
    else
        return (b);
}

Fixed   Fixed::max (Fixed &a, Fixed &b) // #Max Methods
{
    if (a.getRawBits() > b.getRawBits())
        return (a);
    else
        return (b);
}

Fixed   Fixed::min (const Fixed &a, const Fixed &b) // #Min Methods (const)
{
    if (a.getRawBits() < b.getRawBits())
        return (a);
    else
        return (b);
}

Fixed   Fixed::max (const Fixed &a, const Fixed &b) // #Max Methods (const)
{
    if (a.getRawBits() > b.getRawBits())
        return (a);
    else
        return (b);
}

int Fixed::getRawBits( void ) const
{
    // std::cout << "getRawBits member function called." << std::endl;
    return (this->_fixedPoint);
}

void Fixed::setRawBits( int const raw )
{
    // std::cout << "setRawBits member function called" << std::endl;
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