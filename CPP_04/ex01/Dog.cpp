/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 20:24:19 by ksudyn            #+#    #+#             */
/*   Updated: 2025/09/24 20:24:22 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog Constructor called" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
    std::cout << "Dog Copy Constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog& other)
{
    std::cout << "Dog Copy Assignment called" << std::endl;
    if (this != &other)
        Animal::operator=(other);// reutiliza operador de Animal
    return *this;
    //Aquí usas Animal porque tu operador de asignación para Dog reutiliza el de Animal para copiar el type.
    //Así evitas duplicar código y proteges la autoasignación también
}

void Dog::makeSound() const
{
    std::cout << type << ": Woof!" << std::endl;
}
