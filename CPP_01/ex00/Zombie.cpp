/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 17:40:43 by ksudyn            #+#    #+#             */
/*   Updated: 2025/09/12 17:21:44 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie:: announce( void )
{
	std::cout << name <<": BraiiiiiiinnnzzzZ..." <<std::endl;
}
// imprime el mensaje con el nombre.
// std::cout es el flujo estándar de salida (pantalla).
// std::endl hace salto de línea y vacía el buffer.

Zombie::Zombie( std::string name )
{
	this->name = name;
	std::cout << name << " Zombie Constructor" <<std::endl;
}

// Se llama automáticamente cuando creas un Zombie (en stack o en heap).
// this->name = name; asigna el argumento al atributo privado

Zombie::~Zombie( void )
{
	std::cout << name << " Zombie Destructor" <<std::endl;
}

// Se llama automáticamente al salir del scope si es un objeto local (stack).
// Cuando haces delete si es un objeto en el heap.
// Se muestra el nombre con name