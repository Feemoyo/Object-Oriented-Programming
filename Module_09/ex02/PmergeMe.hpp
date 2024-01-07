/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 19:06:32 by fmoreira          #+#    #+#             */
/*   Updated: 2024/01/07 15:18:11 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <string.h>
#include <algorithm>
#include <utility>

#include <vector>
#include <deque>
#include <sys/time.h>


class PmergeMe
{
	private:
		std::vector<int>	_vector;
		std::deque<int>		_deque;
		timeval				_timeVector;
		timeval				_timeDeque;

		template <typename T, typename U>
		void populateObjects(T& object1, U& object2, int argc, char **argv);
		
		void	mergeSort(std::vector<int> &object, int begin, int middle, int end);
		void	mergeSort(std::deque<int> &object, int begin, int middle, int end);
		
		void	insertionSort(std::vector<int> &object, int begin, int end);
		void	insertionSort(std::deque<int> &object, int begin, int end);

		void	startSorting(std::vector<int> &object, int begin, int end);
		void	startSorting(std::deque<int> &object, int begin, int end);

		void 	outputMerge(size_t argc, char **argv);
		
		PmergeMe( void );

	public:
		~PmergeMe( void );
		PmergeMe(PmergeMe const &other);
		PmergeMe &operator=(const PmergeMe &other);
		
		PmergeMe(int argc, char **argv);
		
	
};


#endif
