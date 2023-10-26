/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:03:16 by fmoreira          #+#    #+#             */
/*   Updated: 2023/10/26 17:11:22 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal
{
protected:
    std::string type;

public:
    AAnimal(void);
    virtual ~AAnimal();
    AAnimal(const AAnimal &other);
    AAnimal &operator=(const AAnimal &other);

    virtual void makeSound() const = 0;
    std::string getType() const;
};

#endif
