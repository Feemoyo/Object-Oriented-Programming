/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 17:51:00 by fmoreira          #+#    #+#             */
/*   Updated: 2023/09/28 09:52:21 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
private:
	static Contact _contacts[8];
	static int _index;

	static std::string	_columnCustomize(std::string str);
	static void			_printData(Contact contact, int i);
	
public:
	PhoneBook();
	~PhoneBook();

	void saveContact(Contact contact);
	void printList(void);
	void printContactData(int index);
	void searchOption();
	

};

#endif
