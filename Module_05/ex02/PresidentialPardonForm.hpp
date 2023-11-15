/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:32:06 by fmoreira          #+#    #+#             */
/*   Updated: 2023/11/15 11:32:43 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include <iostream>

class PresidentialPardonForm : public AForm
{
	private:
		std::string	_target;

	public:
		PresidentialPardonForm( void );
		~PresidentialPardonForm();
		PresidentialPardonForm( PresidentialPardonForm const &other );
		PresidentialPardonForm &operator=( PresidentialPardonForm const &other );

		PresidentialPardonForm( const std::string target );
		std::string getTarget( void ) const;
		void execute(Bureaucrat const & executor) const;
};

#endif
