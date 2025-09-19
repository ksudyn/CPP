/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 18:21:02 by ksudyn            #+#    #+#             */
/*   Updated: 2025/09/19 19:02:13 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

//Point usará internamente Fixed para representar coordenadas (esto te da la precisión fija)
// Constructor por defecto
Point::Point() : _x(0), _y(0)
{
    std::cout << "Default constructor called" << std::endl;
}

// Constructor con dos floats
Point::Point(float x, float y) : _x(x), _y(y)
{
    std::cout << "Float constructor called" << std::endl;
}

// Constructor de copia
Point::Point(const Point &other) : _x(other._x), _y(other._y)
{
    std::cout << "Copy constructor called" << std::endl;
}

// Operador de asignación
Point &Point::operator=(const Point &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    // _x y _y son const, no se pueden reasignar. Simplemente ignoramos other.
    // Lo normal es simplemente devolver *this y no hacer nada.
    (void)other;
    return *this;
}

// Destructor
Point::~Point()
{
    std::cout << "Destructor called" << std::endl;
}

// Getters
Fixed Point::getX() const
{
    return _x;
}

Fixed Point::getY() const
{
    return _y;
}
