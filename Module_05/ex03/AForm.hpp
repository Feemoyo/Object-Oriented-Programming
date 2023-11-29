/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:29:00 by fmoreira          #+#    #+#             */
/*   Updated: 2023/11/29 17:41:59 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class AForm
{
    private:
        const std::string   _name;
        bool                _signed;
        const int           _gradeToSign;
        const int           _gradeToExecute;
        
    public:
        AForm( void );
        virtual ~AForm();
        AForm( const AForm &other );
        AForm &operator = ( const AForm &other );

        AForm(const std::string name, const int gradeToSign, const int gradeToExecute);
        std::string     getName( void ) const;
        bool            getSigned( void ) const;
        int             getGradeToSign( void ) const;
        int             getGradeToExecute( void ) const;
        void            beSigned( Bureaucrat &bureaucrat );
        virtual void    execute(Bureaucrat const & executor) const = 0;

        void            setSigned( bool sign );
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
        class FormNotSignedException : public std::exception
		{
			public:
				const char* what() const throw();
		};
        
        class FormNotFoundException : public std::exception
        {
            public:
                const char* what() const throw();
        };

		class FormSignedException : public std::exception
		{
			public:
				const char* what() const throw();
		};

		class OpenFileException : public std::exception
		{
			public:
				const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream& rhs, const AForm &lhs);

#endif
