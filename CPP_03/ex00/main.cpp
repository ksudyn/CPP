/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 19:55:43 by ksudyn            #+#    #+#             */
/*   Updated: 2025/09/22 17:27:03 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap("CL4P");
    clap.attack("Enemy");   // Reduce energía y muestra mensaje
    clap.takeDamage(3);    // Reduce vida y muestra mensaje
    clap.beRepaired(5);    // Aumenta vida y gasta energía
    clap.attack("Skag");
    return 0;
}
