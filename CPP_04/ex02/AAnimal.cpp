/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 15:14:14 by ksudyn            #+#    #+#             */
/*   Updated: 2025/10/02 15:15:34 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : type("Animal")
{
	std::cout << "Animal default constructor called." << std::endl;
}

AAnimal::AAnimal(const std::string &typ) : type(typ)
{
    std::cout << "Animal " << typ << " constructor called." << std::endl;
}

AAnimal::~AAnimal()
{
    std::cout << "Animal " << type << " Destructor " << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& other)
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

AAnimal::AAnimal(const AAnimal& other)
{  
    std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

std::string AAnimal::getType() const
{
    return (this->type);
}