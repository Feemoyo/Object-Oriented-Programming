/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 10:11:36 by fmoreira          #+#    #+#             */
/*   Updated: 2023/10/07 09:18:15 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARLD_HPP
# define HARLD_HPP

#include <iostream>

class Harl
{
private:
    void _debug ( void );
    void _info ( void );
    void _warning ( void );
    void _error ( void );

public:
    Harl( void );
    ~Harl();

    void complain (std::string level);
};

#endif
