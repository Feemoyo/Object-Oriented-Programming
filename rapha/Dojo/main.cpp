#include <iostream>
#include <PhoneBook.hpp>
#include <Contact.hpp>

int ifClassesAreConstruct(void)
{
	try
	{
		PhoneBook	pb;
	}
	catch ( PhoneBook::CouldNotCreatePhoneBookException& e )
	{
		std::cout << e.what() << std::endl;
	}
	return(0);
}

void ifContactIsInitialized(void)
{
	Contact	ct;

	ct.setFirstName("Felipe");
	ct.setLastName("Moreira");
	ct.setNickName("Satoshi");
	ct.setPhoneNumber("11987654321");
	ct.setDarkestSecret("Possui pokemon de verdade :eyes:");

	std::cout << "Teste Contato inicializado: ";
	if ( ct.IsInitialized () )
		std::cout << "OK" << std::endl;
	else
		std::cout << "KO" << std::endl;
}

void ifContactReturnData(void)
{
	Contact	ct;

	ct.setFirstName("Felipe");
	ct.setLastName("Moreira");
	ct.setNickName("Satoshi");
	ct.setPhoneNumber("11987654321");
	ct.setDarkestSecret("Possui pokemon de verdade :eyes:");

	std::cout << "Teste Contato com valor: " << std::endl;

	std::cout << "Firstname: " << ct.getFirstName() << std::endl;
}

int	main(void)
{
	// ifClassesAreConstruct();
	ifContactIsInitialized();
	ifContactReturnData();

	return (0);
}
