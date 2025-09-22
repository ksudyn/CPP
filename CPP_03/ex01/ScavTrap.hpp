/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 19:07:15 by ksudyn            #+#    #+#             */
/*   Updated: 2025/09/22 20:13:41 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap
{
    private:
    
    public:
        ScavTrap();
        ScavTrap(std::string name); // constructor
        ScavTrap(const ScavTrap& other);
        ScavTrap& operator=(const ScavTrap& other);
        ~ScavTrap(); // destructor

        void attack(const std::string& target); // sobrescribe attack()
        void guardGate(); // nuevo método
};
//Hay que crear otra clase llamada ScavTrap, pero esta vez heredando de ClapTrap

// ScavTrap es una subclase de ClapTrap.
// Tiene los mismos atributos (Name, HitPoints, EnergyPoints, AttackDamage).
// Sus constructores y destructor deben imprimir mensajes distintos para distinguirlos.
// Su attack() también imprime un mensaje diferente.
// Se inicializa con otros valores por defecto:
// Tiene una función nueva: void guardGate();
// que muestra que ha entrado en modo “Gate keeper”

// Y en tus tests debes demostrar:
// Que cuando se crea un ScavTrap, primero se construye un ClapTrap (constructor base).
// Que al destruir un ScavTrap, primero se destruye el propio ScavTrap y después el ClapTrap.

#endif
