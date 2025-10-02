/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 20:23:50 by ksudyn            #+#    #+#             */
/*   Updated: 2025/10/02 15:40:47 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Cat.cpp
Cat::Cat() : Animal("Cat"), brain(new Brain())
{
    //std::cout << "Cat Constructor called" << std::endl;
    // Llama al constructor de Animal con "Cat".
    // Reserva memoria en el heap para un Brain nuevo (new Brain()).
    // Imprime un mensaje.
}

Cat::~Cat()
{
    delete this->brain;
    //std::cout << "Cat Destructor called" << std::endl;
    //Libera la memoria del Brain para evitar fugas de memoria.
    //Imprime mensaje
}

Cat::Cat(const Cat& other) : Animal(other)
{
    //std::cout << "Cat Copy Constructor called" << std::endl;
    brain = new Brain(*other.brain);
    // Copia la parte Animal del other.
    // Crea un nuevo Brain copiando el contenido del Brain del other.
    // Esto es deep copy: cada Dog tiene su propio Brain
}

Cat &Cat::operator=(const Cat& other)
{
    //std::cout << "Cat Copy Assignment called" << std::endl;
    if (this != &other)
    {
        Animal::operator=(other);
        if (brain)
            delete brain;// libera el brain viejo
        brain = new Brain(*other.brain);//Crea un nuevo Brain copiando el del otro (deep copy)
    }
    return *this;
    //Aquí usas Animal porque tu operador de asignación para Cat reutiliza el de Animal para copiar el type.
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