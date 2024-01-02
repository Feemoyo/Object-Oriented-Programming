/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 16:35:19 by fmoreira          #+#    #+#             */
/*   Updated: 2024/01/01 13:48:59 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>

class NotFoundException : public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return ("Element not found");
		}
};

template <typename T>
void	easyfind(T &container, int n)
{
	typename T::iterator	it;

	it = std::find(container.begin(), container.end(), n);
	if (it == container.end())
		throw (NotFoundException());
	std::cout << "*Found: " << *it << std::endl;
	return ;
}


#endif
