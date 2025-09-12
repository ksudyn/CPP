/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 17:41:33 by ksudyn            #+#    #+#             */
/*   Updated: 2025/09/12 16:35:11 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    randomChump( std::string name)
{
    Zombie new_zombie = Zombie(name);

    new_zombie.announce();
}
// Se llama al constructor Zombie::Zombie(std::string name) para crear new_zombie en el stack
// Luego new_zombie.announce(); imprime su mensaje.
// Al salir de la función randomChump, new_zombie deja de existir (es una variable local del stack)