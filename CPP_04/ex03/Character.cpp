/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 19:44:22 by ksudyn            #+#    #+#             */
/*   Updated: 2025/09/26 19:08:36 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : name("default")
{
    std::cout << "Character constructor" << std::endl;
    for (int i = 0; i < 4; i++)
        materias[i] = NULL;
}

Character::~Character()
{
    std::cout << "Character destructor" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (materias[i]) delete materias[i];
    }
}

Character::Character(std::string n) : name(n)
{
    std::cout << "Character constructor with name" << std::endl;
    for (int i = 0; i < 4; i++) materias[i] = NULL;
}

Character::Character(const Character& other)
{
    std::cout << "Copy Character constructor" << std::endl;
    *this = other;
}

Character& Character::operator=(const Character& other)
{
    if (this != &other)
    {
        name = other.name;
        for (int i = 0; i < 4; i++)
        {
            if (materias[i])
            {
                delete materias[i];
                materias[i]=NULL;
            }
            if (other.materias[i]) materias[i] = other.materias[i]->clone();
        }
    }
    return *this;
}

std::string const & Character::getName() const
{
    return name;
}

void Character::equip(AMateria* materia)
{
    if(!materia)
        return;
    for (int i = 0; i < 4; i++)
    {
        if (!materias[i])
        {
            materias[i] = materia;
            return;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx <4)
        materias[idx] = NULL;
    // no delete! (lo dice el enunciado)
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx >= 4)
        return;
    if (materias[idx])
        materias[idx]->use(target);
}
