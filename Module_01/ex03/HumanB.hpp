/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 10:30:39 by fmoreira          #+#    #+#             */
/*   Updated: 2023/10/11 08:53:57 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
    std::string _name;
    Weapon*     _weapon;
    
public:
    HumanB(const std::string name);
	HumanB(const std::string name, Weapon &weapon);
    ~HumanB();

    void    attack();
    void    setWeapon(Weapon &weapon);
};

#endif
