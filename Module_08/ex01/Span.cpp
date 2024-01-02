/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 09:27:20 by fmoreira          #+#    #+#             */
/*   Updated: 2024/01/02 15:22:43 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( void ) : _num(0)
{
	return ;
}

Span::~Span( void )
{
	return ;
}

Span::Span( Span const & src )
{
	*this = src;
	return ;
}

Span &	Span::operator=( Span const & other )
{
	if (this == &other)
		return (*this);
	this->_num = other._num;
	this->_vec = other._vec;
	return (*this);
}

Span::Span( unsigned int len )
{
	this->_num = len;
	return ;
}

void	Span::addNumber(size_t num)
{
	if (this->_vec.size() == this->_num)
		throw (Span::impossibleAdd());
	else
		this->_vec.push_back(num);
	
	return ;
}

void	Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (this->_vec.size() + std::distance(begin, end) > this->_num)
		throw (Span::impossibleAdd());
	else
		this->_vec.insert(this->_vec.end(), begin, end);
	
	return ;
}

unsigned int Span::longestSpan( void )
{
	if (this->_vec.size() < 2)
		throw (Span::impossibleLongShort());
	else
	{
		std::vector<int> aux = this->_vec;
		std::sort(aux.begin(), aux.end());
		return (aux.back() - aux.front());
	}
}

unsigned int	Span::shortestSpan( void )
{
	if (this->_vec.size() < 2)
		throw (Span::impossibleLongShort());
	else
	{
		std::vector<int> aux = this->_vec;
		std::sort(aux.begin(), aux.end());
		return (aux[1] - aux[0]);
	}
}

void	Span::printSpan( void ) const
{
	std::vector<int>::const_iterator it = this->_vec.begin();
	std::vector<int>::const_iterator ite = this->_vec.end();

	while (it != ite)
	{
		std::cout << *it << " ";
		it++;
	}
	return ;
}

const char* Span::impossibleAdd::what() const throw()
{
	return ("Impossible to add more numbers");
}

const char* Span::impossibleLongShort::what() const throw()
{
	return ("Impossible to calculate the longest or shortest span");
}

std::ostream &	operator<<( std::ostream & o, Span const & i )
{
	i.printSpan();
	return (o);
}

