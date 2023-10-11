/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 08:42:32 by fmoreira          #+#    #+#             */
/*   Updated: 2023/10/07 10:47:41 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    int                 _fixedPoint;
    static const int    _fractBits = 8;
    
public:
    Fixed( void);
    ~Fixed();
    
    Fixed(const Fixed &other);
    Fixed& operator=(const Fixed &other);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};

#endif
