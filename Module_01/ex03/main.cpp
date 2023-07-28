/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 14:27:02 by fmoreira          #+#    #+#             */
/*   Updated: 2023/07/19 08:41:10 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

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

bool    testHumanbWithoutWeapon ()
{
    HumanB alisson("Alisson");
    alisson.attack();
    
    return (0);
}

bool    testSubjectHumanA ()
{
    Weapon club = Weapon("crude spiked club");
    
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();
    
    return (0);
}

bool    testSubjectHumanB ()
{
    Weapon club = Weapon("crude spiked club");
    
    HumanB jim("Jim");
    jim.setWeapon(club);
    jim.attack();
    club.setType("some other type of club");
    jim.attack();

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
    {
        std::cout << "Test HumanB without Weapon" << std::endl;
        testHumanbWithoutWeapon();
        std::cout << "\n" << std::endl;
    }
    {
        std::cout << "Test Subject HumanA" << std::endl;
        testSubjectHumanA();
        std::cout << "\n" << std::endl;
    }
    {
        std::cout << "Test Subject HumanB" << std::endl;
        testSubjectHumanB();
        std::cout << "\n" << std::endl;
    }
}