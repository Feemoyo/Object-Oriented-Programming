/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:53:02 by fmoreira          #+#    #+#             */
/*   Updated: 2023/11/15 12:49:03 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

bool RobotomyRequestForm::_seed = false;

void RobotomyRequestForm::_setSrand( void ) const
{
	if (!this->_seed)
	{
		srand(time(NULL));
		this->_seed = true;
	}
}

RobotomyRequestForm::RobotomyRequestForm( void ): AForm("RobotomyRequestForm", 72, 45), _target("Default")
{
	std::cout << "~RobotomyRequestForm Default constructor called!" << std::endl;
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{
	std::cout << "~RobotomyRequestForm Destructor called!" << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const &other ): AForm(other), _target(other._target)
{
	std::cout << "~RobotomyRequestForm Copy Constructor called!" << std::endl;
	return ;
}

RobotomyRequestForm &RobotomyRequestForm::operator=( const RobotomyRequestForm &other )
{
	std::cout << "~RobotomyRequestForm Copy Assigment Constructor called!" << std::endl;
	if (this == &other)
		return (*this);
	this->_target = other.getTarget();
	this->setSigned(other.getSigned());
	return (*this);
}

 RobotomyRequestForm::RobotomyRequestForm( const std::string target ): AForm("RobotomyRequestForm", 72, 45), _target(target)
 {
	std::cout << "~RobotomyRequestForm Constructor called!" << std::endl;
	return ;
 }

std::string RobotomyRequestForm::getTarget( void ) const
{
	return (this->_target);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	AForm::execute(executor);
	std::cout << "*Drilling noises* ";
	this->_setSrand();
	if (rand() % 2)
		std::cout << this->_target << " has been robotomized successfully!" << std::endl;
	else
		std::cout << this->_target << " robotomization failed!" << std::endl;
	
	return ;
}