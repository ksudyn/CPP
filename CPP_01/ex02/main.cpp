/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 19:00:52 by ksudyn            #+#    #+#             */
/*   Updated: 2025/09/12 19:08:34 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string str = "HI THIS IS BRAIN";

    std::string* stringPTR = &str;
    std::string& stringREF = str;

    // Direcciones de memoria
    std::cout << "Dirección de str: " << &str << std::endl;
    std::cout << "Dirección guardada en stringPTR: " << stringPTR << std::endl;
    std::cout << "Dirección de stringREF: " << &stringREF << std::endl;

    // Valores
    std::cout << "Valor de str: " << str << std::endl;
    std::cout << "Valor apuntado por stringPTR: " << *stringPTR << std::endl;
    std::cout << "Valor de stringREF: " << stringREF << std::endl;
}
// Se pide
// Crear una variable std::string inicializada con:"HI THIS IS BRAIN"
// stringPTR: un puntero a la string.
// stringREF: una referencia a la string.

// Y el programa debe inmprimir:

// La dirección de memoria de la variable.
// La dirección de memoria de stringPTR.
// La dirección de memoria de stringREF

// Y luego:

// Valor de la variable.
// Valor del puntero dde de stringPTR.
// Valor del puntero de de stringREF.
