/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 12:02:31 by fmoreira          #+#    #+#             */
/*   Updated: 2023/10/27 14:50:07 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( std::string name, const int grade ): _name(name), _grade(grade)
{
    std::cout << "~Default Bureaucrat constructor called" << std::endl;
    if (_grade < 1)
    {
        throw (GradeTooHighException());
    }
    if (_grade > 150)
    {
        throw (GradeTooLowException());
    }

    return ;
}

Bureaucrat::~Bureaucrat(void)
{
    std::cout << "~Default Bureaucrat destructor called" << std::endl;
    return ;
}

Bureaucrat::Bureaucrat( const Bureaucrat &other ): _name(other._name)
{
    std::cout << "~Copy Bureaucraat constructor called" << std::endl;
    *this = other;
    return ;
}

Bureaucrat &Bureaucrat::operator = ( const Bureaucrat &other )
{
    std::cout << "~Copy assigment Bureaucrat called" << std::endl;
    if (this == &other)
        return (*this);
    return (*this);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade too low");
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
        throw (GradeTooHighException());
        return ;
    }
    this->_grade--;
    return ;
}

void                Bureaucrat::decrementGrade( void )
{
    if (this->_grade == 150)
        throw (GradeTooLowException());
    this->_grade++;
    return ;
}

std::ostream& operator<<(std::ostream& rhs, const Bureaucrat &lhs){
	rhs << lhs.getName() << ", bureaucrat grade " << lhs.getGrade();
	return rhs;
}
