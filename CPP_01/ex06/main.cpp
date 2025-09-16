/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 20:15:05 by ksudyn            #+#    #+#             */
/*   Updated: 2025/09/16 20:30:16 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

enum Level
{
    DEBUG,
    INFO,
    WARNING,
    ERROR,
    UNKNOWN
};

Level getLevel(std::string level)
{
    if (level == "DEBUG") return DEBUG;
    if (level == "INFO") return INFO;
    if (level == "WARNING") return WARNING;
    if (level == "ERROR") return ERROR;
    return UNKNOWN;
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Usage: ./harlFilter <LEVEL>" << std::endl;
        return 1;
    }

    Harl harl;
    Level level = getLevel(argv[1]);

    switch(level)
    {
        case DEBUG:
            std::cout << "[ DEBUG ]" << std::endl;
            harl.complain("DEBUG");
            [[fallthrough]]; // mostrar todos los siguientes niveles
        case INFO:
            std::cout << "[ INFO ]" << std::endl;
            harl.complain("INFO");
            [[fallthrough]];
        case WARNING:
            std::cout << "[ WARNING ]" << std::endl;
            harl.complain("WARNING");
            [[fallthrough]];
        case ERROR:
            std::cout << "[ ERROR ]" << std::endl;
            harl.complain("ERROR");
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
    }

    return 0;
}