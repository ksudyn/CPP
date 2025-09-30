/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 18:11:31 by ksudyn            #+#    #+#             */
/*   Updated: 2025/09/30 20:53:30 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

class DiamondTrap : public ScavTrap, public FragTrap
{
    private:
        std::string name; // propio de DiamondTrap (mismo nombre que en ClapTrap)
    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap& other);
        DiamondTrap& operator=(const DiamondTrap& other);
        ~DiamondTrap();
        
        void attack(const std::string& target);// usa ScavTrap::attack
        void whoAmI();
};
// DiamondTrap tiene todos los atributos y métodos de FragTrap y ScavTrap.
// Pero tanto FragTrap como ScavTrap heredan de ClapTrap.
// → Esto puede crear dos copias de ClapTrap dentro de DiamondTrap (problema del diamante).
// Para solucionarlo, se usa herencia virtual en FragTrap y ScavTrap:
// class ScavTrap : virtual public ClapTrap { ... };
// class FragTrap : virtual public ClapTrap { ... };
// Así, DiamondTrap tiene una sola instancia de ClapTrap.

#endif
