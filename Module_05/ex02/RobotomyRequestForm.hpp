/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:52:27 by fmoreira          #+#    #+#             */
/*   Updated: 2023/11/14 18:40:20 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <iostream>
#include <cstdlib>

class RobotomyRequestForm : public AForm
{
	private:
		std::string	_target;

	public:
		RobotomyRequestForm( void );
		~RobotomyRequestForm();
		RobotomyRequestForm( RobotomyRequestForm const &other );
		RobotomyRequestForm &operator=( RobotomyRequestForm const &other );

		RobotomyRequestForm( const std::string target );
		std::string getTarget( void ) const;
		void execute(Bureaucrat const & executor) const;
};

#endif
