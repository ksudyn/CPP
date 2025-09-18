/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 20:11:02 by ksudyn            #+#    #+#             */
/*   Updated: 2025/09/18 16:15:16 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
    Fixed a;
    Fixed b( a );
    Fixed c;
    c = b;

    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;

    return 0;
}
//Al salir el resultado se vera dos veces el mensaje de getRawBits member function called
//Esto se debe a que al hacer c = b se llama a la funcon operator que escribe su mensaje y el de getRawBits
//Pero no aparece ningun valor por que no se usa cout para imprimir el valor
//Al contarrio que luego aqui std::cout << a.getRawBits() << std::endl; que si lo hace