/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 18:20:04 by ksudyn            #+#    #+#             */
/*   Updated: 2025/09/19 18:37:48 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

// Prototipo de bsp (ya definido en bsp.cpp)
bool bsp(Point const a, Point const b, Point const c, Point const point);

int main() {
    // Definimos los tres vértices del triángulo
    Point a(0.0f, 0.0f);
    Point b(10.0f, 0.0f);
    Point c(0.0f, 10.0f);

    // Definimos varios puntos para probar
    Point inside(3.0f, 3.0f);      // claramente dentro del triángulo
    Point outside(11.0f, 1.0f);    // claramente fuera del triángulo
    Point onEdge(5.0f, 0.0f);      // sobre el borde AB

    std::cout << "Probando punto (3,3): ";
    if (bsp(a, b, c, inside))
        std::cout << "Dentro del triángulo" << std::endl;
    else
        std::cout << "Fuera del triángulo" << std::endl;

    std::cout << "Probando punto (11,1): ";
    if (bsp(a, b, c, outside))
        std::cout << "Dentro del triángulo" << std::endl;
    else
        std::cout << "Fuera del triángulo" << std::endl;

    std::cout << "Probando punto (5,0): ";
    if (bsp(a, b, c, onEdge))
        std::cout << "Dentro del triángulo" << std::endl;
    else
        std::cout << "Fuera del triángulo (borde o vértice)" << std::endl;

    return 0;
}

