/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 20:24:54 by ksudyn            #+#    #+#             */
/*   Updated: 2025/09/25 17:17:53 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    std::cout << "=== Test with Dog and Cat ===" << std::endl;

    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " makes sound: ";
    j->makeSound();  // Woof!

    std::cout << i->getType() << " makes sound: ";
    i->makeSound();  // Meow!

    delete j;
    delete i;

    return 0;
}

// Lo único que sí cambia es que ahora no puedes hacer esto
// const Animal* meta = new Animal(); // ❌ error: clase abstracta
