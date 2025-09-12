/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 19:28:47 by ksudyn            #+#    #+#             */
/*   Updated: 2025/09/12 20:07:08 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string t)
{
    std::cout << "Weapon Constructor" << std::endl;
}

Weapon::~Weapon( void)
{
    std::cout << "Weapon Destructor" << std::endl;    
}