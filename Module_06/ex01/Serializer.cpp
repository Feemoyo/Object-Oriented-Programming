/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 13:48:30 by fmoreira          #+#    #+#             */
/*   Updated: 2023/12/12 18:14:13 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
// #include <cstdint>

Serializer::Serializer( void )
{
	std::cout << "Constructor Serializer called" << std::endl;
	return ;
}

Serializer::Serializer( Serializer const & src )
{
	std::cout << "Copy constructor Serializer called" << std::endl;
	*this = src;
	return ;
}

Serializer::~Serializer( void )
{
	std::cout << "Destructor Serializer called" << std::endl;
	return ;
}

Serializer &	Serializer::operator=( Serializer const & rhs )
{
	std::cout << "Assignation operator called" << std::endl;
	if (this == &rhs)
		return *this;
	return *this;
}

uintptr_t		Serializer::serialize( Data *ptr )
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data 			*Serializer::deserialize( uintptr_t raw )
{
	return (reinterpret_cast<Data *>(raw));
}