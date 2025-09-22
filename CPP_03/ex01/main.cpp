/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 19:05:58 by ksudyn            #+#    #+#             */
/*   Updated: 2025/09/22 19:52:38 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
    ScavTrap scav("SC4V");
    scav.attack("enemy");
    scav.takeDamage(30);
    scav.beRepaired(10);
    scav.guardGate();
}


// int main() {
//     std::cout << "=== Creando un ScavTrap con constructor por defecto ===" << std::endl;
//     ScavTrap s1; // usa constructor por defecto (KIKI)

//     std::cout << "\n=== Creando un ScavTrap con nombre personalizado ===" << std::endl;
//     ScavTrap s2("Guardian"); // usa constructor con nombre

//     std::cout << "\n=== Probando ataque ===" << std::endl;
//     s2.attack("Bandit"); // debería gastar 1 de energía y mostrar mensaje de ataque

//     std::cout << "\n=== Probando recibir daño ===" << std::endl;
//     s2.takeDamage(30); // debería bajar la vida

//     std::cout << "\n=== Probando reparación ===" << std::endl;
//     s2.beRepaired(15); // debería subir la vida y gastar 1 de energía

//     std::cout << "\n=== Probando modo guardián ===" << std::endl;
//     s2.guardGate(); // modo especial ScavTrap

//     std::cout << "\n=== Probando constructor de copia ===" << std::endl;
//     ScavTrap s3(s2); // copy constructor, clona a s2

//     std::cout << "\n=== Probando operador de asignación ===" << std::endl;
//     s1 = s3; // operador de asignación, copia los datos de s3 a s1

//     std::cout << "\n=== Gastando energía hasta que no pueda atacar ===" << std::endl;
//     for (int i = 0; i < 55; i++) {
//         s2.attack("Dummy target"); // después de 50 ataques debería quedarse sin energía
//     }

//     std::cout << "\n=== Probando ataques sin vida ===" << std::endl;
//     s2.takeDamage(200); // lo mata
//     s2.attack("Bandit"); // no debería atacar (sin vida)

//     std::cout << "\n=== Fin del programa ===" << std::endl;
//     return 0;
// }
