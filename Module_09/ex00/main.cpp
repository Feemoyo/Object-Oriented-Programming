/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 17:29:26 by fmoreira          #+#    #+#             */
/*   Updated: 2024/01/04 19:47:43 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	BitcoinExchange *btc;
	(void)btc;
	if (argc == 2)
	{	
		try
		{
			std::cout << "BitcoinExchange" << std::endl;
			btc = new BitcoinExchange(argv[1]);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	else
		std::cout << "Usage: ./btc <file>" << std::endl;
	return (0);
}