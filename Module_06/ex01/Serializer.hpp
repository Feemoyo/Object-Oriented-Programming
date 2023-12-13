/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 13:40:49 by fmoreira          #+#    #+#             */
/*   Updated: 2023/12/12 17:36:05 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <stdint.h>
#include "Data.hpp"

class Serializer {
	private:
		Serializer( void );
		Serializer( Serializer const & src );
		~Serializer( void );
		Serializer &	operator=( Serializer const & rhs );
	
	public:
		static uintptr_t	serialize(Data* ptr);
		static Data 		*deserialize( uintptr_t raw );
};

#endif