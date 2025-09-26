/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 19:49:26 by ksudyn            #+#    #+#             */
/*   Updated: 2025/09/26 17:44:28 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "iostream"
# include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
    private:

    public:
        Ice();
        ~Ice();
        Ice(const Ice& other);
        Ice& operator=(const Ice& other);

        AMateria* clone() const;
	    void use(ICharacter& target);
};

#endif