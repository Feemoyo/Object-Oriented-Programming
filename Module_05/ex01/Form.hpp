/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:29:00 by fmoreira          #+#    #+#             */
/*   Updated: 2023/11/01 20:55:48 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class Form
{
    private:
        const std::string   _name;
        bool                _signed;
        const int           _gradeToSign;
        const int           _gradeToExecute;
        
    public:
        Form( void );
        ~Form();
        Form( const Form &other );
        Form &operator = ( const Form &other );

        Form(const std::string name, const int gradeToSign, const int gradeToExecute);
        std::string    getName( void ) const;
        bool           getSigned( void ) const;
        int            getGradeToSign( void ) const;
        int            getGradeToExecute( void ) const;
        void           beSigned( Bureaucrat &bureaucrat );

        class GradeTooHighException: public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowException: public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
};

std::ostream& operator<<(std::ostream& rhs, const Form &lhs);

#endif
