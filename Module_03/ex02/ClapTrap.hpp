/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 06:33:44 by fmoreira          #+#    #+#             */
/*   Updated: 2023/10/31 17:50:16 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
protected:
    std::string     _name;
    unsigned int    _hitPoints;
    unsigned int    _energyPoints;
    unsigned int    _attackDamage;
	
    unsigned int    _maxHP; 

    bool        _checkAction(void);
    
public:
    ClapTrap( void );
    ~ClapTrap();
    ClapTrap(const ClapTrap &other);
    ClapTrap& operator=(const ClapTrap &other);

    ClapTrap(const std::string name);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    
    std::string getName() const;
    void        checkHealth() const;
	int			getHitPoints() const;
	int			getEnergyPoints() const;
};

#endif
