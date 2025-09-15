/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 20:11:53 by ksudyn            #+#    #+#             */
/*   Updated: 2025/09/15 20:29:44 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include "Weapon.hpp"

class HumanB
{
    private:
        std::string name;
        Weapon& weapon;
    public:
        HumanB( std::string name);
        ~HumanB(void);
        void setWeapon(Weapon& weapon);
        void attack() const;
};