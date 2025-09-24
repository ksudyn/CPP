/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 15:21:31 by ksudyn            #+#    #+#             */
/*   Updated: 2025/09/24 20:25:30 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include "iostream"

class Animal
{
    protected:
        std::string type;
    public:
            // Constructores y destructor
        Animal();                                // constructor por defecto
        Animal(const std::string &typ);          // constructor con tipo
        Animal(const Animal &other);             // constructor copia
        Animal &operator=(const Animal &other);  // asignación
        virtual ~Animal();                       // destructor virtual para polimorfismo

        // Métodos
        std::string getType() const;             // getter del tipo
        //Se pone const porque Este método no va a modificar ningún atributo del objeto
        virtual void makeSound() const;          // método virtual normal
};

#endif