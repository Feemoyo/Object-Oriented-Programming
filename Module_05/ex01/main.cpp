/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 08:41:32 by fmoreira          #+#    #+#             */
/*   Updated: 2023/11/02 16:13:06 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

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
    Form form00("Form 42", 70, 80);
    
    std::cout << "--- Copy constructor ---" << std::endl;
    Form form01 = form00;
    std::cout << std::endl;

    std::cout << "--- Copy assigment ---" << std::endl;
    Form form02;
    form02 = form01;

    std::cout << form00 << std::endl;
    std::cout << form01 << std::endl;
    std::cout << form02 << std::endl;

    return ;
}

void    test05( void )
{
    try
    {
        Form form("Form 42", 151, 1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Form form("Form 24", 150, -1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return ;
}

void    test06( void )
{
    Bureaucrat  bureaucrat("Carl", 1);
    Form        form("Form 42", 1, 1);

    form.beSigned(bureaucrat);
    std::cout << form << std::endl;
    
    return ;
}

void    test07( void )
{
    Bureaucrat  bureaucrat("Carl", 50);
    Form        form1("Form 42", 51, 1);
    Form        form2("Form 24", 50, 1);
    Form        form3("Form 12", 1, 1);

    try
    {
        form1.beSigned(bureaucrat);
    }
    catch(const std::exception& e)
    {
        std::cerr << "Formm 42 failed: " << e.what() << '\n';
    }
    
    try
    {
        form2.beSigned(bureaucrat);
    }
    catch(const std::exception& e)
    {
        std::cerr << "Formm 24 failed: " << e.what() << '\n';
    }
    
    try
    {
        form3.beSigned(bureaucrat);
    }
    catch(const std::exception& e)
    {
        std::cerr << "Formm 12 failed: " << e.what() << '\n';
    }
    
    std::cout << form1 << std::endl;
    std::cout << form2 << std::endl;
    std::cout << form3 << std::endl;
    
    return ;
}

void    test08( void )
{
    Bureaucrat  bureaucrat1("Carl", 50);
    Bureaucrat  bureaucrat2("Larl", 1);
    Form        form1("Form 42", 50, 1);
    Form        form2("Form 24", 1, 1);

    try
    {
        bureaucrat1.signForm(form1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        bureaucrat1.signForm(form2);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        bureaucrat2.signForm(form1);

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << std::endl;
    std::cout << form1 << std::endl;
    std::cout << form2 << std::endl;
    
    return ;
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
        std::cout << "04 - Test Form Orthodox Canonical" << std::endl;
        test04();
        std::cout << "\n" << std::endl;
    }
    {
        std::cout << "05 - Test Form wrong values" << std::endl;
        test05();
        std::cout << "\n" << std::endl;
    }
    {
        std::cout << "06 - Test Form methods" << std::endl;
        test06();
        std::cout << "\n" << std::endl;
    }
    {
        std::cout << "07 - Test Form try beSigned()" << std::endl;
        test07();
        std::cout << "\n" << std::endl;
    }
    {
        std::cout << "08 - Test Bureaucrat try signForm()" << std::endl;
        test08();
        std::cout << "\n" << std::endl;
    }
}
