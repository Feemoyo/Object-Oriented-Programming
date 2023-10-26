/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 06:39:36 by fmoreira          #+#    #+#             */
/*   Updated: 2023/10/26 16:06:35 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "~Default Brain constructor called." << std::endl;
    return ;
}

Brain::~Brain()
{
    std::cout << "~Default Brain destructor called." << std::endl;
    return ;
}

Brain::Brain(const Brain &other)
{
    std::cout << "~Brain copy constructor called." << std::endl;
    *this = other;
    return ;
}


Brain &Brain::operator=(const Brain &other)
{
    std::cout << "~Brain copy assigment constructor called." << std::endl;
    if (this == &other)
        return (*this);
    for (int i = 0; i < 100; i++)
        this->ideas[i] = other.ideas[i];
    return (*this);
}
