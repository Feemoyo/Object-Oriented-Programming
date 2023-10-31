/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:34:30 by fmoreira          #+#    #+#             */
/*   Updated: 2023/10/30 22:35:13 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void    subjectAnimalTest()
{
    //const AAnimal* meta = new AAnimal();
    const AAnimal* j = new Dog();        
    const AAnimal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    // meta->makeSound();
    
    //delete (meta);
    delete (i);
    delete (j);

    return ;
}

void    subjectWrongAnimalTest()
{
    const WrongAnimal* meta = new WrongAnimal();
    const AAnimal* j = new Dog();
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

// void    AanimalTestOrthodoxCanonical()
// {
//     AAnimal AAnimal00;
//     AAnimal* AAnimal01 = new AAnimal();

//     std::cout << "---Copy---" << std::endl;
//     AAnimal AAnimal02 = AAnimal00;
//     std::cout << "---Copy Assigment---" << std::endl;
//     AAnimal00 = *AAnimal01;

//     std::cout << AAnimal00.getType() << std::endl;
//     AAnimal00.makeSound();
//     std::cout << AAnimal01->getType() << std::endl;
//     AAnimal01->makeSound();
//     std::cout << AAnimal02.getType() << std::endl;
//     AAnimal02.makeSound();

//     delete (AAnimal01);
// }

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

void subjectEx01Test()
{
    AAnimal *Aanimal[102];
    for (int i = 0; i < 102; i++)
    {
        std::cout << "AAnimal " << i << ":" << std::endl;
        if (i < 51) 
            Aanimal[i] = new Dog();
        else
            Aanimal[i] = new Cat();
        Aanimal[i]->makeSound();
        std::cout << "\n" << std::endl;
    }
    for (int i = 0; i < 102; i++)
    {
        std::cout << "AAnimal " << i << ":" << std::endl;
        delete Aanimal[i];
    }
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
        //AanimalTestOrthodoxCanonical();
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
    {
        std::cout << "07 - Subject ex01 test." << std::endl;
        subjectEx01Test();
        std::cout << "\n" << std::endl; 
    }
}
