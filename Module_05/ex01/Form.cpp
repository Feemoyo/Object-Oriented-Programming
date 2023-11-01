/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:49:25 by fmoreira          #+#    #+#             */
/*   Updated: 2023/11/01 16:59:49 by fmoreira         ###   ########.fr       */
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


