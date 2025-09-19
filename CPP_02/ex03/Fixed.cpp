/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 18:19:44 by ksudyn            #+#    #+#             */
/*   Updated: 2025/09/19 18:55:35 by ksudyn           ###   ########.fr       */
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

Fixed::Fixed(const float n)
{
    std::cout << "Float constructor called" << std::endl;
    _fixedPointValue = (int)roundf(n * (1 << _fractionalBits));
}

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

int Fixed::toInt(void) const
{
    return _fixedPointValue >> _fractionalBits;
}

// ----------------- Operador de inserción -----------------------------------
std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return os;
}




// ----------------- Comparaciones -------------------------------------------

bool Fixed::operator>(const Fixed& other) const
{
    return this->_fixedPointValue > other._fixedPointValue;
}

bool Fixed::operator<(const Fixed& other) const
{
    return this->_fixedPointValue < other._fixedPointValue;
}

bool Fixed::operator>=(const Fixed& other) const
{
    return this->_fixedPointValue >= other._fixedPointValue;
}

bool Fixed::operator<=(const Fixed& other) const
{
    return this->_fixedPointValue <= other._fixedPointValue;
}

bool Fixed::operator==(const Fixed& other) const
{
    return this->_fixedPointValue == other._fixedPointValue;
}

bool Fixed::operator!=(const Fixed& other) const
{
    return this->_fixedPointValue != other._fixedPointValue;
}
// Idea: todos comparan la representación interna (_fixedPointValue).
// Por qué: como ambas instancias usan la misma escala (2^8), comparar raw es equivalente a comparar los valores reales.
// Importante: son rápidas y exactas (sin conversiones a float)

// ----------------- Aritmética ----------------------------------------------

Fixed Fixed::operator+(const Fixed& other) const
{
    Fixed result;
    result.setRawBits(this->_fixedPointValue + other._fixedPointValue);
    return result;
}

Fixed Fixed::operator-(const Fixed& other) const
{
    Fixed result;
    result.setRawBits(this->_fixedPointValue - other._fixedPointValue);
    return result;
}
// Por qué funciona: los raw están en la misma escala;
// sumar/restar raw equivale a sumar/restar valores reales.
// Precision: exacto dentro del rango representable

Fixed Fixed::operator*(const Fixed& other) const
{
    Fixed result;
    // usamos 64 bits temporales para evitar overflow en la multiplicación
    long long tmp = static_cast<long long>(this->_fixedPointValue) * static_cast<long long>(other._fixedPointValue);
    // corregimos la escala dividiendo por 2^_fractionalBits (desplazamiento right)
    tmp = tmp >> _fractionalBits;
    result.setRawBits(static_cast<int>(tmp));
    return result;
}
// Por qué hay que corregir la escala:
// Si rawA = A * 2^8 y rawB = B * 2^8, entonces rawA * rawB = A*B * 2^16. Para volver a A*B * 2^8 hay que dividir por 2^8 (es decir, desplazar >> _fractionalBits).
// Por qué long long: evitar overflow temporal de la multiplicación.
// Ejemplo: (1.5 * 2.0) con raw 384 * 512 = 196608 → >> 8 → 768 → 768/256 = 3.0

Fixed Fixed::operator/(const Fixed& other) const
{
    Fixed result;
    // cuidado: división por cero no controlada (puedes añadir manejo si quieres)
    long long numerator = (static_cast<long long>(this->_fixedPointValue) << _fractionalBits);
    long long tmp = numerator / static_cast<long long>(other._fixedPointValue);
    result.setRawBits(static_cast<int>(tmp));
    return result;
}
// Por qué desplazamos a la izquierda antes de dividir:
// rawA / rawB = (A*2^8) / (B*2^8) = A/B,
// si hacemos (rawA << 8) / rawB obtenemos A/B * 2^8 (es decir la representación en raw de A/B),
// esto preserva precisión.
// Cuidado: división por cero no está manejada aquí;
// puedes añadir una comprobación si quieres (lanzar excepción o definir comportamiento).
// También usamos long long para preservar precisión

// ----------------- Incrementos / Decrementos -------------------------------

Fixed& Fixed::operator++()
{ // pre-incremento
    this->_fixedPointValue += 1; // menor epsilon representable (1 / 256)
    return *this;
}
// Qué hace: incrementa la representación interna en 1 (es la mínima unidad representable: 1/256).
// Por qué 1: _fixedPointValue almacena unidades de 1/256 (por eso 1 corresponde a 0.00390625)

Fixed Fixed::operator++(int)
{ // post-incremento
    Fixed temp(*this);          // copia (invoca copy constructor)
    this->_fixedPointValue += 1;
    return temp;                // devuelve la copia anterior
}
// Qué hace: devuelve el valor anterior
//(por eso se hace copia temp) y luego incrementa.
// Nota: la copia invoca el copy constructor (y sus prints)


//Las versiones -- son exactamente las análogas restando 1
Fixed& Fixed::operator--()
{ // pre-decremento
    this->_fixedPointValue -= 1;
    return *this;
}

Fixed Fixed::operator--(int)
{ // post-decremento
    Fixed temp(*this);
    this->_fixedPointValue -= 1;
    return temp;
}

// ----------------- min / max (estáticas) ----------------------------------

// Versión NO const: devuelve una referencia modificable
Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    if (a._fixedPointValue < b._fixedPointValue)
        return a;
    else
        return b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    if (a._fixedPointValue > b._fixedPointValue)
        return a;
    else
        return b;
}

// Versión const: devuelve una referencia constante
const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    if (a.getRawBits() < b.getRawBits())
        return a;
    else
        return b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    if (a.getRawBits() > b.getRawBits())
        return a;
    else
        return b;
}