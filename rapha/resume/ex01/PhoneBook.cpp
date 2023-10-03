/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 17:51:08 by fmoreira          #+#    #+#             */
/*   Updated: 2023/09/30 11:59:14 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int PhoneBook::_index = 0;
Contact PhoneBook::_contacts[8];

PhoneBook::PhoneBook()
{
	return ;
}

PhoneBook::~PhoneBook()
{
	return ;
}

void PhoneBook::searchOption(){

	PhoneBook contacts;
	int index;

	std::cout << "\nSEARCH OPTION\n" <<std::endl;
	contacts.printList();
	std::cout << "\nChoose contact by index: ";
	std::cin >> index;
	std::cin.ignore(1, '\n');
	if (index < 1 || index > 8)
		std::cout << "\nInvalid Index\n" << std::endl;
	else
		contacts.printContactData(index);
}

void  PhoneBook::saveContact(Contact contact) // #
{
	std::cout << "save contact" << std::endl;
	if (_index > 7)
		_index = 0;
	_contacts[_index] = contact;
	_index++;
	std::cout << "\nContact saved with success\n" << std::endl;
}

void PhoneBook::printList(void)
{
	int i;

	i = 0;
	std::cout << "     Index|" << " Fist Name|" << " Last Name|" << "  Nickname|" << std::endl;
	while (!_contacts[i].getFirstName().empty())
	{
		_printData(_contacts[i], i);		
		i++;
	}
}

void PhoneBook::printContactData(int index)
{
	if (_contacts[index - 1].getFirstName().empty() == true)
		std::cout << "Line is empty\n" << std::endl;
	else 
	{
		std::cout << "index: " << index << std::endl;
		std::cout << "First Name: " << _contacts[index - 1].getFirstName() << std::endl;
		std::cout << "Last Name: " << _contacts[index - 1].getLastName() << std::endl;
		std::cout << "NickName: " << _contacts[index - 1].getNickName() << std::endl;
		std::cout << "Phone Number: " << _contacts[index - 1].getPhoneNumber() << std::endl;
		std::cout << "Darkest Secret: " << _contacts[index - 1].getDarkestSecret() << "\n" << std::endl;
	}
}

std::string PhoneBook::_columnCustomize(std::string str)
{
	int			size;
	std::string	line;

	if (str.length() >= 10)
	{
		line.append(str, 0, 9);
		line.append(".");
	} 
	else
	{
		size = 10 - str.length();
		for (int i = 0; i < size; i++){
			line.append(" ");
		}
		line.append(str);
	}
	return line;
}

void PhoneBook::_printData(Contact contact, int i)
{
	std::cout << "         " << (i + 1) << "|";
	std::cout << _columnCustomize(contact.getFirstName()) << "|";
	std::cout << _columnCustomize(contact.getLastName()) << "|";
	std::cout << _columnCustomize(contact.getNickName()) << "|" << std::endl;

}
