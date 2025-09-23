/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 18:12:04 by ksudyn            #+#    #+#             */
/*   Updated: 2025/09/23 19:36:39 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap:: DiamondTrap() : ClapTrap() , ScavTrap() , FragTrap()
{
    this->name = "KUKU";
    ClapTrap::Name = name + "_clap_name";
    HitPoints = FragTrap::HitPoints;    // 100
    EnergyPoints = ScavTrap::EnergyPoints; // 50
    AttackDamage = FragTrap::AttackDamage; // 30
    std::cout << "DiamondTrap default constructor called" << std::endl;
}


DiamondTrap::DiamondTrap(std::string name ): ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
    this->name = name;
    HitPoints = FragTrap::HitPoints;    // 100
    EnergyPoints = ScavTrap::EnergyPoints; // 50
    AttackDamage = FragTrap::AttackDamage; // 30

    std::cout << "DiamondTrap " << this->name << " has been created!" << std::endl;
}

DiamondTrap& DiamondTrap:: operator=(const DiamondTrap& before)
{
    std::cout << "DiamondTrap copy assigment operator called" << std::endl;
    this->HitPoints = before.HitPoints;
    this->EnergyPoints = before.EnergyPoints;
    this->AttackDamage = before.AttackDamage;
    this->name = before.name;
    return (*this);
}

DiamondTrap::DiamondTrap(const DiamondTrap& before)
{
    std::cout << "DiamonTrap copy constructor called" << std::endl;
	*this = before;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << this->name << " has been destroyed!" << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);// usa el attack de ScavTrap
}

void DiamondTrap::whoAmI()
{
    std::cout << "I am " << this->name 
              << " and my ClapTrap name is " << ClapTrap::Name << std::endl;
}
// Sirve para mostrar dos nombres diferentes:
// El nombre propio de DiamondTrap (DiamondTrap::name) → el que le das al constructor.
// El nombre de ClapTrap interno (ClapTrap::Name) → se inicializa con name + "_clap_name".
