/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 15:44:05 by fmoreira          #+#    #+#             */
/*   Updated: 2024/01/02 16:37:48 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <deque>
#include <list>
#include <iterator>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack( void ): std::stack<T>()
		{
			return ;
		};
		~MutantStack( void )
		{
			return ;
		};
		MutantStack( MutantStack const & src )
		{
			*this = src;
			return ;
		};
		MutantStack &	operator=( MutantStack const & other )
		{
			if (this != &other)
				std::stack<T>::operator=(other);
			return (*this);
		};

		typedef typename std::deque<T>::iterator iterator;
		iterator	begin( void )
		{
			return (this->c.begin());
		};
		iterator	end( void )
		{
			return (this->c.end());
		};
};

#endif
