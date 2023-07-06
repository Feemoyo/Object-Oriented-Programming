/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 16:19:30 by fmoreira          #+#    #+#             */
/*   Updated: 2023/06/30 16:45:43 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	MiniMon
{
	public: //todos acessam
	int HP;
	
	//construtor NomeDaClasse(void)
	MiniMon(void)
	{
		std::cout << "New Mini Mon Created!" << std::endl;
		this->HP = 20; 
	}
	~MiniMon(void)
	{
		std::cout << "Say goodbye Mini Mon!"<< std::endl;
	}
	
	private: //para estudar

	protected: //para estudar
	
};

std::ostream & operator << (std::ostream & out, const MiniMon& obj)
{
	out << "HP: " << obj.HP;
	return (out);
}

int	main()
{
	{
	MiniMon	sapulbo;
	std::cout << sapulbo << std::endl;
	}
	MiniMon	lagafogo;
		
}