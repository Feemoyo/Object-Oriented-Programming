/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:31:59 by fmoreira          #+#    #+#             */
/*   Updated: 2023/11/15 11:34:18 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ): AForm("PresidentialPardonForm", 25, 5), _target("Default")
{
	std::cout << "~PresidentialPardonForm Default constructor called!" << std::endl;
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{
	std::cout << "~PresidentialPardonForm Destructor called!" << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const &other ): AForm(other), _target(other._target)
{
	std::cout << "~PresidentialPardonForm Copy Constructor called!" << std::endl;
	return ;
}

PresidentialPardonForm &PresidentialPardonForm::operator=( const PresidentialPardonForm &other )
{
	std::cout << "~PresidentialPardonForm Copy Assigment Constructor called!" << std::endl;
	if (this == &other)
		return (*this);
	this->_target = other.getTarget();
	this->setSigned(other.getSigned());
	return (*this);
}

PresidentialPardonForm::PresidentialPardonForm( const std::string target ): AForm("PresidentialPardonForm", 25, 5), _target(target)
{
	std::cout << "~PresidentialPardonForm Constructor called!" << std::endl;
	return ;
}

std::string PresidentialPardonForm::getTarget( void ) const
{
	return (this->_target);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	AForm::execute(executor);
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
