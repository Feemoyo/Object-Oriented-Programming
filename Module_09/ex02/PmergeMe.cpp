/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 19:06:29 by fmoreira          #+#    #+#             */
/*   Updated: 2024/01/07 15:32:22 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe( void )
{
	return ;
}

PmergeMe::~PmergeMe( void )
{
	return ;
}

PmergeMe::PmergeMe(PmergeMe const &other)
{
	*this = other;
	return ;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &other)
{
	if (this != &other)
	{
		_vector = other._vector;
		_deque = other._deque;
	}
	return (*this);
}

PmergeMe::PmergeMe(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "No arguments were passed." << std::endl;
		return ;
	}
	try
	{
		timeval start;

		this->populateObjects(this->_vector, this->_deque, argc, argv);
		
		gettimeofday(&start, NULL);
		this->startSorting(this->_vector, 0, _vector.size() - 1);
		gettimeofday(&this->_timeVector, NULL);
		timersub(&this->_timeVector, &start, &this->_timeVector);

		gettimeofday(&start, NULL);
		this->startSorting(this->_deque, 0, _deque.size() - 1);
		gettimeofday(&this->_timeDeque, NULL);
		timersub(&this->_timeDeque, &start, &this->_timeDeque);
		
		
		this->outputMerge(argc, argv);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error" << std::endl;
	}
	return ;
}

template <typename T, typename U>
void	PmergeMe::populateObjects(T &object1, U &object2, int argc, char **argv)
{
	for(int i = 1; i < argc; i++)
	{
		for (size_t j = 0; j < strlen(argv[i]); j++)
		{
			if (!isdigit(argv[i][j]))
				return ;
		}
		object1.push_back(atoi(argv[i]));
		object2.push_back(atoi(argv[i]));
	}
	return ;
}

void	PmergeMe::startSorting(std::vector<int> &object, int begin, int end)
{
	if (end - begin > 5)
	{
		int middle = (begin + end) / 2;
		this->startSorting(object, begin, middle);
		this->startSorting(object, middle + 1, end);
		this->mergeSort(object, begin, middle, end);
	}
	else
	{
		this->insertionSort(object, begin, end);
	}
	return ;
}

void	PmergeMe::startSorting(std::deque<int> &object, int begin, int end)
{
	if (end - begin > 5)
	{
		int middle = (begin + end) / 2;
		this->startSorting(object, begin, middle);
		this->startSorting(object, middle + 1, end);
		this->mergeSort(object, begin, middle, end);
	}
	else
	{
		this->insertionSort(object, begin, end);
	}
	return ;
}

void	PmergeMe::mergeSort(std::vector<int> &object, int begin, int middle, int end)
{
	std::vector<int> left_object(object.begin() + begin, object.begin() + middle + 1);
    std::vector<int> right_object(object.begin() + middle + 1, object.begin() + end + 1);
    size_t right_index = 0;
    size_t left_index = 0;
    size_t length = left_object.size() + right_object.size();

    for (size_t i = begin; i < begin + length; i++)
    {
        if (right_index == right_object.size())
        {
            object[i] = left_object[left_index];
            left_index++;
        }
        else if (left_index == left_object.size())
        {
            object[i] = right_object[right_index];
            right_index++;
        }
        else if (right_object[right_index] > left_object[left_index])
        {
            object[i] = left_object[left_index];
            left_index++;
        }
        else
        {
            object[i] = right_object[right_index];
            right_index++;
        }
    }
}

void	PmergeMe::mergeSort(std::deque<int> &object, int begin, int middle, int end)
{
	std::deque<int> left_object(object.begin() + begin, object.begin() + middle + 1);
    std::deque<int> right_object(object.begin() + middle + 1, object.begin() + end + 1);
    size_t right_index = 0;
    size_t left_index = 0;
    size_t length = left_object.size() + right_object.size();

    for (size_t i = begin; i < begin + length; i++)
    {
        if (right_index == right_object.size())
        {
            object[i] = left_object[left_index];
            left_index++;
        }
        else if (left_index == left_object.size())
        {
            object[i] = right_object[right_index];
            right_index++;
        }
        else if (right_object[right_index] > left_object[left_index])
        {
            object[i] = left_object[left_index];
            left_index++;
        }
        else
        {
            object[i] = right_object[right_index];
            right_index++;
        }
    }
}


void	PmergeMe::insertionSort(std::vector<int> &object, int begin, int end)
{
	for (int i = begin; i < end; i++)
	{
		int aux = object[i + 1];
		int j = i + 1;
		while (j > begin && object[j - 1] > aux)
		{
			object[j] = object[j - 1];
			j--;
		}
		object[j] = aux;
	}
}

void	PmergeMe::insertionSort(std::deque<int> &object, int begin, int end)
{
	for (int i = begin; i < end; i++)
	{
		int aux = object[i + 1];
		int j = i + 1;
		while (j > begin && object[j - 1] > aux)
		{
			object[j] = object[j - 1];
			j--;
		}
		object[j] = aux;
	}
}

void	PmergeMe::outputMerge(size_t argc, char **argv)
{
	std::cout << "Before: ";
	size_t i = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc && i <= 15; i++)
		{
			std::cout << argv[i] << " ";
		}
		if (i >= 15)
			std::cout << "[...]";
	}
	std::cout << std::endl;

	std::cout << "After: ";
	for (i = 0; i < this->_vector.size() && i <= 15; i++)
	{
		std::cout << this->_vector[i] << " ";
		if (i >= 15)
			std::cout << "[...]";
	}
	std::cout << std::endl;
	
	std::cout << "Time to process a range of ";
	std::cout << this->_vector.size() << " elements with std::vector : " ;
	std::cout << this->_timeVector.tv_usec << " us"	<< std::endl;

	std::cout << "Time to process a range of ";
	std::cout << this->_deque.size() << " elements with std::deque : " ;
	std::cout << this->_timeDeque.tv_usec << " us"	<< std::endl;
	
	return ;
}
