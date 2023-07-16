/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 13:48:50 by fmoreira          #+#    #+#             */
/*   Updated: 2023/07/16 14:32:23 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CPP
# define WEAPON_CPP

#include <iostream>

class Weapon
{
private:
    std::string type;

public:
    Weapon( void );
    ~Weapon();

    const std::string&   getType() const;
    void    setType(std::string type);
    
};


#endif