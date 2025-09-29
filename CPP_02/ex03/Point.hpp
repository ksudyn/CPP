/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 18:21:14 by ksudyn            #+#    #+#             */
/*   Updated: 2025/09/29 20:20:19 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"  // para usar Fixed en las coordenadas
#include <iostream>

class Point
{
    private:
        Fixed const _x;
        Fixed const _y;

    public:
        // Orthodox Canonical Form
        Point();                               // constructor por defecto
        Point(float x, float y);               // constructor con dos floats
        Point(const Point &other);             // constructor de copia
        Point &operator=(const Point &other);  // operador de asignación
        ~Point();                              // destructor

        // getters
        Fixed getX() const;
        Fixed getY() const;
        //Fixed const _x y _y son constantes: una vez creado el punto, sus coordenadas no cambian.
        //Por eso no habrá setX ni setY
};

// Función bsp fuera de la clase
bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
