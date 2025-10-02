/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 16:02:08 by ksudyn            #+#    #+#             */
/*   Updated: 2025/10/02 15:37:45 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    //std::cout << "Brain Constructor" << std::endl;
    for (size_t i = 0; i < 100; i++)
		this->ideas[i] = "Default idea";
}

Brain::Brain(const Brain& other)
{
    //std::cout << "Brain Copy Constructor" << std::endl;
    for (size_t i = 0; i < 100; i++)
	{
		this->ideas[i] = other.ideas[i];
	}
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
