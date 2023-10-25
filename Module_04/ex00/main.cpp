/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:34:30 by fmoreira          #+#    #+#             */
/*   Updated: 2023/10/25 17:29:33 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void    subjectAnimalTest()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();        
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    
    delete (meta);
    delete (i);
    delete (j);

    return ;
}

void    subjectWrongAnimalTest()
{
    const WrongAnimal* meta = new WrongAnimal();
    const Animal* j = new Dog();
    const WrongAnimal* i = new WrongCat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();

    delete (meta);
    delete (i);
    delete (j);

    return ;
}

void    animalTestOrthodoxCanonical()
{
    Animal Animal00;
    Animal* Animal01 = new Animal();

    std::cout << "---Copy---" << std::endl;
    Animal Animal02 = Animal00;
    std::cout << "---Copy Assigment---" << std::endl;
    Animal00 = *Animal01;

    std::cout << Animal00.getType() << std::endl;
    Animal00.makeSound();
    std::cout << Animal01->getType() << std::endl;
    Animal01->makeSound();
    std::cout << Animal02.getType() << std::endl;
    Animal02.makeSound();

    delete (Animal01);
}

void    catTestOrthodoxCanonical()
{
    Cat Cat00;
    Cat Cat01;

    std::cout << "---Copy---" << std::endl;
    Cat Cat02 = Cat01;
    std::cout << "---Copy Assigment---" << std::endl;
    Cat00 = Cat02;

    std::cout << Cat00.getType() << std::endl;
    Cat00.makeSound();
    std::cout << Cat01.getType() << std::endl;
    Cat01.makeSound();
    std::cout << Cat02.getType() << std::endl;
    Cat02.makeSound();
}

void    dogTestOrthodoxCanonical()
{
    Dog Dog00;
    Dog Dog01;

    std::cout << "---Copy---" << std::endl;
    Dog Dog02 = Dog01;
    std::cout << "---Copy Assigment---" << std::endl;
    Dog00 = Dog02;

    std::cout << Dog00.getType() << std::endl;
    Dog00.makeSound();
    std::cout << Dog01.getType() << std::endl;
    Dog01.makeSound();
    std::cout << Dog02.getType() << std::endl;
    Dog02.makeSound();
}

void    wrongCatTestOrthodoxCanonical()
{
    WrongCat WrongCat00;
    WrongCat WrongCat01;

    std::cout << "---Copy---" << std::endl;
    WrongCat WrongCat02 = WrongCat01;
    std::cout << "---Copy Assigment---" << std::endl;
    WrongCat00 = WrongCat02;

    std::cout << WrongCat00.getType() << std::endl;
    WrongCat00.makeSound();
    std::cout << WrongCat01.getType() << std::endl;
    WrongCat01.makeSound();
    std::cout << WrongCat02.getType() << std::endl;
    WrongCat02.makeSound();
}

void    wrondAnimalTestOrthodoxCanonical()
{
    WrongAnimal WrongAnimal00;
    WrongAnimal* WrongAnimal01 = new WrongAnimal();

    std::cout << "---Copy---" << std::endl;
    WrongAnimal WrongAnimal02 = WrongAnimal00;
    std::cout << "---Copy Assigment---" << std::endl;
    WrongAnimal00 = *WrongAnimal01;

    std::cout << WrongAnimal00.getType() << std::endl;
    WrongAnimal00.makeSound();
    std::cout << WrongAnimal01->getType() << std::endl;
    WrongAnimal01->makeSound();
    std::cout << WrongAnimal02.getType() << std::endl;
    WrongAnimal02.makeSound();
    delete (WrongAnimal01);
}

int main()
{
    {
        std::cout << "00 - Subject Animal test." << std::endl;
        subjectAnimalTest();
        std::cout << "\n" << std::endl; 
    }
    {
        std::cout << "01 - Subject WrongAnimal test." << std::endl;
        subjectWrongAnimalTest();
        std::cout << "\n" << std::endl; 
    }
    {
        std::cout << "02 - Orthodox Canonical methods Animal test." << std::endl;
        animalTestOrthodoxCanonical();
        std::cout << "\n" << std::endl; 
    }
    {
        std::cout << "03 - Orthodox Canonical methods Cat test." << std::endl;
        catTestOrthodoxCanonical();
        std::cout << "\n" << std::endl; 
    }
    {
        std::cout << "04 - Orthodox Canonical methods Dog test." << std::endl;
        dogTestOrthodoxCanonical();
        std::cout << "\n" << std::endl; 
    }
    {
        std::cout << "05 - Orthodox Canonical methods WrongAnimal test." << std::endl;
        wrondAnimalTestOrthodoxCanonical();
        std::cout << "\n" << std::endl; 
    }
    {
        std::cout << "06 - Orthodox Canonical methods WrongCat test." << std::endl;
        wrongCatTestOrthodoxCanonical();
        std::cout << "\n" << std::endl; 
    }
}
