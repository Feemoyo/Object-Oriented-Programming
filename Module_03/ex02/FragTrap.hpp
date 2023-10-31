/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 10:35:59 by fmoreira          #+#    #+#             */
/*   Updated: 2023/10/31 17:50:38 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
    static bool     _highFive;

public:
    FragTrap(void);
    ~FragTrap();
    FragTrap(const FragTrap &other);
    FragTrap &operator=(const FragTrap &other);

    FragTrap(const std::string name);
    void    highFiveGuys(void);
};

#endif
