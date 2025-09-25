/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 16:02:08 by ksudyn            #+#    #+#             */
/*   Updated: 2025/09/25 17:02:03 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    //std::cout << "Brain Constructor" << std::endl;
}

Brain::Brain(const Brain& other)
{
    //std::cout << "Brain Copy Constructor" << std::endl;
    *this = other;
}

Brain& Brain::operator=(const Brain& other)
{
    //std::cout << "Brain Copy Assignment" << std::endl;
    if (this != &other) {
        for (int i = 0; i < 100; ++i)
            ideas[i] = other.ideas[i];
    }
    return *this;
}

Brain::~Brain()
{
    //std::cout << "Brain Destructor" << std::endl;
}

void Brain::setIdea(int index, const std::string& idea)
{
    if (index >= 0 && index < 100)
        ideas[index] = idea;
}//Permite guardar una idea en la posición index

std::string Brain::getIdea(int index) const
{
    if (index >= 0 && index < 100)
        return ideas[index];
    return "";
}//Devuelve la idea guardada en index.
