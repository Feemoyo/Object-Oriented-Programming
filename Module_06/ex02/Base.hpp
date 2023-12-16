/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 06:46:50 by fmoreira          #+#    #+#             */
/*   Updated: 2023/12/16 11:12:31 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <exception>
#include <cstdlib>

class Base
{
	public:
		virtual ~Base(void);
};

class A : public Base
{};

class B : public Base
{};

class C : public Base
{};

#endif
