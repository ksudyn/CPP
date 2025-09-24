/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 15:37:35 by ksudyn            #+#    #+#             */
/*   Updated: 2025/09/24 17:34:03 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "Animal default constructor called." << std::endl;
}

Animal::Animal(const std::string &typ) : type(typ)
{
    std::cout << "Animal " << typ << " constructor called." << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal " << type << " Destructor " << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
    std::cout << "Copy assigment operator called" << std::endl;
    if (this != &other)
        this->type = other.type;
    return (*this);
// Compruebas que no estás asignando el objeto a sí mismo:
//     Animal a("dog");
//     a = a; // autoasignación
// Sin la comprobación, podría copiar sobre sí mismo y en casos más complejos
// (punteros, recursos dinámicos) podrías liberar algo antes de volverlo a copiar.
// Aquí no pasaría nada grave porque sólo copias un std::string, pero es buena práctica ponerlo
}

Animal::Animal(const Animal& other)
{  
    std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

std::string Animal::getType() const
{
    return (this->type);
}


void Animal::makeSound() const
{
	std::cout << "Animal" << Animal::getType() << ": Some generic animal sound" << std::endl;
}
// En Animal (clase base): imprime un sonido genérico (ej. “Some generic animal sound”).
// En Dog (clase derivada): imprime “Woof!”.
// En Cat (clase derivada): imprime “Meow!”

// Meter el typr no es obligatorio para que el proyecto funcione, pero es buena práctica porque:
// Te facilita ver en consola qué objeto está haciendo qué.
// Cumple con “hacer tests más completos” que pide el enunciado.