/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 15:54:29 by ksudyn            #+#    #+#             */
/*   Updated: 2025/09/24 16:36:16 by ksudyn           ###   ########.fr       */
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