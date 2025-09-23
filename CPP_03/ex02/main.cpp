/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 17:02:33 by ksudyn            #+#    #+#             */
/*   Updated: 2025/09/23 17:02:35 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    std::cout << "=== Creando FragTraps ===" << std::endl;
    FragTrap f1("FRAG-A");
    FragTrap f2("FRAG-B");

    std::cout << "\n=== Probando ataque y consumo de energía ===" << std::endl;
    f1.attack("Target1");    // ataque normal
    f1.attack("Target2");    // segundo ataque

    std::cout << "\n=== Probando recibir daño ===" << std::endl;
    f1.takeDamage(40);       // baja vida
    f1.takeDamage(70);       // mata a f1 (HitPoints = 0)

    std::cout << "\n=== Probando ataque sin vida ===" << std::endl;
    f1.attack("Target3");    // no debería atacar (sin vida)

    std::cout << "\n=== Probando reparación ===" << std::endl;
    f2.takeDamage(20);       // f2 recibe daño
    f2.beRepaired(10);       // se cura (sube vida, gasta energía)
    f2.beRepaired(30);       // se cura de nuevo

    std::cout << "\n=== Probando highFivesGuys ===" << std::endl;
    f2.highFivesGuys();      // muestra mensaje high-five

    std::cout << "\n=== Probando constructor de copia ===" << std::endl;
    FragTrap f3(f2);         // crea f3 copiando f2

    std::cout << "\n=== Probando operador de asignación ===" << std::endl;
    f1 = f2;                 // copia datos de f2 en f1 (revive f1 con los valores de f2)

    std::cout << "\n=== Gastando energía hasta agotar ===" << std::endl;
    for (int i = 0; i < 105; i++) {
        f2.attack("Dummy target");  // después de 100 ataques debe quedarse sin energía
    }

    std::cout << "\n=== Probando highFivesGuys en objeto copiado ===" << std::endl;
    f3.highFivesGuys();

    std::cout << "\n=== Fin del programa (destrucción de objetos) ===" << std::endl;
    return 0;
}
