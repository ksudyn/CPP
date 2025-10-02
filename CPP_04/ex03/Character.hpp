/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 19:48:52 by ksudyn            #+#    #+#             */
/*   Updated: 2025/10/02 17:31:17 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
#include "iostream"
# include "ICharacter.hpp"
#include "AMateria.hpp"

class AMateria;

class Character : public ICharacter
{
    private:
        std::string name;
	    AMateria* materias[4];
    public:
        Character();
        ~Character();
        Character(std::string name);
        Character(const Character& other);
        Character& operator=(const Character& other);

        std::string const & getName() const;
        AMateria* getMateria(int idx);
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};


#endif