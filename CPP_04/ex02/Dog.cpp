/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 20:24:19 by ksudyn            #+#    #+#             */
/*   Updated: 2025/10/02 15:23:02 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog")
{
    std::cout << "Dog Constructor called" << std::endl;
    this->brain = new Brain();
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called" << std::endl;
    delete this->brain;
}

Dog::Dog(const Dog& other) : AAnimal(other)
{
    std::cout << "Dog Copy Constructor called" << std::endl;
    this->brain = new Brain(*other.brain);
}

Dog &Dog::operator=(const Dog& other)
{
    std::cout << "Dog Copy Assignment called" << std::endl;
    AAnimal::operator=(other);
	delete this->brain;
	this->brain = new Brain(*other.brain);
	return(*this);
    //Aquí usas Animal porque tu operador de asignación para Dog reutiliza el de Animal para copiar el type.
    //Así evitas duplicar código y proteges la autoasignación también
}

void Dog::makeSound() const
{
    std::cout << type << ": Woof!" << std::endl;
}

void Dog::searchBrain()const
{
	std::cout << this->getType() << " brain: " << brain << std::endl;
}