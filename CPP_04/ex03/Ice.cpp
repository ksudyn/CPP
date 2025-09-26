/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 19:43:55 by ksudyn            #+#    #+#             */
/*   Updated: 2025/09/26 17:42:17 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    std::cout << "Ice Constructor" << std::endl;
}

Ice::~Ice()
{
    std::cout << "Ice Destructor" << std::endl;
}

Ice::Ice(const Ice& other) : AMateria(other)
{
    std::cout << "Ice Constructor called" << std::endl;
    *this = other;
}

Ice& Ice::operator=(const Ice& other)
{
    std::cout << "Copy Ice Assigment Operator called" << std::endl;
    this->type = other.type;
	return (*this);
}

AMateria* Ice::clone() const
{
    return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
