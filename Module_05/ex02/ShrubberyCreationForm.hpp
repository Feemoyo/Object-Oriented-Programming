/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:07:44 by fmoreira          #+#    #+#             */
/*   Updated: 2023/11/14 18:39:51 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm: public AForm
{
    private:
        std::string _target;
    
    public:
        ShrubberyCreationForm();
        ~ShrubberyCreationForm( void );
        ShrubberyCreationForm( ShrubberyCreationForm const &other );
        ShrubberyCreationForm &operator=( ShrubberyCreationForm const &other );

        ShrubberyCreationForm( const std::string target );
        std::string getTarget( void ) const;
        void    execute(Bureaucrat const &executor) const;
};

#endif
