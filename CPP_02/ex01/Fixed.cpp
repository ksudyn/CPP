/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 16:22:30 by ksudyn            #+#    #+#             */
/*   Updated: 2025/09/19 17:17:52 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// ----------------- Constructores / destructor / asignación -----------------
Fixed::Fixed() : _fixedPointValue(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other; // reutilizamos el operador de asignación
}

Fixed::Fixed(const int n)
{
    std::cout << "Int constructor called" << std::endl;
    _fixedPointValue = n << _fractionalBits; // n * 256
}
// Función: recibe un entero n y lo convierte a la representación interna.
// Fórmula: raw = n * 2^8. n << _fractionalBits es equivalente a n * 256.
// Ejemplo: Fixed(10) → _fixedPointValue = 10 << 8 = 2560

Fixed::Fixed(const float n)
{
    std::cout << "Float constructor called" << std::endl;
    _fixedPointValue = (int)roundf(n * (1 << _fractionalBits));
}
// Función: recibe un float y lo convierte a raw con redondeo.
// Fórmula: raw = roundf(n * 2^8).
// Por qué roundf: evita truncar el resultado;
// redondea al entero más cercano para representar el float lo mejor posible.
// Ejemplo: Fixed(42.42f) → roundf(42.42 * 256) = 10859

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->_fixedPointValue = other.getRawBits();
    }
    return *this;
}

// ----------------- Acceso raw ------------------------------------------------
int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_fixedPointValue;
}

void Fixed::setRawBits(int const raw)
{
    this->_fixedPointValue = raw;
}

// ----------------- Conversiones ---------------------------------------------
float Fixed::toFloat(void) const
{
    return (float)_fixedPointValue / (1 << _fractionalBits);
}
// Qué hace: devuelve el valor en float.
// Fórmula: float = raw / 2^8.
// Por qué: deshace la escala usada al guardar.

int Fixed::toInt(void) const
{
    return _fixedPointValue >> _fractionalBits;
}
// Qué hace: devuelve la parte entera (truncada).
// Por qué usamos división entera: queremos la parte entera sin decimales
// (coincide con el comportamiento esperado del enunciado)

// ----------------- Operador de inserción -----------------------------------
std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return os;
}
