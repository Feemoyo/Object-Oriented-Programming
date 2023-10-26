/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:25:36 by fmoreira          #+#    #+#             */
/*   Updated: 2023/10/26 17:08:49 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
    Brain *brain;
public:
    Dog(void);
    ~Dog();
    Dog(const Dog &other);
    Dog &operator=(const Dog &other);
    
    void makeSound() const;
    Brain &getBrain() const;

};

#endif
