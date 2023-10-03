/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rapdos-s <rapdos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 17:58:46 by fmoreira          #+#    #+#             */
/*   Updated: 2023/10/01 13:55:27 by rapdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdio.h>
#include "Common.hpp"

static void displayMenu()
{
    // Atualizei o menu para não parecer que a pessoa pode usar números
    std::cout << "Please Select: \n";
    std::cout << "ADD \n";
    std::cout << "SEARCH \n";
    std::cout << "EXIT \n";
    std::cout << "Option: ";
}

static bool getOptions(PhoneBook *phonebook)
{
    std::string option;
    Contact contact;

    std::cin >> option;
    std::cin.ignore(1, '\n');
    if (option == "EXIT")
        return (false);
    else if (option == "ADD")
    {
        if (contact.populateContact())
            phonebook->saveContact(contact);
    }
    else if (option == "SEARCH")
    {
        phonebook->searchOption();
    }
    else if (std::cin.eof())
    {
        std::cout << std::endl;
        return (false);
    }
    else
    {
        std::cout << "\nInvalid option\n"
                  << std::endl;
                  
    }
    return (true);
}

int main(void)
{
    std::cout << "WELCOME TO MY AWEASOME PHONEBOOK!" << std::endl;
    PhoneBook phonebook;
    while (true)
    {
        displayMenu();
        if (!getOptions(&phonebook))
            break;
    }
}