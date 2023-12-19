/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 10:18:33 by fmoreira          #+#    #+#             */
/*   Updated: 2023/12/19 12:16:29 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.tpp"

int main(void)
{
    Array<int> intArray(5);

    for (unsigned int i = 0; i < intArray.size(); i++)
        intArray[i] = i;

    for (unsigned int i = 0; i < intArray.size(); i++)
        std::cout << intArray[i] << std::endl;
}
