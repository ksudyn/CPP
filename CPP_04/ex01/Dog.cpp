/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 20:24:19 by ksudyn            #+#    #+#             */
/*   Updated: 2025/10/02 15:41:46 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), brain(new Brain())
{
    //std::cout << "Dog Constructor called" << std::endl;
    // Llama al constructor de Animal con "Dog".
    // Reserva memoria en el heap para un Brain nuevo (new Brain()).
    // Imprime un mensaje.
}

Dog::~Dog()
{
    delete brain;
    //std::cout << "Dog Destructor called" << std::endl;
    //Libera la memoria del Brain para evitar fugas de memoria.
    //Imprime mensaje
}

Dog::Dog(const Dog& other) : Animal(other)
{
    //std::cout << "Dog Copy Constructor called" << std::endl;
    brain = new Brain(*other.brain);
    // Copia la parte Animal del other.
    // Crea un nuevo Brain copiando el contenido del Brain del other.
    // Esto es deep copy: cada Dog tiene su propio Brain
}

Dog &Dog::operator=(const Dog& other)
{
    //std::cout << "Dog Copy Assignment called" << std::endl;
    if (this != &other)
    {
        Animal::operator=(other);// reutiliza operador de Animal
        if (brain)
            delete brain;// libera el brain viejo
        brain = new Brain(*other.brain);//Crea un nuevo Brain copiando el del otro (deep copy)
    }
    return *this;
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