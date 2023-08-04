/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 10:11:36 by fmoreira          #+#    #+#             */
/*   Updated: 2023/08/04 10:04:26 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARLD_HPP
# define HARLD_HPP

#include <iostream>

class Harl
{
private:
    void debug ( void );
    void info ( void );
    void warning ( void );
    void error ( void );
    void nothing ( void );

public:
    Harl( void );
    ~Harl();

    void complain (std::string level);
};

#endif
