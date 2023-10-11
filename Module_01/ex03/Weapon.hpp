/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 13:48:50 by fmoreira          #+#    #+#             */
/*   Updated: 2023/10/11 08:54:38 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CPP
# define WEAPON_CPP

#include <iostream>

class Weapon
{
private:
    std::string _type;

public:
    Weapon( void );
    ~Weapon();

    Weapon(const std::string type);
    const std::string&   getType() const;
    void    setType(const std::string type);

};

#endif
