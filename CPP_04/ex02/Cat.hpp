/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 20:24:06 by ksudyn            #+#    #+#             */
/*   Updated: 2025/10/02 15:20:35 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
    private:
		Brain* brain;
    public:
	    Cat();
	    ~Cat();
    	Cat(const Cat&  other);
    	Cat& operator=(const Cat& other);

        void makeSound() const;
		void searchBrain() const;
};

#endif