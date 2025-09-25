/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 19:48:24 by ksudyn            #+#    #+#             */
/*   Updated: 2025/09/25 20:33:31 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( void )
{
	std::cout << "AMateria Constructor" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "AMateria Destructor" << std::endl;
}

AMateria::AMateria( std::string const & type )
{
	std::cout << "AMateria Constructor called" << std::endl;
	this->type = type;
}

AMateria::AMateria( const AMateria& other )
{
	std::cout << "Copy AMateria Constructor called" << std::endl;
	*this = other;
}

AMateria& AMateria::operator=( const AMateria& other )
{
	std::cout << "Copy AMateria Assigment Operator called" << std::endl;
	this->type = other.type;
	return (*this);
}


std::string const & AMateria::getType() const
{
	return (this->type);
}

void AMateria::use(ICharacter& target)
{
    void;
}