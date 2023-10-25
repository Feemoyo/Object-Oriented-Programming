/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 08:27:50 by fmoreira          #+#    #+#             */
/*   Updated: 2023/10/25 12:34:50 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

void testOrthodoxCanonical(std::string name)
{
    ClapTrap clapTrap00;
    ClapTrap clapTrap01(name);

    std::cout << "---Copy---" << std::endl;
    ClapTrap clapTrap02 = clapTrap01;
    std::cout << "---Copy Assigment---" << std::endl;
    clapTrap00 = clapTrap02;

    std::cout << "ClapTrap 00: " << clapTrap00.getName() << std::endl;
    std::cout << "ClapTrap 01: " << clapTrap01.getName() << std::endl;
    std::cout << "ClapTrap 02: " << clapTrap02.getName() << std::endl;

    return ;
}

void basicTestAttack(std::string name)
{
    ClapTrap clapTrap00(name);


    for(int i = 0; i < 15; i++)
        clapTrap00.attack("Random chump");
    return ;
}

void takeDamageTest(std::string name)
{
    ClapTrap clapTrap00(name);
    ClapTrap clapTrap01("Other x1 " + name);
    ClapTrap clapTrap02("Other x2 " + name);
    ClapTrap clapTrap03("Other x3 " + name);
    

    clapTrap00.takeDamage(9);
    clapTrap00.checkHealth();
    
    clapTrap01.takeDamage(10);
    clapTrap01.checkHealth();

    clapTrap02.takeDamage(11);
    clapTrap02.checkHealth();

    clapTrap03.takeDamage(11);
    clapTrap03.takeDamage(12);
    clapTrap03.checkHealth();
    return ;
}

void    beRepairedTest(std::string name)
{
    ClapTrap clapTrap00(name);
    ClapTrap clapTrap01("Other x1 " + name);
    ClapTrap clapTrap02("Other x2 " + name);
    ClapTrap clapTrap03("Other x3 " + name);
    

    clapTrap00.takeDamage(9);
    clapTrap00.checkHealth();
    clapTrap00.beRepaired(-10);
    clapTrap00.checkHealth();
    
    clapTrap01.takeDamage(10);
    clapTrap01.checkHealth();
    clapTrap01.beRepaired(1000);
    clapTrap01.checkHealth();

    clapTrap02.takeDamage(11);
    clapTrap02.checkHealth();
    clapTrap02.beRepaired(1000);
    clapTrap02.checkHealth();

    clapTrap03.takeDamage(9);
    clapTrap03.checkHealth();
    clapTrap03.beRepaired(5);
    clapTrap03.checkHealth();

    return ;
}

void    testCopyAfterDamage(std::string name)
{
    ClapTrap clapTrap00(name);
    ClapTrap clapTrap01;
    ClapTrap clapTrap03;
    
    clapTrap00.takeDamage(9);
    clapTrap00.checkHealth();
    clapTrap00.beRepaired(-10);
    clapTrap00.checkHealth();

    clapTrap01 = clapTrap00;

    std::cout << "Copy" << std::endl;
    clapTrap01.checkHealth();
    
    ClapTrap clapTrap02("Other x2 " + name);

    clapTrap02.takeDamage(5);
    clapTrap02.checkHealth();
    clapTrap02.beRepaired(2);
    clapTrap02.checkHealth();

    clapTrap03 = clapTrap02;

    std::cout << "Copy" << std::endl;
    clapTrap03.checkHealth();
    
}

void    testCopyAssigmentAfterDamage(std::string name)
{
    ClapTrap clapTrap00(name);
    
    clapTrap00.takeDamage(9);
    clapTrap00.checkHealth();
    clapTrap00.beRepaired(-10);
    clapTrap00.checkHealth();

    ClapTrap clapTrap01 = clapTrap00;

    std::cout << "Copy Assigment" << std::endl;
    clapTrap01.checkHealth();
    
    ClapTrap clapTrap02("Other x2 " + name);

    clapTrap02.takeDamage(8);
    clapTrap02.checkHealth();
    clapTrap02.beRepaired(1);
    clapTrap02.checkHealth();

    ClapTrap clapTrap03 = clapTrap02;

    std::cout << "Copy Assigment" << std::endl;
    clapTrap03.checkHealth();
    
}

void    scavTestOrthodoxCanonical(std::string name)
{
    ScavTrap scavTrap00;
    ScavTrap scavTrap01(name);

    std::cout << "---Copy---" << std::endl;
    ScavTrap scavTrap02 = scavTrap01;
    std::cout << "---Copy Assigment---" << std::endl;
    scavTrap00 = scavTrap02;

    std::cout << "ScavTrap 00: " << scavTrap00.getName() << std::endl;
    std::cout << "ScavTrap 01: " << scavTrap01.getName() << std::endl;
    std::cout << "ScavTrap 02: " << scavTrap02.getName() << std::endl;
}

void    scavMethodsTest(std::string name)
{
    ScavTrap scavTrap00(name);

    scavTrap00.checkHealth();
    scavTrap00.attack("Norminette");
    scavTrap00.takeDamage(99);
    scavTrap00.checkHealth();
    scavTrap00.beRepaired(98);
    scavTrap00.checkHealth();
    scavTrap00.guardGate();
    scavTrap00.guardGate();
}

void    fragTestOrthodoxCanonical(std::string name)
{
    FragTrap fragTrap00;
    FragTrap fragTrap01(name);

    std::cout << "---Copy---" << std::endl;
    FragTrap fragTrap02 = fragTrap01;
    std::cout << "---Copy Assigment---" << std::endl;
    fragTrap00 = fragTrap02;

    std::cout << "fragTrap 00: " << fragTrap00.getName() << std::endl;
    std::cout << "fragTrap 01: " << fragTrap01.getName() << std::endl;
    std::cout << "fragTrap 02: " << fragTrap02.getName() << std::endl;
}

void    fragMethodsTest(std::string name)
{
    FragTrap fragTrap00(name);
    FragTrap fragTrap01("unnamed");

    fragTrap00.checkHealth();
    fragTrap00.attack("Norminette");
    fragTrap00.takeDamage(99);
    fragTrap00.checkHealth();
    fragTrap00.beRepaired(98);
    fragTrap00.checkHealth();
    fragTrap00.highFiveGuys();
    fragTrap01.highFiveGuys();
    
}

int main()
{
    {
        std::cout << "00 - Testing Orthodox Canonical!\n" << std::endl;
        testOrthodoxCanonical("Grey");
        std::cout << "\n" << std::endl;
    }
    {
        std::cout << "01 - Basic test with attack method!\n" << std::endl;
        basicTestAttack("Cian");
        std::cout << "\n" << std::endl;
    }
    {
        std::cout << "02 - Test takeDamage method!\n" << std::endl;
        takeDamageTest("Aero");
        std::cout << "\n" << std::endl;
    }
    {
        std::cout << "03 - Test beRepaired method!\n" << std::endl;
        beRepairedTest("Alizarin");
        std::cout << "\n" << std::endl;
    }
    {
        std::cout << "04 - Test Copy after take damage method!\n" << std::endl;
        testCopyAfterDamage("Brown");
        std::cout << "\n" << std::endl;
    }
    {
        std::cout << "05 - Test Assigment Copy after take damage method!\n" << std::endl;
        testCopyAssigmentAfterDamage("Black");
        std::cout << "\n" << std::endl;
    }
    {
        std::cout << "06 - ScavTrap Testing Orthodox Canonical!\n" << std::endl;
        scavTestOrthodoxCanonical("Purple");
        std::cout << "\n" << std::endl;
    }
    {
        std::cout << "07 - ScavTrap testing methods\n" << std::endl;
        scavMethodsTest("Cian");
        std::cout << "\n" << std::endl;
    }
    {
        std::cout << "08 - ScavTrap Testing Orthodox Canonical!\n" << std::endl;
        fragTestOrthodoxCanonical("Purple");
        std::cout << "\n" << std::endl;
    }
    {
        std::cout << "09 - ScavTrap testing methods\n" << std::endl;
        fragMethodsTest("Cian");
        std::cout << "\n" << std::endl;
    }

    return (0);
}