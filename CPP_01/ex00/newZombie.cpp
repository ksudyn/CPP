/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 17:41:10 by ksudyn            #+#    #+#             */
/*   Updated: 2025/09/12 16:51:18 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie( std::string name )
{
	Zombie *new_zombie = new Zombie(name);
	return (new_zombie);
}
// Usa new para construir un Zombie en el heap.
// new hace dos cosas:
// Reserva memoria suficiente para un Zombie en el heap.
// Llama al constructor Zombie(name) sobre esa memoria.
// Devuelve un puntero al objeto recién creado.
// Por eso su tipo de retorno es Zombie*