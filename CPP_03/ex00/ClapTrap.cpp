/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 17:56:57 by ksudyn            #+#    #+#             */
/*   Updated: 2025/10/01 18:06:12 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->Name = "KOKO";
	this->HitPoints = 10;
	this->EnergyPoints = 10;
	this->AttackDamage = 0;
	std::cout << "Default constructor called." << std::endl;
}
// Name → identifica a cada robot (ej: “CL4P”).
// HitPoints → cuánta vida tiene (si llega a 0 está destruido).
// EnergyPoints → cuánta energía tiene para atacar o repararse.
// AttackDamage → cuántos puntos de vida quita al atacar.
// crea un ClapTrap con nombre por defecto “NoName” y valores iniciales.

ClapTrap::ClapTrap(std::string name)
{
	this->Name = name;
	this->HitPoints = 10;
	this->EnergyPoints = 10;
	this->AttackDamage = 0;
	std::cout << "ClapTrap " << this->Name << " Constructor" << std::endl;
}
//crea un ClapTrap con el nombre que le pases

ClapTrap& ClapTrap:: operator=(const ClapTrap& before)
{
    if(this != &before)//Buena practica para futuros proyectos
    {
        std::cout << "Copy assigment operator called" << std::endl;
        this->HitPoints = before.HitPoints;
        this->EnergyPoints = before.EnergyPoints;
        this->AttackDamage = before.AttackDamage;
        this->Name = before.Name;   
    }
	return (*this);
}//cuando ya existe un ClapTrap y le asignas otro, copia sus valores

ClapTrap::ClapTrap(const ClapTrap& before)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = before;
}//construye un ClapTrap copiando otro existente.

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << Name << " has been destroyed!" << std::endl;
}//se ejecuta cuando el objeto se destruye (por salir de scope o delete)


void ClapTrap::attack(const std::string& target)
{
      if (HitPoints <= 0)
      {
        std::cout << "ClapTrap " << Name << " cannot attack because it has no hit points left!" << std::endl;
        return;
    }
    if (EnergyPoints <= 0)
    {
        std::cout << "ClapTrap " << Name << " has no energy left to attack!" << std::endl;
        return;
    }

    EnergyPoints--;// gasta energía

    std::cout << "ClapTrap " << Name << " attacks " << target
              << ", causing " << AttackDamage << " points of damage!"
              << std::endl;
}
// Comprueba que no esté muerto (HitPoints > 0) ni sin energía (EnergyPoints > 0)
// Gasta 1 punto de energía.
// Solo ataca si tiene vida y energía > 0.
// Muestra un mensaje del ataque.


void ClapTrap::takeDamage(unsigned int amount)
{
     if (HitPoints <= 0)
     {
        std::cout << "ClapTrap " << Name << " is already destroyed!" << std::endl;
        return;
    }

    HitPoints -= amount;
    
    if (HitPoints < 0) HitPoints = 0; // por seguridad

    std::cout << "ClapTrap " << Name << " takes " << amount
              << " points of damage! Hit points now: " << HitPoints
              << std::endl;
}
// El ClapTrap recibe daño.
// Reduce sus HitPoints en amount" que es el valor que se le da en el main".
// Puede llegar a 0 (muerto).
// Muestra un mensaje.


void ClapTrap::beRepaired(unsigned int amount)
{
    if (HitPoints <= 0)
    {
        std::cout << "ClapTrap " << Name << " cannot be repaired because it has no hit points left!" << std::endl;
        return;
    }
    
    if (EnergyPoints <= 0)
    {
        std::cout << "ClapTrap " << Name << " has no energy left to repair!" << std::endl;
        return;
    }

    EnergyPoints--;// gasta energía
    HitPoints += amount;

    std::cout << "ClapTrap " << Name << " is repaired for " << amount
              << " hit points! Hit points now: " << HitPoints
              << std::endl;
}
// Comprueba que no esté muerto y que tenga energía
// El ClapTrap se repara (cura).
// Gasta 1 punto de energía.
// Aumenta HitPoints en amount.
// Solo si tiene vida y energía > 0.
// Muestra un mensaje