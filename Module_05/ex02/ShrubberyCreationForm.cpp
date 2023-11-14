/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:22:51 by fmoreira          #+#    #+#             */
/*   Updated: 2023/11/14 18:01:47 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ): AForm("ShrubberyCreationForm", 145, 137), _target("Default")
{
	std::cout << "~ShrubberyCreationForm Default constructor called!" << std::endl;
	return ;
}
 
ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
	std::cout << "~ShrubberyCreationForm Destructor called!" << std::endl;
	return ;
}
 
ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const &other ): AForm(other), _target(other._target)
{
	std::cout << "~ShrubberyCreationForm Copy Constructor called!" << std::endl;
	return ;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=( const ShrubberyCreationForm &other )
{
	std::cout << "~ShrubberyCreationForm Copy Assigment Constructor called!" << std::endl;
	if (this == &other)
		return (*this);
	this->_target = other.getTarget();
	this->setSigned(other.getSigned());
	return (*this);
}

 ShrubberyCreationForm::ShrubberyCreationForm( const std::string target ): AForm("ShrubberyCreationForm", 145, 137), _target(target)
 {
	std::cout << "~ShrubberyCreationForm Constructor called!" << std::endl;
	return ;
 }

std::string ShrubberyCreationForm::getTarget( void ) const
{
	return (this->_target);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	std::string		fileName;
	std::ofstream	file;

	AForm::execute(executor);
	fileName = this->_target + "_shrubbery";
	file.open(fileName.c_str());

	if (!file.is_open())
		throw OpenFileException();
	else
	{
		std::cout << AForm::getName() << " executed by " << executor.getName() << std::endl;
		file << "             /\\ " << std::endl;
		file << "            <  > " << std::endl;
		file << "             \\/ " << std::endl;
		file << "             /\\ " << std::endl;
		file << "            /  \\ " << std::endl;
		file << "           /++++\\ " << std::endl;
		file << "          /  ()  \\ " << std::endl;
		file << "          /      \\ " << std::endl;
		file << "         /~`~`~`~`\\ " << std::endl;
		file << "        /  ()  ()  \\ " << std::endl;
		file << "        /          \\ " << std::endl;
		file << "       /*&*&*&*&*&*&\\ " << std::endl;
		file << "      /  ()  ()  ()  \\ " << std::endl;
		file << "      /              \\ " << std::endl;
		file << "     /++++++++++++++++\\ " << std::endl;
		file << "    /  ()  ()  ()  ()  \\ " << std::endl;
		file << "    /                  \\ " << std::endl;
		file << "   /~`~`~`~`~`~`~`~`~`~`\\ " << std::endl;
		file << "  /  ()  ()  ()  ()  ()  \\ " << std::endl;
		file << "  /*&*&*&*&*&*&*&*&*&*&*&\\ " << std::endl;
		file << " /                        \\ " << std::endl;
		file << "/,.,.,.,.,.,.,.,.,.,.,.,.,.\\ " << std::endl;
		file << "           |   | " << std::endl;
		file << "          |`````| " << std::endl;
		file << "          \\_____/ " << std::endl;
		file << std::endl;
	}
	file.close();
}
