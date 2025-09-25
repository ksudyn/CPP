/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 20:23:50 by ksudyn            #+#    #+#             */
/*   Updated: 2025/09/24 20:23:51 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Cat.cpp
Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat Constructor called" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other)
{
    std::cout << "Cat Copy Constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat& other)
{
    std::cout << "Cat Copy Assignment called" << std::endl;
    if (this != &other)
        Animal::operator=(other);
    return *this;
    //Aquí usas Animal porque tu operador de asignación para Cat reutiliza el de Animal para copiar el type.
    //Así evitas duplicar código y proteges la autoasignación también
}

void Cat::makeSound() const
{
    std::cout << type << ": Meow!" << std::endl;
}
