/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 15:13:42 by ksudyn            #+#    #+#             */
/*   Updated: 2025/10/02 15:14:50 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_H
#define AANIMAL_H

#include "iostream"

class AAnimal
{
    protected:
        std::string type;
    public:
            // Constructores y destructor
        AAnimal();                                // constructor por defecto
        AAnimal(const std::string &typ);          // constructor con tipo
        AAnimal(const AAnimal &other);             // constructor copia
        AAnimal &operator=(const AAnimal &other);  // asignación
        virtual ~AAnimal();                       // destructor virtual para polimorfismo

        // Métodos
        std::string getType() const;             // getter del tipo
        //Se pone const porque Este método no va a modificar ningún atributo del objeto
        virtual void makeSound() const = 0;          // método virtual puro
        // Ya no se necesita la implementacion de esta funcion
        // Porque ahora makeSound() es virtual pura (= 0) en la clase abstracta.
        // Animal no tiene implementación, solo declara la función
    };

#endif