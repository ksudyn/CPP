/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 20:24:06 by ksudyn            #+#    #+#             */
/*   Updated: 2025/09/24 20:24:09 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
    private:
    
    public:
	    Cat();
	    ~Cat();
    	Cat(const Cat&  other);
    	Cat& operator=(const Cat& other);

        void makeSound() const;
};

#endif