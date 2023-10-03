/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 18:03:52 by fmoreira          #+#    #+#             */
/*   Updated: 2023/10/03 09:08:57 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>

// static, motherducker, did u know it!?
void	megaphone(int argc, char **argv)
{
	size_t i = 1;
	size_t j = 1;
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" <<std::endl;
		// 1 é código de erro, eu interpretei que argc = 1 é um comportamento
		// normal, não um erro
		std::exit(1);
	}
	while (i < (size_t)argc)
	{
		// Correção aqui, acho que você queria usar o i
		std::string current = argv[i];
		// std::string current = argv[j];
		j = 0;
		// Recomendaria criar uma função aqui pra ficar mais fácil
		// For também é uma boa pra praticar, já que fase 1 e 2 não pode usar
		while (j < current.size())
		{
			if (current.)
			std::cout << (char)toupper(current[j]);
			j++;
		}
		i++;
	}
	std::cout << std::endl;
}

int main(int argc, char **argv)
{
	megaphone(argc, argv);
	return (0);
}

// Lembrete: Você pode pular linhas, se quiser para separar códigos em blocos
