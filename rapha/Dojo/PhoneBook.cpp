#include <PhoneBook.hpp>

PhoneBook::PhoneBook ( void )
{
	std::cout << "Phonebook criado" << std::endl;
}

const char* PhoneBook::CouldNotCreatePhoneBookException::what() const throw()
{
	return "Exception: Não deu pra criar a classe";
}