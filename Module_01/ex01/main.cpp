/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 15:48:34 by fmoreira          #+#    #+#             */
/*   Updated: 2023/10/04 13:04:31 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie* zombieHorde( int N, std::string name );

bool    testHordeZombies(size_t numberZombies)
{
    Zombie* horde_00;

    horde_00 = zombieHorde(numberZombies, "Karls");
    
    for (size_t i = 0; i < numberZombies; i++)
    {
        std::cout << "Zombie ";
        std::cout << i << std::endl;
        horde_00[i].announce();
    }
    delete[] horde_00;
     
    return (0);
}

int main()
{
    {
        testHordeZombies(50);
    }
}
