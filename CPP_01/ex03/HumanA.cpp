/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 20:11:07 by ksudyn            #+#    #+#             */
/*   Updated: 2025/09/15 20:29:49 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : weapon(weapon)
{
    this->name = name;
    this->weapon = weapon;
    std::cout << name << "HumanA Constructor" << std::endl;
}

HumanA::~HumanA( void)
{
    std::cout << "HumanA Destructor" << std::endl;
}
void HumanA::attack() const
{
    std::cout << this->name << "attacks " << std::endl;
}