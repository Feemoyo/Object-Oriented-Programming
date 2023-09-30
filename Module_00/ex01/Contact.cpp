/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 11:12:19 by fmoreira          #+#    #+#             */
/*   Updated: 2023/09/30 13:33:36 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	return;
}

Contact::~Contact()
{
	return;
}

Contact::Contact(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret)
{
	this->_firstName = firstName;
	this->_lastName = lastName;
	this->_nickName = nickName;
	this->_phoneNumber = phoneNumber;
	this->_darkestSecret = darkestSecret;
}

std::string Contact::getFirstName()
{
	return (this->_firstName);
}

std::string Contact::getLastName()
{
	return (this->_lastName);
}

std::string Contact::getNickName()
{
	return (this->_nickName);
}

std::string Contact::getPhoneNumber()
{
	return (this->_phoneNumber);
}

std::string Contact::getDarkestSecret()
{
	return (this->_darkestSecret);
}

bool Contact::populateContact()
{
	std::cout << "\nADD OPTION\n"
			  << std::endl;
	std::cout << "Fist name: ";
	std::getline(std::cin, this->_firstName);
	std::cout << "Last name: ";
	std::getline(std::cin, this->_lastName);
	std::cout << "Nickname: ";
	std::getline(std::cin, this->_nickName);
	std::cout << "Phone number (numbers only): ";
	std::getline(std::cin, this->_phoneNumber);
	std::cout << "Darkest secret: ";
	std::getline(std::cin, this->_darkestSecret);

	if (!checker(this->_firstName, this->_lastName, this->_nickName, this->_phoneNumber, this->_darkestSecret))
		return (false);

	return (true);
}

Contact &Contact::returnContact()
{
	return (*this);
}

bool Contact::isBlank(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret)
{
	if (firstName.empty())
	{
		std::cout << "\nFirst name can't be blank" << std::endl;
		return (false);
	}
	else if (lastName.empty())
	{
		std::cout << "\nLast name can't be blank" << std::endl;
		return (false);
	}
	else if (nickName.empty())
	{
		std::cout << "\nNick name can't be blank" << std::endl;
		return (false);
	}
	else if (phoneNumber.empty())
	{
		std::cout << "\nPhone number can't be blank" << std::endl;
		return (false);
	}
	else if (darkestSecret.empty())
	{
		std::cout << "\nDarkest secret can't be blank" << std::endl;
		return (false);
	}
	return (true);
}

bool Contact::isAlpha(std::string str)
{
	size_t i;

	for (i = 0; i < str.length(); i++)
	{
		if (!isascii(str.at(i)))
		{
			std::cout << "\nInvalid arg: " << str << "\n"
					  << std::endl;
			return (false);
		}
	}
	return (true);
}

bool Contact::isPhone(std::string phoneNumber)
{
	if (phoneNumber.size() > 30)
	{
		std::cout << "\nPhone number can't be more than 30\n"
				  << std::endl;
		return (false);
	}
	else
	{
		size_t i;
		for (i = 0; i < phoneNumber.length(); i++)
		{
			if (isdigit(phoneNumber.at(i) == 0))
			{
				std::cout << "\nPhone number must contain only numbers\n"
						  << std::endl;
				return (false);
			}
			
		}
	}
	return (true);
}

bool Contact::checker(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret)
{
	if (!isBlank(firstName, lastName, nickName, phoneNumber, darkestSecret))
		return (false);
	if (!isAlpha(firstName) || !isAlpha(lastName) || !isAlpha(nickName) || !isAlpha(darkestSecret))
		return (false);
	if (!isPhone(phoneNumber))
		return (false);
	return (true);
}
