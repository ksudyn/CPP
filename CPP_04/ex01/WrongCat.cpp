/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 15:55:02 by ksudyn            #+#    #+#             */
/*   Updated: 2025/09/25 15:55:04 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout << "WrongCat Constructor" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
    std::cout << "WrongCat Copy Constructor" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
    std::cout << "WrongCat Copy Assignment" << std::endl;
    if (this != &other)
        WrongAnimal::operator=(other);
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << type << ": Meow? (wrong)" << std::endl;
}
