/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 15:48:31 by fmoreira          #+#    #+#             */
/*   Updated: 2023/07/28 11:26:23 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <cstdio>

Zombie* zombieHorde( int N, std::string name )
{
    Zombie* horde = new Zombie[N];
    
    for (int i = 0; i < N; i++)
    {
        horde[i].setName(name);
    }
    return (horde);
}