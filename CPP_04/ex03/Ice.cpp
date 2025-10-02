/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 19:43:55 by ksudyn            #+#    #+#             */
/*   Updated: 2025/10/02 17:30:53 by ksudyn           ###   ########.fr       */
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
}

Ice& Ice::operator=(const Ice& other)
{
    std::cout << "Copy Ice Assigment Operator called" << std::endl;
    AMateria::operator=(other);
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

