/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 19:21:50 by ksudyn            #+#    #+#             */
/*   Updated: 2025/09/16 20:09:31 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my burger. I really do!" << std::endl;
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
}

void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
}

void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*funcs[])(void) =
    {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };

    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == level)
        {
            (this->*funcs[i])();
            return;
        }
    }
    std::cout << "Unknown level" << std::endl;
}

// &Harl::debug
// Esto no hace que Harl diga nada todavía.
// Solo toma la dirección de memoria de la función debug() dentro de Harl.
// Es como si tomaras el control remoto de esa acción y lo guardaras en una caja

// void (Harl::*funcs[])(void) =
// {
//     &Harl::debug,
//     &Harl::info,
//     &Harl::warning,
//     &Harl::error
// };
// funcs es como una caja con 4 controles remotos.
// Cada control apunta a una acción que Harl puede hacer.
// Todavía ninguna acción se ha ejecutado, solo tenemos los controles listos.

// (this->*funcs[i])();
// this → el Harl que tienes en tu programa (el robot real).
// *funcs[i] → el control que elegiste (por ejemplo, debug).
// (this->*funcs[i])() → le dices al robot que use ese control ahora, es decir: ejecuta la función

// Harl = un robot
// debug() = una acción del robot
// &Harl::debug = el control remoto de esa acción
// funcs[] = caja con todos los controles remotos
// (this->*funcs[i])() = presionar el botón del control remoto para que el robot haga la acción