/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 19:45:06 by ksudyn            #+#    #+#             */
/*   Updated: 2025/10/02 17:30:30 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void )
{
	std::cout << "MateriaSource Constructor" << std::endl;
    for (int i = 0; i < 4; i++)
        _materias[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource Destructor" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (_materias[i])
            delete _materias[i];
    }
}

MateriaSource::MateriaSource( const MateriaSource& other )
{
	std::cout << "Copy MateriaSource Constructor called" << std::endl;
	for (size_t i = 0; i < 4; i++)
	{
		if (other._materias[i])
		{
			this->_materias[i] = other._materias[i]->clone();
		}
		else
			this->_materias[i] = 0;
		
	}
}

void MateriaSource::learnMateria(AMateria* m)
{
    if(!m)
        return;
    for (int i = 0; i < 4; i++)
    {
        if (this->_materias[i] == 0)
        {
            this->_materias[i] = m->clone(); // guardas copia
            delete m;
            return;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i] && this->_materias[i]->getType() == type)
		{
			return this->_materias[i]->clone();
		}
	}
    return NULL;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
    if (this != &other)
    {
        for (int i = 0; i < 4; i++)
        {
            if (_materias[i])
            {
                delete _materias[i];
                _materias[i] = NULL;
            }
            if (other._materias[i])
                _materias[i] = other._materias[i]->clone();
        }
    }
    return *this;
}