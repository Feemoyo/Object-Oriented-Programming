/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 06:23:27 by fmoreira          #+#    #+#             */
/*   Updated: 2023/10/31 17:50:27 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
    bool            _guardGate;

public:
    ScavTrap(void);
    ~ScavTrap();
    ScavTrap(const ScavTrap &other);
    ScavTrap& operator=(const ScavTrap &other);
    
    ScavTrap(const std::string name);
    void    guardGate();
};

#endif
