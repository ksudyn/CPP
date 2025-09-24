/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 20:06:30 by ksudyn            #+#    #+#             */
/*   Updated: 2025/09/24 18:05:10 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

// int main()
// {
//     const Animal* meta = new Animal();
//     const Animal* j = new Dog();
//     const Animal* i = new Cat();

//     std::cout << j->getType() << " " << std::endl;
//     std::cout << i->getType() << " " << std::endl;
//     i->makeSound(); //will output the cat sound!
//     j->makeSound();
//     meta->makeSound();

//     return 0;
// }

// int main()
// {
//     const Animal* meta = new Animal();
//     const Animal* j = new Dog();
//     const Animal* i = new Cat();

//     std::cout << j->getType() << " " << std::endl;
//     std::cout << i->getType() << " " << std::endl;
//     i->makeSound(); //will output the cat sound!
//     j->makeSound();
//     meta->makeSound();

//     // MUY IMPORTANTE:
//     delete meta;
//     delete j;
//     delete i;

//     return 0;
// }


int main() {
    std::cout << "=== Test with Animal, Dog, Cat ===" << std::endl;

    const Animal* meta = new Animal("Generic");
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " makes sound: ";
    j->makeSound();  // Woof!

    std::cout << i->getType() << " makes sound: ";
    i->makeSound();  // Meow!

    std::cout << meta->getType() << " makes sound: ";
    meta->makeSound();  // generic

    delete meta;
    delete j;
    delete i;

    std::cout << "\n=== Test with WrongAnimal, WrongCat ===" << std::endl;

    const WrongAnimal* wrong = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << wrong->getType() << " makes sound: ";
    wrong->makeSound(); // Some wrong animal sound

    std::cout << wrongCat->getType() << " makes sound: ";
    wrongCat->makeSound(); // ALSO Some wrong animal sound, no virtual!

    delete wrong;
    delete wrongCat;

    return 0;
}

// WrongCat imprime el sonido de WrongAnimal, aunque es un WrongCat.

// Esto sucede porque makeSound() no es virtual.

// El compilador llama siempre a la función de la clase del puntero (WrongAnimal*), no al tipo real del objeto.

// Los constructores y destructores funcionan igual, pero el sonido no refleja el tipo real