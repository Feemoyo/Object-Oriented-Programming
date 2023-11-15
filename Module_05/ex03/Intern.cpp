/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:20:37 by fmoreira          #+#    #+#             */
/*   Updated: 2023/11/15 15:31:48 by fmoreira         ###   ########.fr       */
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
	AForm *form;

	if (name == "robotomy request")
		form = new RobotomyRequestForm(target);
	else if (name == "presidential pardon")
		form = new PresidentialPardonForm(target);
	else if (name == "shrubbery creation")
		form = new ShrubberyCreationForm(target);
	else
	{
		throw(Bureaucrat::FormDoesNotExistException());
		return NULL;
	}
	std::cout << "Intern creates " << form->getName() << " form."<< std::endl;
	return form;
}
