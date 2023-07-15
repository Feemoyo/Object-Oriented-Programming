#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <Contact.hpp>

class PhoneBook
{
	public:
		PhoneBook ( void );
			// Iniciar todos os ct;

		class	CouldNotCreatePhoneBookException;

	private:
		Contact	_contacts[8];
};

class	PhoneBook::CouldNotCreatePhoneBookException : public std::exception
{
	public:
		const char* what() const throw();
};

#endif // PHONEBOOK_HPP