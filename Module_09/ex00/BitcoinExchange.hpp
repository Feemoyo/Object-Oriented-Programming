/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 11:12:38 by fmoreira          #+#    #+#             */
/*   Updated: 2024/01/05 19:30:30 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <iomanip>
#include <map>
#include <cstdlib>
#include <algorithm>

#define FIRSTDATA "data.csv"
#define FIRSTHEADER "date,exchange_rate"

#define SECONDHEADER "date | value"

class BitcoinExchange
{
	private:
		std::map<std::string, float>	_map;
		
		std::ifstream	_firstData;
		std::ifstream	_secondData;

		BitcoinExchange(void);
		bool initFiles(std::string fileName);
		bool populateMap();
		void printMap();
		void checkerInputFileData();
		bool dateChecker(std::string &date);
		bool isLeapYear(int year);
		void inputTerminal(std::string key, float value);
		

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
