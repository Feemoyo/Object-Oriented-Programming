/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 15:48:34 by fmoreira          #+#    #+#             */
/*   Updated: 2023/07/15 16:42:13 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int main()
{
    Zombie* horde_00;
    size_t  N_zombies = 10;

    horde_00 = zombieHorde(N_zombies, "Karls");
    
    for (size_t i = 0; i < N_zombies; i++)
    {
        std::cout << "Zombie ";
        std::cout << i << std::endl;
        horde_00[i].announce();
    }
}