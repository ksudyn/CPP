/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 17:01:40 by ksudyn            #+#    #+#             */
/*   Updated: 2025/09/23 17:01:42 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->Name = "KIKI";
	this->HitPoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;
	std::cout << "ScavTrap default constructor called." << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    // Cambiamos valores por defecto para ScavTrap
    HitPoints = 100;
    EnergyPoints = 50;
    AttackDamage = 20;
    std::cout << "ScavTrap " << Name << " Constructor too" << std::endl;
}

ScavTrap& ScavTrap:: operator=(const ScavTrap& before)
{
	std::cout << "ScavTrap copy assigment operator called" << std::endl;
	this->HitPoints = before.HitPoints;
	this->EnergyPoints = before.EnergyPoints;
	this->AttackDamage = before.AttackDamage;
	this->Name = before.Name;
	return (*this);
}

ScavTrap::ScavTrap(const ScavTrap& before)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = before;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << Name << " has been destroyed!" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (HitPoints <= 0)
    {
        std::cout << "ScavTrap " << Name << " cannot attack because it has no hit points left!" << std::endl;
        return;
    }
    if (EnergyPoints <= 0)
    {
        std::cout << "ScavTrap " << Name << " has no energy left to attack!" << std::endl;
        return;
    }

    EnergyPoints--;

    std::cout << "ScavTrap " << Name << " attacks " << target
              << ", causing " << AttackDamage << " points of damage!"
              << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << Name << " is now in Gate keeper mode!" << std::endl;
}

