/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 11:12:37 by fmoreira          #+#    #+#             */
/*   Updated: 2024/01/05 21:14:31 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void)
{
	return ;
}

BitcoinExchange::~BitcoinExchange(void)
{
	this->_firstData.close();
	this->_secondData.close();
	return ;
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &other)
{
	*this = other;
	return ;
}

BitcoinExchange	&BitcoinExchange::operator=(BitcoinExchange const &other)
{
	if (this != &other)
	{
		this->_firstData.close();
		this->_secondData.close();
		*this = other;
		return (*this);
	}
	return (*this);
}

BitcoinExchange::BitcoinExchange(std::string fileName)
{
	if (!initFiles(fileName) || !populateMap())
		throw (FileError());
	this->execInputFileData();
	// this->printMap();
	return ;
}

bool	BitcoinExchange::initFiles(std::string fileName)
{
	std::string aux;
	
	this->_firstData.open(FIRSTDATA);
	
	getline(this->_firstData, aux);
	if (!this->_firstData)
	{
		std::cerr << "Error: Unable to open the " << FIRSTDATA << " file." << std::endl;
		return (false);
	}
	else if (aux != FIRSTHEADER)
	{
		std::cerr << "Error: The " << FIRSTDATA << " header file is not in the correct format." << std::endl;
		return (false);
	}

	this->_secondData.open(fileName.c_str());
	if (!this->_secondData)
	{
		std::cerr << "Error: Unable to open the " << fileName << " file." << std::endl;
		return (false);
	}
	return (true);
}

bool BitcoinExchange::populateMap()
{
	std::string line;
	while (std::getline(this->_firstData, line))
	{
        std::istringstream ss(line);
        std::string dateStr;
        float exchangeRate;

        if (std::getline(ss, dateStr, ',') && ss >> exchangeRate)
		{
            this->_map[dateStr] = exchangeRate;
        }
		else
		{
            return (false);
        }
	}
	return (true);
}

void	BitcoinExchange::printMap()
{
	std::map<std::string, float>::iterator it;
	for (it = this->_map.begin(); it != this->_map.end(); it++) {
		std::cout << "Date: " << it->first << ", Value: " << std::fixed << std::setprecision(2) << it->second << std::endl;
	}
	return ;
}

void	BitcoinExchange::execInputFileData()
{
	std::string line;

	if (std::getline(this->_secondData, line) && line != SECONDHEADER)
	{
		std::cout << "Error: bad input => " << line << std::endl;
	}
	while (std::getline(this->_secondData, line))
	{
		std::istringstream ss(line);
		std::string dateStr;
		float value;

		if (std::getline(ss, dateStr, '|') && ss >> value)
		{
			if (!this->dateChecker(dateStr) || ss.peek() != EOF)
				std::cout << "Error: bad input => " << line << std::endl;
			else if (value < 0)
				std::cout << "Error: not a positive number." << std::endl;
			else if (value > 1000)
				std::cout << "Error: too large a number." << std::endl;
			else
			{
				inputTerminal(dateStr, value);		
			}
		}
		else
		{
			std::cout << "Error: bad input => " << line << std::endl;
		}
	}
}

bool BitcoinExchange::dateChecker(std::string &date)
{
	int year, month, day;

	if (date.length() != 11 || date[4] != '-' || date[7] != '-')
	{
		return (false);
	}

	year = std::atoi(date.substr(0, 4).c_str());
	month = std::atoi(date.substr(5, 2).c_str());
    day = std::atoi(date.substr(8, 2).c_str());
		
	if (year < 1 || year > 9999)
		return (false);
	if (month < 1 || month > 12 || (day < 1 || day > 31))
		return (false);
	if ((month == 4 || month == 6 || month == 9 || month == 11) && (day > 30))
		return (false);
	if (month == 2 && ((isLeapYear(year) && day > 29) || (!isLeapYear(year) && day > 28)))
		return (false);

	return (true);
}

bool	BitcoinExchange::isLeapYear(int year)
{
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

void BitcoinExchange::inputTerminal(std::string key, float value)
{
	std::map<std::string, float>::iterator it;

	key.erase(std::remove_if(key.begin(), key.end(), ::isspace), key.end());
	it = this->_map.upper_bound(key);
	if (it != this->_map.begin())
		it--;
	
	std::cout << key << " => " << value << " = " << value * (*it).second << std::endl;
	return ;
}
