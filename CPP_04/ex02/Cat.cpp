/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 20:23:50 by ksudyn            #+#    #+#             */
/*   Updated: 2025/10/02 15:20:20 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Cat.cpp
Cat::Cat() : AAnimal("Cat")
{
    std::cout << "Cat Constructor called" << std::endl;
    this->brain = new Brain();
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
    delete this->brain;
}

Cat::Cat(const Cat& other) : AAnimal(other)
{
    std::cout << "Cat Copy Constructor called" << std::endl;
    this->brain = new Brain(*other.brain);
}

Cat &Cat::operator=(const Cat& other)
{
    std::cout << "Cat Copy Assignment called" << std::endl;
    AAnimal::operator=(other); 
	delete this->brain;
	this->brain = new Brain(*other.brain);
	return(*this);
    //Aquí usas Animal porque tu operador de asignación para Cat reutiliza el de AAnimal para copiar el type.
    //Así evitas duplicar código y proteges la autoasignación también
}

void Cat::makeSound() const
{
    std::cout << type << ": Meow!" << std::endl;
}

void Cat::searchBrain()const
{
	std::cout << this->getType() << " brain: " << brain << std::endl;
}