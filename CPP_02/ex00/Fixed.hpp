/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 20:11:04 by ksudyn            #+#    #+#             */
/*   Updated: 2025/09/19 19:59:10 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    int _fixedPointValue;
    //es: la representación interna en entero del número en punto fijo
    static const int _fractionalBits = 8; // constante estática pedida
    //Es una constante de clase (compartida por todas las instancias)
    //que dice cuántos bits están reservados para la parte fraccionaria.
    //8: lo pide el enunciado. 2^8 = 256 es el factor de escala
public:
    Fixed();                           // constructor por defecto
    Fixed(const Fixed& other);         // constructor de copia
    ~Fixed();                          // destructor
    Fixed& operator=(const Fixed& other); // operador de asignación

    int getRawBits(void) const;
    void setRawBits(int const raw);
};

#endif