/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 20:11:53 by ksudyn            #+#    #+#             */
/*   Updated: 2025/09/16 15:54:52 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

#pragma once//evita que el archivo de cabecera se incluya más de una vez.

#include "iostream"
#include "Weapon.hpp"

class HumanB
{
    private:
        std::string name;
        Weapon* weapon;//puntero porque HumanB puede empezar sin arma.
    public:
        HumanB( std::string name);
        ~HumanB(void);
        void setWeapon(Weapon& weapon);
        void attack() const;
};

#endif