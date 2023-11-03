/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:49:25 by fmoreira          #+#    #+#             */
/*   Updated: 2023/11/02 15:53:40 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( void ): _name("Default"), _signed(false), _gradeToSign(150), _gradeToExecute(150)
{
    std::cout << "~Default Form constructor called" << std::endl;
    return ;
}

Form::~Form()
{
    std::cout << "~Default Form destructor called" << std::endl;
    return ;
}

Form::Form( const Form &other ): _name(other._name), _signed(other._signed), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute)
{
    std::cout << "~Copy Form constructor called" << std::endl;
    return ;
}

Form &Form::operator=( const Form &other)
{
    std::cout << "~Copy assigment Form called" << std::endl;
    if (this == &other)
        return (*this);
    return (*this);
}

Form::Form(const std::string name, const int gradeToSign, const int gradeToExecute): _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    std::cout << "~Default Form constructor called" << std::endl;
    if (_gradeToSign < 1 || _gradeToExecute < 1)
    {
        throw (Form::GradeTooHighException());
    }
    if (_gradeToSign > 150 || _gradeToExecute > 150)
    {
        throw (Form::GradeTooLowException());
    }

    return ;
}

std::string Form::getName( void ) const
{
    return (this->_name);
}

bool Form::getSigned( void ) const
{
    return (this->_signed);
}

int Form::getGradeToSign( void ) const
{
    return (this->_gradeToSign);
}

int Form::getGradeToExecute( void ) const
{
    return (this->_gradeToExecute);
}

void    Form::beSigned( Bureaucrat &bureaucrat )
{
    if (bureaucrat.getGrade() > (this->_gradeToSign))
    {
        throw (Form::GradeTooLowException());
    }
    this->_signed = true;
    return ;
}

const char *Form::GradeTooHighException::what() const throw()
{
    return ("Grade too high");
}

const char *Form::GradeTooLowException::what() const throw()
{
    return ("Grade too low");
}

std::ostream& operator<<(std::ostream& rhs, const Form &lhs)
{
    rhs << "Form name: " << lhs.getName() << std::endl;
    rhs << "Form signed: " << lhs.getSigned() << std::endl;
    rhs << "Form grade to sign: " << lhs.getGradeToSign() << std::endl;
    rhs << "Form grade to execute: " << lhs.getGradeToExecute() << std::endl;
    return (rhs);
}
