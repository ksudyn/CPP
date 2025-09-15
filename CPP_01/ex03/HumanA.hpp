/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 20:11:35 by ksudyn            #+#    #+#             */
/*   Updated: 2025/09/15 20:29:46 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include "Weapon.hpp"
class HumanA
{
    private:
        std::string name;
        Weapon& weapon;
    public:
        HumanA(std::string name, Weapon& weapon);
        ~HumanA(void);
        void attack() const;
};