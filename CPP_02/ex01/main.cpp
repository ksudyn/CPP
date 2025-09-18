/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 16:22:15 by ksudyn            #+#    #+#             */
/*   Updated: 2025/09/18 17:17:01 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	Fixed a;
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed const d(b);
	a = Fixed(1234.4321f);
	
    std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	return (0);
}





// x << n significa “desplaza a la izquierda n bits” = “multiplica por 2^n”.
// x >> n significa “desplaza a la derecha n bits” = “divide entre 2^n” (en enteros positivos).
// Como 2^8 = 256:
// 10 << 8 = 10 * 256 = 2560.
// 2560 >> 8 = 2560 / 256 = 10
//Así que usar << y >> es simplemente una forma rápida de multiplicar o dividir por potencias de 2

// Aquí hay dos cosas diferentes con el mismo símbolo <<:
// Cuando haces x << n con enteros → es desplazamiento de bits (multiplicar por 2^n).
// Cuando haces std::cout << algo → es sobrecarga de operador para imprimir en pantalla.