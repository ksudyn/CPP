/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 20:24:06 by ksudyn            #+#    #+#             */
/*   Updated: 2025/10/02 15:38:20 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
		Brain* brain;
		//Qué es: un puntero privado a un Brain.
		//Por qué: el enunciado te dice “Dog and Cat will have a private Brain* attribute”
    public:
	    Cat();
	    ~Cat();
    	Cat(const Cat&  other);
    	Cat& operator=(const Cat& other);

        void makeSound() const;
    	void searchBrain() const;
};

#endif