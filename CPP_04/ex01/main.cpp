/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 20:24:54 by ksudyn            #+#    #+#             */
/*   Updated: 2025/09/25 17:05:19 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

// int main() {
//     std::cout << "=== Basic test ===" << std::endl;
//     const Animal* j = new Dog();
//     const Animal* i = new Cat();
//     delete j; // no leak
//     delete i;

//     std::cout << "\n=== Array test ===" << std::endl;
//     Animal* animals[4];
//     for (int idx = 0; idx < 4; ++idx) {
//         if (idx < 2) animals[idx] = new Dog();
//         else animals[idx] = new Cat();
//     }
//     for (int idx = 0; idx < 4; ++idx)
//         delete animals[idx]; // destructores correctos

//     std::cout << "\n=== Deep copy test ===" << std::endl;
//     Dog dog1;
//     dog1.setBrainIdea(0, "Play fetch");
//     Dog dog2 = dog1; // copy constructor (deep copy)
//     dog1.setBrainIdea(0, "Sleep");
//     std::cout << "Dog1 idea[0]: " << dog1.getBrainIdea(0) << std::endl;
//     std::cout << "Dog2 idea[0]: " << dog2.getBrainIdea(0) << std::endl;

//     return 0;
// }


int main()
{
    std::cout << "=== Crear un Dog y un Cat con ideas distintas ===" << std::endl;

    Dog d;
    Cat c;

    // Darles ideas diferentes
    d.setBrainIdea(0, "Play fetch with the ball");
    d.setBrainIdea(1, "Bark at the mailman");

    c.setBrainIdea(0, "Climb the curtain");
    c.setBrainIdea(1, "Sleep on the keyboard");

    // Imprimir ideas para comprobar
    std::cout << "\nDog ideas:" << std::endl;
    std::cout << "Idea 0: " << d.getBrainIdea(0) << std::endl;
    std::cout << "Idea 1: " << d.getBrainIdea(1) << std::endl;

    std::cout << "\nCat ideas:" << std::endl;
    std::cout << "Idea 0: " << c.getBrainIdea(0) << std::endl;
    std::cout << "Idea 1: " << c.getBrainIdea(1) << std::endl;

    // Al salir del main se llaman los destructores automáticamente
    return 0;
}