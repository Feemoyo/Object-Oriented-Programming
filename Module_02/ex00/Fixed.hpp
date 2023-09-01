/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 08:42:32 by fmoreira          #+#    #+#             */
/*   Updated: 2023/09/01 09:40:57 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
private:
    int                 fixedPoint;
    static const int    fractBits = 8;
    
public:
    Fixed( void);  //constructor
    ~Fixed();           //destructor
    
    Fixed(const Fixed &other); //copy assignment operator overload
    Fixed& operator=(const Fixed &other); //copy constructor
    int getRawBits( void ) const;   //that returns the raw value of the fixed-point value.
    void setRawBits( int const raw );   //that sets the raw value of the fixed-point number.
};

