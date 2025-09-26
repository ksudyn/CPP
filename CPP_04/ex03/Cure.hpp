/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 19:49:09 by ksudyn            #+#    #+#             */
/*   Updated: 2025/09/26 17:44:17 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "iostream"
# include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
    private:

    public:
        Cure();
        ~Cure();
        Cure(const Cure& other);
        Cure& operator=(const Cure& other);

        AMateria* clone() const;
	    void use(ICharacter& target);

};
#endif