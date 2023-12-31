/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 13:50:54 by fmoreira          #+#    #+#             */
/*   Updated: 2023/12/12 18:14:50 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Serializer.hpp"
#include "Data.hpp"

int main( void )
{
	Data		*data = new Data;
	Data		*posData;
	uintptr_t	raw;
	
	data->name = "Felipe";
	data->lastName = "Moreira";
	data->nickname = "fmoreira";
	data->age = 23;

	raw = Serializer::serialize(data);
	std::cout << "Raw: " << raw << std::endl;

	posData = Serializer::deserialize(raw);
	std::cout << "Name: " << posData->name << std::endl;
	std::cout << "Last Name: " << posData->lastName << std::endl;
	std::cout << "Nickname: " << posData->nickname << std::endl;
	std::cout << "Age: " << posData->age << std::endl;

	delete (data);
	return (0);
}
