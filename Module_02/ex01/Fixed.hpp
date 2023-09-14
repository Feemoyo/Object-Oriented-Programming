/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 08:42:32 by fmoreira          #+#    #+#             */
/*   Updated: 2023/09/14 08:11:52 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>
#include <string.h>

class Fixed
{
private:
    int                 _fixedPoint;
    static const int    _fractBits = 8;
    
public:
    Fixed( void );
    ~Fixed();
    
    Fixed(const int integer);
    Fixed(const float floating);
    Fixed(const Fixed &other);
    Fixed& operator=(const Fixed &other);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    float toFloat( void ) const;
    int toInt( void ) const;
};

std::ostream &operator<<(std::ostream &output, const Fixed &fixed);

#endif