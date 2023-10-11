/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:55:45 by fmoreira          #+#    #+#             */
/*   Updated: 2023/10/11 11:02:51 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

File::File(int &argc, char *argv[])
{
	if (_usage(argc, argv[0]))
        std::exit(1);
	
	this->_newFile = argv[1];
	this->_s1 = argv[2];
	this->_s2 = argv[3];
	this->_inputFile.open(_newFile.c_str());
	this->_outputFile.open((_newFile + ".replace").c_str());
	
	if (_checkInputOutput())
		std::exit(1);	
}

File::~File()
{
	_inputFile.close();
	_outputFile.close();
}

bool	File::_usage(int argc, std::string argv)
{
	if (argc != 4)
    {
        std::cout << "Usage: " << argv << " <filename> <string1> <string2>" << std::endl;
        return (1);
    }
    return (0);
}

bool	File::_checkInputOutput()
{
	 if (!this->_inputFile)
    {
        std::cerr << "Error: Unable to open the input file." << std::endl;
        return (1); 
    }
    if (!this->_inputFile)
    {
        std::cerr << "Error: Unable to create the output file." << std::endl;
        return (1);
    }
	return (0);
}

void	File::_replaceString()
{
	size_t pos = 0;

    if (this->_s1 == "")
        return ;
    
    while ((pos = this->_line.find(this->_s1, pos)) != std::string::npos)
    {
        this->_line = this->_line.substr(0, pos) + this->_s2 + this->_line.substr(pos + this->_s1.length());
        pos += this->_s2.length();
    }
}

void File::changeData()
{
	while (!this->_inputFile.eof())
    {
        std::getline(this->_inputFile, this->_line);
        if (!this->_inputFile.eof())
        {
            _replaceString();
            this->_outputFile << this->_line << std::endl;
        }
        else
        {
            _replaceString();    
            this->_outputFile << this->_line;
        }
    }
}
