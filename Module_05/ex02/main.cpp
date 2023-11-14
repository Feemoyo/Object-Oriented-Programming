/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 08:41:32 by fmoreira          #+#    #+#             */
/*   Updated: 2023/11/14 18:55:25 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

void    test00( void )
{
    Bureaucrat bureaucrat1("Garl", 75);

    std::cout << "--- Copy constructor ---" << std::endl;
    Bureaucrat bureaucrat2(bureaucrat1);
    std::cout << std::endl;
    
    Bureaucrat bureaucrat3;

    std::cout << "--- Copy assigment ---" << std::endl;
    bureaucrat1 = bureaucrat3;
    std::cout << std::endl;
    
    std::cout << bureaucrat1 << std::endl;
    std::cout << bureaucrat2 << std::endl;
    std::cout << bureaucrat3 << std::endl;
    
    return ;
}

void    test01( void )
{
    Bureaucrat  *bureaucrat;

    try
    {
        bureaucrat = new Bureaucrat("Carl", 0);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    try
    {
        bureaucrat = new Bureaucrat("Larl", 151);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    bureaucrat = new Bureaucrat("Yarl", 1);
    
    delete (bureaucrat);
    return ;
}

void    test02( void )
{
    Bureaucrat  *bureaucrat;
    bureaucrat = new Bureaucrat("Flarl", 1);
    std::cout << *bureaucrat << std::endl;
    try
    {
        bureaucrat->incrementGrade();
        std::cout << *bureaucrat << std::endl;;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        bureaucrat->decrementGrade();
        std::cout << *bureaucrat << std::endl;;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    delete (bureaucrat);
    return ;
}

void    test03( void )
{
    Bureaucrat  *bureaucrat;
    bureaucrat = new Bureaucrat("Zarl", 150);
    std::cout << *bureaucrat << std::endl;
    try
    {
        bureaucrat->decrementGrade();
        std::cout << *bureaucrat << std::endl;;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        bureaucrat->incrementGrade();
        std::cout << *bureaucrat << std::endl;;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    delete (bureaucrat);
    return ;
}

void test04( void )
{
    Bureaucrat carl("Carl", 1);
    ShrubberyCreationForm shruberry00("help me");
    
    carl.signForm(shruberry00);
    std::cout << "--- Copy constructor ---" << std::endl;
    ShrubberyCreationForm shruberry01 = shruberry00;
    shruberry01.execute(carl);
    std::cout << std::endl;

    std::cout << "--- Copy assigment ---" << std::endl;
    ShrubberyCreationForm shruberry02;
    shruberry02 = shruberry01;
    shruberry02.execute(carl);
    carl.signForm(shruberry02);

    std::cout << shruberry00 << std::endl;
    std::cout << shruberry01 << std::endl;
    std::cout << shruberry02 << std::endl;

    return ;
}

void    test05( void )
{
    try
    {
        Bureaucrat carl("Carl0", 146);
        ShrubberyCreationForm formSchrubbery("Farm");

        std::cout << "\n Sign Form \n" << std::endl;
        carl.signForm(formSchrubbery);
        std::cout << "\n Execute Form \n" << std::endl;
        carl.executeForm(formSchrubbery);
        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;
    
    try
    {
        Bureaucrat carl("Carl1", 145);
        ShrubberyCreationForm formSchrubbery("Farm");

        std::cout << "\n Sign Form \n" << std::endl;
        carl.signForm(formSchrubbery);
        std::cout << "\n Execute Form \n" << std::endl;
        carl.executeForm(formSchrubbery);
        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;
    
    try
    {
        Bureaucrat carl("Carl2", 137);
        ShrubberyCreationForm formSchrubbery("Farm");

        std::cout << "\n Sign Form \n" << std::endl;
        carl.signForm(formSchrubbery);
        std::cout << "\n Execute Form \n" << std::endl;
        carl.executeForm(formSchrubbery);
        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;

    try
    {
        Bureaucrat carl("Carl3", 137);
        Bureaucrat jarl("Jarl", 1);
        ShrubberyCreationForm formSchrubbery("Farm");

        std::cout << "\n Sign Form \n" << std::endl;
        carl.signForm(formSchrubbery);
        std::cout << "\n Sign Form (jarl)\n" << std::endl;
        jarl.signForm(formSchrubbery);
        carl.executeForm(formSchrubbery);
        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;

    return ;
}

void    test06( void )
{
    Bureaucrat carl("Jarl", 1);
    RobotomyRequestForm robotomy00("help me");
    
    carl.signForm(robotomy00);
    std::cout << "--- Copy constructor ---" << std::endl;
    RobotomyRequestForm robotomy01 = robotomy00;
    robotomy01.execute(carl);
    std::cout << std::endl;

    std::cout << "--- Copy assigment ---" << std::endl;
    RobotomyRequestForm robotomy02;
    robotomy02 = robotomy01;
    robotomy02.execute(carl);
    carl.signForm(robotomy02);

    std::cout << robotomy00 << std::endl;
    std::cout << robotomy01 << std::endl;
    std::cout << robotomy02 << std::endl;

    return ;
}

void    test07( void )
{
try
    {
        Bureaucrat rarl("Rarl0", 73);
        RobotomyRequestForm formRobotomy("Maybe");

        std::cout << "\n Sign Form \n" << std::endl;
        rarl.signForm(formRobotomy);
        std::cout << "\n Execute Form \n" << std::endl;
        rarl.executeForm(formRobotomy);
        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;
    
    try
    {
        Bureaucrat rarl("Rarl1", 72);
        RobotomyRequestForm formRobotomy("Maybe");

        std::cout << "\n Sign Form \n" << std::endl;
        rarl.signForm(formRobotomy);
        std::cout << "\n Execute Form \n" << std::endl;
        rarl.executeForm(formRobotomy);
        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;
    
    try
    {
        Bureaucrat rarl("Rarl2", 45);
        RobotomyRequestForm formRobotomy("Maybe");

        std::cout << "\n Sign Form \n" << std::endl;
        rarl.signForm(formRobotomy);
        std::cout << "\n Execute Form \n" << std::endl;
        rarl.executeForm(formRobotomy);
        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;

    try
    {
        Bureaucrat rarl("Rarl3", 45);
        Bureaucrat jarl("Jarl", 1);
        RobotomyRequestForm formRobotomy("Maybe");

        std::cout << "\n Sign Form \n" << std::endl;
        rarl.signForm(formRobotomy);
        std::cout << "\n Sign Form (Jarl)\n" << std::endl;
        jarl.signForm(formRobotomy);
        rarl.executeForm(formRobotomy);
        jarl.executeForm(formRobotomy);
        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;

    return ;
}

// void    test08( void )
// {
//     Bureaucrat  bureaucrat1("Carl", 50);
//     Bureaucrat  bureaucrat2("Larl", 1);
//     AForm        AForm1("AForm 42", 50, 1);
//     AForm        AForm2("AForm 24", 1, 1);

//     try
//     {
//         bureaucrat1.signForm(AForm1);
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     try
//     {
//         bureaucrat1.signForm(AForm2);
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     try
//     {
//         bureaucrat2.signForm(AForm1);

//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
    
//     std::cout << std::endl;
//     std::cout << AForm1 << std::endl;
//     std::cout << AForm2 << std::endl;
    
//     return ;
// }

int main()
{
    {
        std::cout << "00 - Teste Bureaucrat Orthodox Canonical" << std::endl;
        test00();
        std::cout << "\n" << std::endl;
    }
    {
        std::cout << "01 - Teste Bureaucrat grade < 1 && grade > 150" << std::endl;
        test01();
        std::cout << "\n" << std::endl;
    }
    {
        std::cout << "02 - Teste Bureaucrat grade 1 decrement and increment" << std::endl;
        test02();
        std::cout << "\n" << std::endl;
    }
    {
        std::cout << "03 - Teste Bureaucrat grade 1 decrement and increment" << std::endl;
        test03();
        std::cout << "\n" << std::endl;
    }
    {
        std::cout << "04.1 - Test ShruberryCreationForm Orthodox Canonical" << std::endl;
        test04();
        std::cout << "\n" << std::endl;
    }
    {
        std::cout << "05.1 - Test ShruberryCreationForm values" << std::endl;
        test05();
        std::cout << "\n" << std::endl;
    }
    {
        std::cout << "06.1 - Test RobotomyRequestForm Orthodox Canonical" << std::endl;
        test06();
        std::cout << "\n" << std::endl;
    }
    {
        std::cout << "07.1 - Test RobotomyRequestForm values" << std::endl;
        test07();
        std::cout << "\n" << std::endl;
    }
    // {
    //     std::cout << "08 - Test Bureaucrat try signAForm()" << std::endl;
    //     test08();
    //     std::cout << "\n" << std::endl;
    // }
}
