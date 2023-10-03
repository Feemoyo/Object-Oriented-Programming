/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 18:03:52 by fmoreira          #+#    #+#             */
/*   Updated: 2023/10/03 10:28:45 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>

static void	megaphone(int argc, char **argv)
{
	size_t i = 1;
	size_t j = 1;
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" <<std::endl;
		std::exit(0);
	}
	while (i < (size_t)argc)
	{
		std::string current = argv[i];
		j = 0;
		while (j < current.size())
		{
			std::cout << (char)std::toupper(current[j]);
			j++;
		}
		i++;
		std::cout << ' ';
	}
	std::cout << std::endl;
}

int main(int argc, char **argv)
{
	megaphone(argc, argv);
	return (0);
}
