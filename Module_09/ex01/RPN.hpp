/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 20:02:25 by fmoreira          #+#    #+#             */
/*   Updated: 2024/01/06 09:55:12 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <string>
#include <stack>
#include <exception>
#include <cstdlib>


class RPN {

	private:
		std::string		_expressionInput;
		std::stack<int> _stack;

		RPN( void );
		void					execInput( void );
		void					findDigit(long unsigned int i);
		void					findOperator(long unsigned int i);
		long unsigned int		checkToken(long unsigned int i);

	public:
		~RPN( void );
		RPN( RPN const & other );
		RPN &operator=( RPN const & other );
		
		RPN( std::string expressionInput );

		class InvalidExpression : public std::exception {
			public:
				virtual const char* what() const throw()
				{
					return ("Error: Invalid expression");
				}
		};
		
		class InvalidToken : public std::exception {
			public:
				virtual const char* what() const throw()
				{
					return ("Error: Invalid token");
				}
		};

		class InvalidNumber : public std::exception {
			public:
				virtual const char* what() const throw()
				{
					return ("Error: Invalid number");
				}
		};

		class DivisionByZero : public std::exception {
			public:
				virtual const char* what() const throw()
				{
					return ("Error: Division by zero");
				}
		};
		
};

#endif
