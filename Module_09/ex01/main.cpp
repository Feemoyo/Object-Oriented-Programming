/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 20:02:21 by fmoreira          #+#    #+#             */
/*   Updated: 2024/01/06 09:58:34 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int		main( int argc, char **argv )
{
	if (argc != 2)
	{
		std::cout << "Error: Invalid number of arguments" << std::endl;
		return (1);
	}
	
	RPN rpn(argv[1]);
	
	return (0);
}