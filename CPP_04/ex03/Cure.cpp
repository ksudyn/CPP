/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 19:44:04 by ksudyn            #+#    #+#             */
/*   Updated: 2025/09/26 17:42:30 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    std::cout << "Cure Constructor" << std::endl;
}

Cure::~Cure()
{
    std::cout << "Cure Destructor" << std::endl;
}

Cure::Cure(const Cure& other) : AMateria(other)
{
    std::cout << "Cure Constructor called" << std::endl;
    *this = other;
}

Cure& Cure::operator=(const Cure& other)
{
    std::cout << "Copy Cure Assigment Operator called" << std::endl;
    this->type = other.type;
	return (*this);
}


AMateria* Cure::clone() const
{
    return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
