/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 14:27:02 by fmoreira          #+#    #+#             */
/*   Updated: 2023/07/17 12:30:41 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

bool    testWeaponGetSet(void)
{
    Weapon      pewpew;
    std::string str1;

    pewpew.setType("Rubber Duck");
    str1 = pewpew.getType();
    std::cout << str1 << std::endl;
    str1 = "Toy Knife";
    std::cout << str1 << std::endl;
    str1 = pewpew.getType();
    std::cout << str1 << std::endl;
    return (0);
}

bool    testWaponConstGetSet ()
{
    Weapon      pewpew;
    std::string str1;
    std::string str2 = " World";

    pewpew.setType("Rubber Duck");
    str1 = pewpew.getType();
    str1.append(str2);
    std::cout << str1 << std::endl;
    str1 = pewpew.getType();
    std::cout << str1 << std::endl;
    return (0);
}

bool    testParamConstructorWeapon ()
{
    Weapon  pewpew = Weapon("Rubber Duck");

    std::cout << pewpew.getType() << std::endl;
    return (0); 
    
}

int main()
{
    {
        std::cout << "Test Weapon class (getType and setType)" << std::endl;
        testWeaponGetSet();
        std::cout << "\n" << std::endl;
    }
    {
        std::cout << "Test Const Get and Set" << std::endl;
        testWaponConstGetSet();
        std::cout << "\n" << std::endl;
    }
    {
        std::cout << "Test Constructor with Param" << std::endl;
        testParamConstructorWeapon();
        std::cout << "\n" << std::endl;
    }
}