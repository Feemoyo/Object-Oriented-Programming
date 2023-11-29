/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:49:25 by fmoreira          #+#    #+#             */
/*   Updated: 2023/11/02 16:33:32 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm( void ): _name("Default"), _signed(false), _gradeToSign(150), _gradeToExecute(150)
{
    std::cout << "~Default AForm constructor called" << std::endl;
    return ;
}

AForm::~AForm()
{
    std::cout << "~Default AForm destructor called" << std::endl;
    return ;
}

AForm::AForm( const AForm &other ): _name(other._name), _signed(other._signed), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute)
{
    std::cout << "~Copy AForm constructor called" << std::endl;
    return ;
}

AForm &AForm::operator=( const AForm &other)
{
    std::cout << "~Copy assigment AForm called" << std::endl;
    if (this == &other)
        return (*this);
    return (*this);
}

AForm::AForm(const std::string name, const int gradeToSign, const int gradeToExecute): _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    std::cout << "~Default AForm constructor called" << std::endl;
    if (_gradeToSign < 1 || _gradeToExecute < 1)
    {
        throw (AForm::GradeTooHighException());
    }
    if (_gradeToSign > 150 || _gradeToExecute > 150)
    {
        throw (AForm::GradeTooLowException());
    }

    return ;
}

std::string AForm::getName( void ) const
{
    return (this->_name);
}

bool AForm::getSigned( void ) const
{
    return (this->_signed);
}

int AForm::getGradeToSign( void ) const
{
    return (this->_gradeToSign);
}

int AForm::getGradeToExecute( void ) const
{
    return (this->_gradeToExecute);
}

void    AForm::beSigned( Bureaucrat &bureaucrat )
{
    if (bureaucrat.getGrade() > (this->_gradeToSign))
    {
        throw (AForm::GradeTooLowException());
    }
    this->_signed = true;
    return ;
}

void    AForm::execute(Bureaucrat const & executor) const
{
    if (this->_signed == false)
        throw (AForm::FormNotSignedException());
    if (executor.getGrade() > this->_gradeToExecute)
        throw (AForm::GradeTooLowException());
    return ;
}

void    AForm::setSigned( bool sign )
{
    this->_signed = sign;
    return ;
}

const char *AForm::GradeTooHighException::what() const throw()
{
    return ("Grade too high");
}

const char *AForm::GradeTooLowException::what() const throw()
{
    return ("Grade too low");
}

const char *AForm::FormNotSignedException::what() const throw()
{
    return ("Form not signed");
}

const char *AForm::FormNotFoundException::what() const throw()
{
    return ("Form not found");
}

const char *AForm::FormSignedException::what() const throw()
{
    return ("Form already signed");
}

const char *AForm::OpenFileException::what() const throw()
{
    return ("File could not be opened");
}

std::ostream& operator<<(std::ostream& rhs, const AForm &lhs)
{
    rhs << "AForm name: " << lhs.getName() << std::endl;
    rhs << "AForm signed: " << lhs.getSigned() << std::endl;
    rhs << "AForm grade to sign: " << lhs.getGradeToSign() << std::endl;
    rhs << "AForm grade to execute: " << lhs.getGradeToExecute() << std::endl;
    return (rhs);
}
