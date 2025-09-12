/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 17:38:47 by ksudyn            #+#    #+#             */
/*   Updated: 2025/09/12 18:56:45 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    int N = 5;
    Zombie* horde = zombieHorde(N, "Zombie_Horde_");

    for (int i = 0; i < N; i++)
    {
        horde[i].announce();
        std::cout  << "\n";
    }

    delete[] horde;
}
// delete sin [] solo llama al destructor del primer objeto.
// delete[] asegura que se llame al destructor de cada elemento del array
// El compilador sabe cuántos objetos hay en el array (la información se guarda internamente).
// Llama al destructor de cada zombie en orden inverso (del último al primero).
// Libera la memoria ocupada por todo el array en el heap