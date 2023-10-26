/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:25:36 by fmoreira          #+#    #+#             */
/*   Updated: 2023/10/26 17:08:54 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
private:
    Brain *brain;
    
public:
    Cat(void);
    ~Cat();
    Cat(const Cat &other);
    Cat &operator=(const Cat &other);
    
    void makeSound() const;
    Brain &getBrain() const;
};

#endif
