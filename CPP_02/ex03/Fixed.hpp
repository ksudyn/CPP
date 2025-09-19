/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 18:19:55 by ksudyn            #+#    #+#             */
/*   Updated: 2025/09/19 18:20:39 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath> // para roundf

class Fixed {
private:
    int _fixedPointValue;
    static const int _fractionalBits = 8; // constante estática pedida

public:
    Fixed();                           // constructor por defecto
    Fixed(const Fixed& other);         // constructor de copia
    ~Fixed();                          // destructor
    Fixed& operator=(const Fixed& other); // operador de asignación

    Fixed(const int n);//recibe un entero, lo convierte al valor fijo interno
    Fixed(const float n);//recibe un float, lo convierte al valor fijo interno.

    int getRawBits(void) const;
    void setRawBits(int const raw);

    float toFloat(void) const;//convierte tu valor fijo interno a float.
    int toInt(void) const;//convierte tu valor fijo interno a int.

    // Operadores de comparación
    bool operator>(const Fixed& other) const;
    bool operator<(const Fixed& other) const;
    bool operator>=(const Fixed& other) const;
    bool operator<=(const Fixed& other) const;
    bool operator==(const Fixed& other) const;
    bool operator!=(const Fixed& other) const;

    // Operadores aritméticos
    Fixed operator+(const Fixed& other) const;
    Fixed operator-(const Fixed& other) const;
    Fixed operator*(const Fixed& other) const;
    Fixed operator/(const Fixed& other) const;

    // Incremento / Decremento
    Fixed& operator++();    // pre-incremento
    Fixed operator++(int);  // post-incremento
    Fixed& operator--();    // pre-decremento
    Fixed operator--(int);  // post-decremento

    // min / max (versiones no-const y const)
    static Fixed& min(Fixed& a, Fixed& b);
    static const Fixed& min(const Fixed& a, const Fixed& b);
    static Fixed& max(Fixed& a, Fixed& b);
    static const Fixed& max(const Fixed& a, const Fixed& b);
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);
//Esto le dice al compilador:
//“Si alguien hace std::cout << miFixed, en realidad quiero que imprima miFixed.toFloat()”

#endif