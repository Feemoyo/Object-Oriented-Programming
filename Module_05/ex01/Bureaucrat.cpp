/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 12:02:31 by fmoreira          #+#    #+#             */
/*   Updated: 2023/11/01 20:54:39 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ): _name("Default"), _grade(150)
{
    std::cout << "~Default Bureaucrat constructor called" << std::endl;
    return ;
}

Bureaucrat::~Bureaucrat(void)
{
    std::cout << "~Default Bureaucrat destructor called" << std::endl;
    return ;
}

Bureaucrat::Bureaucrat( const Bureaucrat &other ): _name(other._name), _grade(other._grade)
{
    std::cout << "~Copy Bureaucraat constructor called" << std::endl;
    return ;
}

Bureaucrat &Bureaucrat::operator = ( const Bureaucrat &other )
{
    std::cout << "~Copy assigment Bureaucrat called" << std::endl;
    if (this == &other)
        return (*this);
    return (*this);
}

Bureaucrat::Bureaucrat( std::string name, const int grade ): _name(name), _grade(grade)
{
    std::cout << "~Default Bureaucrat constructor called" << std::endl;
    if (_grade < 1)
    {
        throw (Bureaucrat::GradeTooHighException());
    }
    if (_grade > 150)
    {
        throw (Bureaucrat::GradeTooLowException());
    }

    return ;
}

std::string const	Bureaucrat::getName( void ) const
{
    return (this->_name);
}

int                Bureaucrat::getGrade( void ) const
{
    return (this->_grade);
}

void               Bureaucrat::incrementGrade( void )
{
    if (this->_grade == 1)
    {
        throw (Bureaucrat::GradeTooHighException());
        return ;
    }
    this->_grade--;
    return ;
}

void                Bureaucrat::decrementGrade( void )
{
    if (this->_grade == 150)
        throw (Bureaucrat::GradeTooLowException());
    this->_grade++;
    return ;
}

void                Bureaucrat::signForm( Form &form )
{
    if (form.getSigned() == true)
    {
        std::cout << this->_name << " cannot sign " << form.getName() << " because the form is already signed" << std::endl;
        return ;
    }
    try
    {
        form.beSigned(*this);
        std::cout << this->_name << " signed " << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << this->_name << " couldn’t sign " << form.getName() << " because " << e.what() << std::endl;
    }
    return ;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade too low");
}

std::ostream& operator<<(std::ostream& rhs, const Bureaucrat &lhs){
	rhs << lhs.getName() << ", bureaucrat grade " << lhs.getGrade();
	return (rhs);
}
