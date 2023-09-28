/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 17:58:46 by fmoreira          #+#    #+#             */
/*   Updated: 2023/09/28 10:16:05 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdio.h>
#include "Common.hpp"

static void displayMenu()
{
    std::cout << "Please Select: \n";
    std::cout << "1: ADD \n";
    std::cout << "2: SEARCH \n";
    std::cout << "0: EXIT \n";
    std::cout << "Option: ";
}

static bool getOptions(PhoneBook *phonebook)
{
    char option;
    Contact contact;

    std::cin.get(option);
    std::cin.ignore(1, '\n');
    if (option == '0')
        return false;
    else if (option == '1')
    {
        if (contact.populateContact())
            phonebook->saveContact(contact);
    }
    else if (option == '2')
    {
        phonebook->searchOption();
    }
    else
    {
        std::cout << "\nInvalid option\n"
                  << std::endl;
    }
    return true;
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