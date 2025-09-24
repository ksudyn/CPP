/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 17:03:15 by ksudyn            #+#    #+#             */
/*   Updated: 2025/09/24 18:50:28 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    this->Name = "KUKU";
    this->HitPoints = 100;
    this->EnergyPoints = 100;
    this->AttackDamage = 30;
    std::cout << "FragTrap default constructor called" << std::endl;
}
FragTrap::FragTrap(std::string name)
{
    this->Name = name;
    HitPoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30;
    std::cout << "FragTrap " << Name << " has been created!" << std::endl;
}

FragTrap& FragTrap:: operator=(const FragTrap& before)
{
    std::cout << "FragTrap copy assigment operartor called" << std::endl;
    this->HitPoints = before.HitPoints;
    this->EnergyPoints = before.EnergyPoints;
    this->AttackDamage = before.AttackDamage;
    this->Name = before.Name;
    return(*this);
}

FragTrap::FragTrap(const FragTrap& before)
{
    std::cout <<  "FragTrap cpy constructor called" << std::endl;
    *this = before;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << Name << " has been destroyed!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << Name << " requests high fives!" << std::endl;
}
