/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 08:16:33 by fmoreira          #+#    #+#             */
/*   Updated: 2023/12/29 15:55:49 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char *argv[])
{
	if (argc < 2 || argc > 2)
	{
		std::cout << "Error: Invalid input\n" << std::endl;
		return (1);
	}
	else
	{
		std::string str = argv[1];
		ScalarConverter::convert(str);
		
	}
}
