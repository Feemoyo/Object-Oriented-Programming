/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 07:21:43 by fmoreira          #+#    #+#             */
/*   Updated: 2023/12/16 11:28:34 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base *generate(void)
{
	size_t	valueRand = (rand() % 3);

	if (valueRand == 2)
		return (new A);
	else if (valueRand == 1)
		return (new B);
	else if (valueRand == 0)
		return (new C);
	
	return (NULL);
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "Object pointed to by p: A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Object pointed to by p: B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Object pointed to by p: C" << std::endl;
	
	return ;
}

void identify(Base& p)
{
	try
	{
		Base &tryInstance = dynamic_cast<A&>(p);
		std::cout << "Object referenced to by p: A" << std::endl;
		(void)tryInstance;
	}
	catch(const std::exception &e){}
	try
	{
		Base &tryInstance = dynamic_cast<B&>(p);
		std::cout << "Object referenced to by p: B" << std::endl;
		(void)tryInstance;
	}
	catch(const std::exception &e){}
	try
	{
		Base &tryInstance = dynamic_cast<C&>(p);
		std::cout << "Object referenced to by p: C" << std::endl;
		(void)tryInstance;
	}
	catch(const std::exception &e){}

	return ;
}

int main()
{
	Base	*base[10];
	int		i;
	srand(time(NULL));

	for (i = 0; i < 10; i++)
	{
		base[i] = generate();
		identify(base[i]);
		identify(*base[i]);
		std::cout << i << "\n" << std::endl;
	}
	
	for (i = 0; i < 10; i++)
	{
		delete base[i];
	}
	return (0);
}
