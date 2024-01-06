/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 20:02:09 by fmoreira          #+#    #+#             */
/*   Updated: 2024/01/06 10:03:12 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN( void )
{
	return ;
}

RPN::~RPN( void )
{
	return ;
}

RPN::RPN( RPN const & src )
{
	*this = src;
	return ;
}

RPN &	RPN::operator=( RPN const & rhs )
{
	if ( this != &rhs )
	{
		this->_expressionInput = rhs._expressionInput;
		this->_stack = rhs._stack;
	}
	return *this;
}

RPN::RPN( std::string expressionInput )
{
	this->_expressionInput = expressionInput;
	try
	{
		this->execInput();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
		
	return ;
}

void	RPN::execInput( void )
{
	long unsigned int  i = -1;

	while (++i < this->_expressionInput.length())
	{
		if (std::isdigit(this->_expressionInput.at(i)))
		{
			this->findDigit(i);
		}
		else
			this->findOperator(i);
	}
	
	if (this->_stack.size() == 1)
		std::cout << this->_stack.top() << std::endl;
	else
		throw (InvalidExpression());
	
	return ;
}

void	RPN::findDigit(long unsigned int i)
{
	std::string aux;
	
	if ((i + 1) < this->_expressionInput.length() && std::isspace(this->_expressionInput.at(i + 1)))
	{
		aux = this->_expressionInput.at(i);
		this->_stack.push(std::atoi(aux.c_str()));
	}
	else
		throw (InvalidNumber());

	return ;
}

void	RPN::findOperator(long unsigned int i)
{
	if (this->_expressionInput.at(i) != ' ')
	{
		if (this->_stack.size() > 1)
			this->_stack.push(this->checkToken(i));
		else
			throw (InvalidToken());
	}

	return ;
}

long unsigned int	RPN::checkToken(long unsigned int i)
{
	int		aux1;
	int		aux2;

	aux1 = this->_stack.top();
	this->_stack.pop();
	aux2 = this->_stack.top();
	this->_stack.pop();

	switch(this->_expressionInput.at(i))
	{
		case '+':
			return(aux2 + aux1);
			break;
		case '-':
			return(aux2 - aux1);
			break;
		case '*':
			return(aux2 * aux1);
			break;
		case '/':
			if (aux1 == 0)
				throw (DivisionByZero());
			return(aux2 / aux1);
			break;
		default:
			throw (InvalidExpression());
	}
}


