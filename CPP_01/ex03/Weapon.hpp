/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 19:32:26 by ksudyn            #+#    #+#             */
/*   Updated: 2025/09/12 20:01:30 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

# include "iostream"

class Weapon
{
    private:
        std::string type;
    public:
        Weapon(std::string t);
        ~Weapon( void );
};

#endif