/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 20:11:07 by ksudyn            #+#    #+#             */
/*   Updated: 2025/09/16 16:11:25 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon): name(name), weapon(weapon)
{
    std::cout << name << " HumanA Constructor" << std::endl;
}

HumanA::~HumanA( void)
{
    std::cout << " HumanA Destructor" << std::endl;
}
void HumanA::attack() const
{
    std::cout << this->name << " attacks with their " << weapon.getType() << std::endl;
}
//weapon->getType() en puntero / weapon.getType() en referencia.
//sintaxis diferente porque uno es puntero, otro referencia