/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 15:50:40 by fmoreira          #+#    #+#             */
/*   Updated: 2023/10/04 12:35:20 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie *newZombie(std::string name);
void randomChump(std::string name);


bool testRawZombieClass(void)
{
    Zombie zombie_00;
    zombie_00.announce();
    return (0);
}

Zombie* testNewZombie(void)
{
    Zombie *zombie_01 = newZombie("Carl");
    zombie_01->announce();
    return zombie_01;
}

bool testRandomChump(void)
{
    Zombie zombie_02;
    randomChump("Karen");
    return (0);
}

int main()
{
    {
        std::cout << "\nScope 0" << std::endl;
        testRawZombieClass();
    }
    {
        std::cout << "\nScope 1" << std::endl;
        Zombie* zombie_01 = testNewZombie();
        delete (zombie_01);
    }
    {
        std::cout << "\nScope 2" << std::endl;
        Zombie* zombie_01 = testNewZombie();
        std::cout << "Announced after role scope!" << std::endl;
        zombie_01->announce();
        delete (zombie_01);
    }
    {
        std::cout << "\nScope 3" << std::endl;
        testRandomChump();
    }
}
