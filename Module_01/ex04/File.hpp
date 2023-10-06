/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:13:04 by fmoreira          #+#    #+#             */
/*   Updated: 2023/10/06 19:58:40 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_HPP
#define FILE_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

class File
{
private:
	std::string		_newFile;
	std::string		_s1;
	std::string		_s2;
	std::string		_line;
	std::ifstream	_inputFile;
	std::ofstream	_outputFile;
	
	bool	_usage(int argc, std::string argv);
	bool	_checkInputOutput();
	bool	_populateClass();
	void	_replaceString();
	
public:
	File(int &argc, char *argv[]);
	~File();

	void changeData();
};

//	std::cout << "Content copied with replacement into '" << this->_newFile << ".replace" << std::endl;

#endif
