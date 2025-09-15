/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 20:12:07 by ksudyn            #+#    #+#             */
/*   Updated: 2025/09/15 20:29:40 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    std::cout << name << "HumanB Constructor" << std::endl;
}

HumanB::~HumanB(void)
{
    std::cout << "HumanB Destructor" << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = weapon;
}

void HumanB::attack() const
{
    if (weapon)
        std::cout << this->name << "attacks " << std::endl;
    else
        std::cout << " has no weapon" << std::endl;
}