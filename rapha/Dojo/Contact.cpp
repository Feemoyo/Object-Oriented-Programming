/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 18:21:52 by fmoreira          #+#    #+#             */
/*   Updated: 2023/07/09 18:21:52 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Contact.hpp>

Contact::Contact ( void )
{
	std::cout << "Contact criado" << std::endl;
}

void	Contact::setFirstName (const std::string& firstName)
{
    this->_firstName = firstName;
}

void	Contact::setLastName (const std::string& lastName)
{
    this->_lastName = lastName;
}

void	Contact::setNickName(const std::string& nickName)
{
    this->_nickName= nickName;
}

void	Contact::setPhoneNumber (const std::string& phoneNumber)
{
    this->_phoneNumber = phoneNumber;
}

void	Contact::setDarkestSecret (const std::string& darkestSecret)
{
    this->_darkestSecret = darkestSecret;
}

std::string	Contact::getFirstName ( void )
{
	return (this->_firstName);
}

std::string	Contact::getLastName ( void )
{
	return (this->_lastName);
}

std::string	Contact::getNickName ( void )
{
	return (this->_nickName);
}

std::string	Contact::getPhoneNumber ( void )
{
	return (this->_phoneNumber);
}

std::string	Contact::getDarkestSecret ( void )
{
	return (this->_darkestSecret);
}


bool Contact::IsInitialized ( void )
{
    if ( this->_firstName.empty() )
		return ( false );
    if ( this->_lastName.empty() )
		return ( false );
    if ( this->_nickName.empty() )
		return ( false );
    if ( this->_phoneNumber.empty() )
		return ( false );
    if ( this->_darkestSecret.empty() )
		return ( false );
	return ( true );
}
