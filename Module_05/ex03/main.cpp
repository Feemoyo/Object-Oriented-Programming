/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 08:41:32 by fmoreira          #+#    #+#             */
/*   Updated: 2023/11/15 15:07:37 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

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
    Bureaucrat sarl("Sarl", 1);
    ShrubberyCreationForm shruberry00("help me");
    
    sarl.signForm(shruberry00);
    std::cout << "--- Copy constructor ---" << std::endl;
    ShrubberyCreationForm shruberry01 = shruberry00;
    shruberry01.execute(sarl);
    std::cout << std::endl;

    std::cout << "--- Copy assigment ---" << std::endl;
    ShrubberyCreationForm shruberry02;
    shruberry02 = shruberry01;
    shruberry02.execute(sarl);
    sarl.signForm(shruberry02);

    std::cout << shruberry00 << std::endl;
    std::cout << shruberry01 << std::endl;
    std::cout << shruberry02 << std::endl;

    return ;
}

void    test05( void )
{
    try
    {
        Bureaucrat sarl("Sarl0", 146);
        ShrubberyCreationForm formSchrubbery("Farm");

        std::cout << "\n Sign Form \n" << std::endl;
        sarl.signForm(formSchrubbery);
        std::cout << "\n Execute Form \n" << std::endl;
        sarl.executeForm(formSchrubbery);
        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;
    
    try
    {
        Bureaucrat sarl("Sarl1", 145);
        ShrubberyCreationForm formSchrubbery("Farm");

        std::cout << "\n Sign Form \n" << std::endl;
        sarl.signForm(formSchrubbery);
        std::cout << "\n Execute Form \n" << std::endl;
        sarl.executeForm(formSchrubbery);
        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;
    
    try
    {
        Bureaucrat sarl("Sarl2", 137);
        ShrubberyCreationForm formSchrubbery("Farm");

        std::cout << "\n Sign Form \n" << std::endl;
        sarl.signForm(formSchrubbery);
        std::cout << "\n Execute Form \n" << std::endl;
        sarl.executeForm(formSchrubbery);
        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;

    try
    {
        Bureaucrat sarl("Sarl3", 137);
        Bureaucrat jarl("Jarl", 1);
        ShrubberyCreationForm formSchrubbery("Farm");

        std::cout << "\n Sign Form \n" << std::endl;
        sarl.signForm(formSchrubbery);
        std::cout << "\n Sign Form (jarl)\n" << std::endl;
        jarl.signForm(formSchrubbery);
        sarl.executeForm(formSchrubbery);
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
    Bureaucrat rarl("Rarl", 1);
    RobotomyRequestForm robotomy00("help me");
    
    rarl.signForm(robotomy00);
    std::cout << "--- Copy constructor ---" << std::endl;
    RobotomyRequestForm robotomy01 = robotomy00;
    robotomy01.execute(rarl);
    std::cout << std::endl;

    std::cout << "--- Copy assigment ---" << std::endl;
    RobotomyRequestForm robotomy02;
    robotomy02 = robotomy01;
    robotomy02.execute(rarl);
    rarl.signForm(robotomy02);

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

void    test08( void )
{
    Bureaucrat parl("Parl", 1);
    PresidentialPardonForm pardon00("help me");
    
    parl.signForm(pardon00);
    std::cout << "--- Copy constructor ---" << std::endl;
    PresidentialPardonForm pardon01 = pardon00;
    pardon01.execute(parl);
    std::cout << std::endl;

    std::cout << "--- Copy assigment ---" << std::endl;
    PresidentialPardonForm pardon02;
    pardon02 = pardon01;
    pardon02.execute(parl);
    parl.signForm(pardon02);

    std::cout << pardon00 << std::endl;
    std::cout << pardon01 << std::endl;
    std::cout << pardon02 << std::endl;

    return ;
}

void    test09( void )
{
try
    {
        Bureaucrat parl("Parl0", 26);
        PresidentialPardonForm formPardon("Norminette");

        std::cout << "\n Sign Form \n" << std::endl;
        parl.signForm(formPardon);
        std::cout << "\n Execute Form \n" << std::endl;
        parl.executeForm(formPardon);
        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;
    
    try
    {
        Bureaucrat parl("Parl1", 25);
        PresidentialPardonForm formPardon("Norminette");

        std::cout << "\n Sign Form \n" << std::endl;
        parl.signForm(formPardon);
        std::cout << "\n Execute Form \n" << std::endl;
        parl.executeForm(formPardon);
        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;
    
    try
    {
        Bureaucrat parl("Parl2", 5);
        PresidentialPardonForm formPardon("Norminette");

        std::cout << "\n Sign Form \n" << std::endl;
        parl.signForm(formPardon);
        std::cout << "\n Execute Form \n" << std::endl;
        parl.executeForm(formPardon);
        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;

    try
    {
        Bureaucrat parl("Parl3", 5);
        Bureaucrat jarl("Jarl", 1);
        PresidentialPardonForm formPardon("Norminette");

        std::cout << "\n Sign Form \n" << std::endl;
        parl.signForm(formPardon);
        std::cout << "\n Sign Form (Jarl)\n" << std::endl;
        jarl.signForm(formPardon);
        parl.executeForm(formPardon);
        jarl.executeForm(formPardon);
        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;

    return ;
}

void        test10( void )
{
    Intern  marvim;
    
    try
    {
        Bureaucrat sarl("Sarl", 136);
        AForm *shrubbery = marvim.makeForm("shrubbery creation", "Bender");
        sarl.signForm(*shrubbery);
        sarl.executeForm(*shrubbery);
        
        if (shrubbery)
            delete (shrubbery);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        Bureaucrat rarl("Rarl", 44);
        AForm *robotomy = marvim.makeForm("robotomy request", "Bender");
        rarl.signForm(*robotomy);
        rarl.executeForm(*robotomy);

        if (robotomy)
            delete (robotomy);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        Bureaucrat parl("Parl", 44);
        AForm *pardon = marvim.makeForm("presidential pardon", "Bender");
        parl.signForm(*pardon);
        parl.executeForm(*pardon);

        if (pardon)
            delete (pardon);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        Bureaucrat eofarl("eofarl", 44);
        AForm *random = marvim.makeForm("ablubblelbelble", "Bender");
        std::cout << "\n pointer aa " << random << std::endl;
        eofarl.signForm(*random);
        std::cout << "\n ate aqui NAO funfa \n" << std::endl;
        eofarl.executeForm(*random);

        if (random)
            delete (random);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

}

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
    {
        std::cout << "08.1 - Test PresidentialPardonForm Orthodox Canonical" << std::endl;
        test08();
        std::cout << "\n" << std::endl;
    }
    {
        std::cout << "09 - Test PresidentialPardonForm values" << std::endl;
        test09();
        std::cout << "\n" << std::endl;
    }
    {
        std::cout << "10 - Test Intern" << std::endl;
        test10();
        std::cout << "\n" << std::endl;
    }
    return (0);
}
