/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 20:11:07 by ksudyn            #+#    #+#             */
/*   Updated: 2025/09/19 17:16:22 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixedPointValue(0)
{
    std::cout << "Default constructor called" << std::endl;
}
//Función: inicializa el número a 0.
//Por qué: forma canónica y para que Fixed a; tenga valor 0.

Fixed::Fixed(const Fixed& other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other; // reutilizamos el operador de asignación
}
// Función: constructor copia. Copia la representación interna.
// Nota: usamos other.getRawBits() (centraliza la lectura y muestra diagnóstico).

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}
//Función: destructor; solo imprime diagnóstico (no hay memoria dinámica en este ejercicio)

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->_fixedPointValue = other.getRawBits();
    }
    return *this;

}
// Función: asignación por copia.
// Detalles:
// Imprime diagnóstico (como pediste).
// Comprueba auto-asignación (this != &other) por seguridad.
// Copia la representación interna usando other.getRawBits()

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_fixedPointValue;
}

// Función: devuelve el int crudo que almacena el número.
// Por qué es const: no modifica el objeto.
// Nota: imprime diagnóstico tal como pediste (esto aparece en muchos tests del módulo).

void Fixed::setRawBits(int const raw)
{
    this->_fixedPointValue = raw;
}
//Función: asigna directamente la representación interna
