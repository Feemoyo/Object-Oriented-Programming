/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 11:12:37 by fmoreira          #+#    #+#             */
/*   Updated: 2024/01/03 19:15:01 by fmoreira         ###   ########.fr       */
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
		throw (std::exception());
	return ;
}

bool	BitcoinExchange::initFiles(std::string fileName)
{
	this->_firstData.open(FIRSTDATA);
	
	std::string aux;
	getline(this->_firstData, aux);
	if (!this->_firstData)
	{
		std::cerr << "Error: Unable to open the " << FIRSTDATA << " file." << std::endl;
		return (false);
	}
	else if (aux != FIRSTHEADER)
	{
		std::cerr << "Error: The " << FIRSTDATA << " file is not in the correct format." << std::endl;
		return (false);
	}
	this->_secondData.open(fileName.c_str());
	std::getline(this->_secondData, aux);
	if (!this->_secondData)
	{
		std::cerr << "Error: Unable to open the " << fileName << " file." << std::endl;
		return (false);
	}
	else if (aux != SECONDHEADER)
	{
		std::cerr << "Error: The " << fileName << " file is not in the correct format." << std::endl;
		return (false);
	}
	return (true);
}

bool	BitcoinExchange::populateMap()
{
	std::string line;
	while (std::getline(this->_firstData, line))
	{
        std::istringstream ss(line);
        
        std::string dateStr;
        float exchangeRate;

        // Extrai a data e a taxa de câmbio da linha
        if (std::getline(ss, dateStr, ',') && ss >> exchangeRate) {
            // Converte a data para um timestamp
            std::tm timeStruct = {};
            std::istringstream dateStream(dateStr);
            strptime(dateStr.c_str(), "%Y-%m-%d", &timeStruct);

            if (dateStream.fail()) {
                std::cerr << "Erro ao converter a data para timestamp." << std::endl;
                continue;
            }

            // Converte a estrutura de tempo para um timestamp
            time_t timestamp = std::mktime(&timeStruct);

            // Armazena os dados no mapa
            this->_map[timestamp] = exchangeRate;
        } else {
            return (false);
        }
	}
	this->printMap();
	return (true);
}

void	BitcoinExchange::printMap()
{
	std::map<size_t, float>::iterator it;
	for (it = this->_map.begin(); it != this->_map.end(); ++it) {
		std::cout << "Timestamp: " << it->first << ", Data: " << this->epochToDateString(it->first) << ", Valor: " << std::fixed << std::setprecision(2) << it->second << std::endl;
	}
	return ;
}

std::string BitcoinExchange::epochToDateString(size_t timestamp) {
    // Converte o timestamp para a estrutura de tempo (tm)
    std::tm* timeInfo = std::gmtime(reinterpret_cast<const time_t*>(&timestamp));

    if (timeInfo == NULL) {
        // Tratamento de erro, se a conversão falhar
        return "Erro na conversao de timestamp para data";
    }

    // Formata a data no formato "Ano-Mes-Dia"
    std::ostringstream oss;
    oss << std::setw(4) << std::setfill('0') << timeInfo->tm_year + 1900 << "-"
        << std::setw(2) << std::setfill('0') << timeInfo->tm_mon + 1 << "-"
        << std::setw(2) << std::setfill('0') << timeInfo->tm_mday;

    return oss.str();
}