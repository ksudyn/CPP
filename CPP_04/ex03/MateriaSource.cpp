/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 19:45:06 by ksudyn            #+#    #+#             */
/*   Updated: 2025/09/26 20:17:22 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void )
{
	std::cout << "MateriaSource Constructor" << std::endl;
    for (int i = 0; i < 4; i++)
        materias[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource Destructor" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (materias[i]) delete materias[i];
    }
}

MateriaSource::MateriaSource( const MateriaSource& other )
{
	std::cout << "Copy MateriaSource Constructor called" << std::endl;
	*this = other;
}

void MateriaSource::learnMateria(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (!materias[i])
        {
            materias[i] = m->clone(); // guardas copia
            return;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i=0;i<4;i++)
    {
        if (materias[i] && materias[i]->getType() == type)
            return materias[i]->clone();
    }
    return NULL;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
    if (this != &other)
    {
        for (int i = 0; i < 4; i++)
        {
            if (materias[i]) { delete materias[i]; materias[i] = NULL; }
            if (other.materias[i]) materias[i] = other.materias[i]->clone();
        }
    }
    return *this;
}