/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 15:52:31 by fmoreira          #+#    #+#             */
/*   Updated: 2023/07/16 13:13:47 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
    std::string name;

public:
    Zombie( void );
    ~Zombie();
    
    void    setName(const std::string name);

    Zombie(const std::string name);
    void announce( void );
};

Zombie* zombieHorde( int N, std::string name );

#endif
