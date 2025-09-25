/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 15:54:38 by ksudyn            #+#    #+#             */
/*   Updated: 2025/09/25 15:54:41 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
    std::cout << "WrongAnimal Constructor" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : type(other.type)
{
    std::cout << "WrongAnimal Copy Constructor" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
    std::cout << "WrongAnimal Copy Assignment" << std::endl;
    if (this != &other)
        this->type = other.type;
    return *this;
}

std::string WrongAnimal::getType() const
{
    return type;
}

void WrongAnimal::makeSound() const
{
    std::cout << type << ": Some wrong animal sound" << std::endl;
}

