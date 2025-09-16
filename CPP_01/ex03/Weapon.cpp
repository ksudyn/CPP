/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 19:28:47 by ksudyn            #+#    #+#             */
/*   Updated: 2025/09/16 16:05:18 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string typ)
{
    type = typ;//guarda el argumento typ en el miembro type
    std::cout << "Weapon Constructor" << std::endl;
}

Weapon::~Weapon( void)
{
    std::cout << "Weapon Destructor" << std::endl;    
}

const std::string& Weapon::getType() const
{
    return type;
}

void Weapon::setType(std::string newType)
{
    type = newType;
}