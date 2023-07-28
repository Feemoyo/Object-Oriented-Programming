/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 09:17:25 by fmoreira          #+#    #+#             */
/*   Updated: 2023/07/28 12:10:06 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void replaceString(std::string &line, const std::string &s1, const std::string &s2)
{
    size_t pos = 0;
    
    while ((pos = line.find(s1, pos)) != std::string::npos)
    {
        line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
        pos += s2.length();
    }
}

bool usage(int &argc, std::string argv)
{
    if (argc != 4)
    {
        std::cout << "Usage: " << argv << " <filename> <string1> <string2>" << std::endl;
        return (1);
    }
    return (0);
}

int main(int argc, char *argv[])
{
    if (usage(argc, argv[0]))
        return (1);

    std::string     filename = argv[1];
    std::string     s1 = argv[2];
    std::string     s2 = argv[3];
    std::string     line;
    std::ifstream   inputFile(filename.c_str());
    std::ofstream   outputFile((filename + ".replace").c_str());

    if (!inputFile)
    {
        std::cerr << "Error: Unable to open the input file." << std::endl;
        return 1;
    }

    if (!outputFile)
    {
        std::cerr << "Error: Unable to create the output file." << std::endl;
        return 1;
    }

    while (!inputFile.eof())
    {
        std::getline(inputFile, line);
        if (!inputFile.eof())
        {
            replaceString(line, s1, s2);
            outputFile << line << std::endl;
        }
        else
        {
            replaceString(line, s1, s2);    
            outputFile << line;
        }
    }

    inputFile.close();
    outputFile.close();

    std::cout << "Content copied with replacement into '" << filename << ".replace'" << std::endl;
    return 0;
}
