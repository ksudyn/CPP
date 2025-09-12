/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 19:09:08 by ksudyn            #+#    #+#             */
/*   Updated: 2025/09/12 18:55:57 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name )
{
    if(N <= 0)
        return (NULL);
    
    Zombie *New_Zombie = new Zombie[N];
    for(int i = 0; i < N; i++)
    {
        New_Zombie[i].put_name(name + std::to_string(i + 1));
        New_Zombie[i].announce();
        std::cout  << "\n";
    }
    return(New_Zombie);
}

// Estás reservando memoria para un array de N objetos Zombie en el heap.
// Cada elemento del array es un Zombie independiente.
// El constructor de Zombie se llama automáticamente para cada objeto.
//Luego se pone el nombre que se le pase y se usa to_string para añadir un indice
//para que no sea el mismo nombre, luego se llama a announce para el mensaje
//al final se escribe un salto de línea y se retorna el array