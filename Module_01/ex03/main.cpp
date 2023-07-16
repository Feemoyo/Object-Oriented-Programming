/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 14:27:02 by fmoreira          #+#    #+#             */
/*   Updated: 2023/07/16 14:38:22 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

bool testWeaponGetSet(void)
{
    Weapon      pewpew;
    std::string weapon;

    pewpew.setType("Rubber Duck");
    weapon = pewpew.getType();
    std::cout << weapon << std::endl;
    weapon = "Toy Knife";
    std::cout << weapon << std::endl;
    weapon = pewpew.getType();
    std::cout << weapon << std::endl;
    return (0);
}

int main()
{
    {
        std::cout << "Test Weapon class (getType and setType)" << std::endl;
        testWeaponGetSet();
        std::cout << "\n\n" << std::endl;
    }
    
}