/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 11:12:38 by fmoreira          #+#    #+#             */
/*   Updated: 2024/01/04 19:59:49 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <exception>
#include <map>
#include <ctime>

#define FIRSTDATA "data.csv"
#define FIRSTHEADER "date,exchange_rate"

#define SECONDHEADER "date | value"

class BitcoinExchange
{
	private:
		std::map<time_t, float>	_map;
		
		std::ifstream	_firstData;
		std::ifstream	_secondData;

		BitcoinExchange(void);
		bool	initFiles(std::string fileName);
		bool	populateMap();
		void	printMap();
		std::string epochToDateString(size_t epoch);

	public:
		~BitcoinExchange(void);
		BitcoinExchange(BitcoinExchange const &other);
		BitcoinExchange &operator=(BitcoinExchange const &other);

		BitcoinExchange(std::string fileName);


		class FileError : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Error: File problem.");
				}
		};
		
};

#endif
