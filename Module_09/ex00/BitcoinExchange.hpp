/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 11:12:38 by fmoreira          #+#    #+#             */
/*   Updated: 2024/01/03 18:29:29 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <exception>
#include <map>
#include <ctime>

#define FIRSTDATA "data.csv"
#define FIRSTHEADER "date,exchange_rate"

#define SECONDHEADER "date | value"

class BitcoinExchange
{
	private:
		std::map<size_t, float>	_map;
		
		std::ifstream	_firstData;
		std::ifstream	_secondData;

		BitcoinExchange(void);
		bool	initFiles(std::string fileName);
		bool	populateMap();

	public:
		~BitcoinExchange(void);
		BitcoinExchange(BitcoinExchange const &other);
		BitcoinExchange &operator=(BitcoinExchange const &other);

		BitcoinExchange(std::string fileName);
};

#endif
