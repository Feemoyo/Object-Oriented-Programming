/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 09:31:20 by fmoreira          #+#    #+#             */
/*   Updated: 2023/07/19 09:55:41 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void    replaceString(std::string& line, const std::string& s1, const std::string& s2)
{
    size_t pos = 0;
    while ((pos = line.find(s1, pos)) != std::string::npos)
    {
        line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
        pos += s2.length();
    }
}