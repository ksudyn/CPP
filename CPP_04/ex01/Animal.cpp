/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 20:23:26 by ksudyn            #+#    #+#             */
/*   Updated: 2025/10/02 15:34:09 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	//std::cout << "Animal default constructor called." << std::endl;
}

Animal::Animal(const std::string &typ) : type(typ)
{
    std::cout << "Animal " << typ << " constructor called." << std::endl;
}

Animal::~Animal()
{
    //std::cout << "Animal " << type << " Destructor " << std::endl;
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
    //std::cout << "Copy constructor called" << std::endl;
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

void Animal::searchBrain()const
{
	std::cout << Animal::getType() << " : " << "No brain!" << std::endl;
}