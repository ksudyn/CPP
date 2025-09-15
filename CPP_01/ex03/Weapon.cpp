/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 19:28:47 by ksudyn            #+#    #+#             */
/*   Updated: 2025/09/15 19:58:38 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string typ)
{
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