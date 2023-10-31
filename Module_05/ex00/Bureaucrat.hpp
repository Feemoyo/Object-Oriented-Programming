/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 11:54:06 by fmoreira          #+#    #+#             */
/*   Updated: 2023/10/27 14:13:43 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat
{
    private:
        std::string const	_name;
        int					_grade;

    public:
        Bureaucrat( const std::string name, const int grade );
        ~Bureaucrat( void );
        Bureaucrat( Bureaucrat const &other );
        Bureaucrat &operator = ( Bureaucrat const &other );

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

    std::string const	getName( void ) const;
    int                 getGrade( void ) const;
    void                incrementGrade( void );
    void                decrementGrade( void );
};

std::ostream& operator<<(std::ostream& rhs, const Bureaucrat &lhs);

#endif
