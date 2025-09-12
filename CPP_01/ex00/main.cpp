/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 17:38:47 by ksudyn            #+#    #+#             */
/*   Updated: 2025/09/12 17:31:16 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombie_1;
    Zombie	*zombie_2;
    Zombie  *zombie_3;
	
	zombie_1 = newZombie("Zombie_1");
	zombie_1->announce();
	delete (zombie_1);
	std::cout  << "\n";

    zombie_2 = newZombie("Zombie_2");
	zombie_2->announce();
	std::cout  << "\n";

    zombie_3 = newZombie("Zombie_3");
    std::cout  << "\n";
    
	randomChump("zombie_4");
    std::cout  << "\n";
    zombie_3->announce();
    delete(zombie_3);
    std::cout  << "\n";
    delete(zombie_2);
    std::cout << "\n";
}
// Con newZombie se crea en el heap, vive mientras no hagas delete.
// Tú decides cuándo borrarlo.
// Necesitas delete para llamar al destructor y liberar memoria.

// Dentro de randomChump se
// Crea en el stackde forma automática.
// Se llama al constructor al entrar en la función.
// Se llama a announce() dentro.
// Al salir de la función, el objeto se destruye solo (destructor automático).
// No hay delete porque no hay memoria dinámica.