/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:20:37 by fmoreira          #+#    #+#             */
/*   Updated: 2023/11/29 17:42:26 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern( void )
{
	return ;
}

Intern::~Intern()
{
	return ;
}

Intern::Intern( Intern const &other )
{
	*this = other;
	return ;
}

Intern &Intern::operator=( Intern const &other )
{
	(void)other;
	return *this;
}

AForm *Intern::makeForm( std::string name, std::string target )
{
	AForm *form[3] = {new RobotomyRequestForm(target), new PresidentialPardonForm(target), new ShrubberyCreationForm(target)};
	int i = 0;
	while (i < 3)
	{
		if (form[i]->getName() == name)
		{
			std::cout << "Intern creates " << form[i]->getName() << " form."<< std::endl;
			return (form[i]);
		}
		delete (form[i]);
		i++;
	}

	throw (AForm::FormNotFoundException());
	return (NULL);
}
