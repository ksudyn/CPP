/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 17:56:59 by ksudyn            #+#    #+#             */
/*   Updated: 2025/09/23 19:47:56 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
	ClapTrap	person1("Person1");
	ScavTrap	person2("Person2");
	FragTrap	person3("Person3");
	DiamondTrap	person4("Person4");

	person1.attack("someone");
	person1.beRepaired(1);

	std::cout << "\n";

	person2.attack("someone");
	person2.beRepaired(1);
	person2.guardGate();

	std::cout << "\n";

	person3.attack("someone");
	person3.beRepaired(1);
	person3.highFivesGuys();

	std::cout << "\n";

	person4.attack("someone");
	person4.beRepaired(1);
	person4.whoAmI();
}
// ClapTrap person1("Person1")
// Llama al constructor de ClapTrap con nombre "Person1".
// Inicializa: HitPoints = 10, EnergyPoints = 10, AttackDamage = 0.
// Muestra mensaje: "ClapTrap Person1 has been created!".

// ScavTrap person2("Person2")
// Primero llama al constructor base ClapTrap("Person2").
// Luego ejecuta su propio constructor ScavTrap.
// Inicializa: HitPoints = 100, EnergyPoints = 50, AttackDamage = 20.
// Mensaje: "ScavTrap Person2 has been created!".

// FragTrap person3("Person3")
// Primero constructor ClapTrap("Person3").
// Luego constructor FragTrap.
// Inicializa: HitPoints = 100, EnergyPoints = 100, AttackDamage = 30.
// Mensaje: "FragTrap Person3 has been created!".

// DiamondTrap person4("Person4")
// Constructor llama a ClapTrap("Person4_clap_name") por herencia virtual.
// Luego construye FragTrap y ScavTrap (solo virtualmente ClapTrap una vez).
// Inicializa atributos:
// HitPoints = 100 (de FragTrap)
// EnergyPoints = 50 (de ScavTrap)
// AttackDamage = 30 (de FragTrap)
// name = "Person4" y ClapTrap::Name = "Person4_clap_name"
// Mensaje: "DiamondTrap Person4 has been created!".