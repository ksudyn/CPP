/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 17:40:49 by ksudyn            #+#    #+#             */
/*   Updated: 2025/09/12 18:10:49 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include "string.h"
# include "sstream"
# include "iostream"
# include "sstream"

class Zombie
{
    private:
		std::string	name;

    public:
        Zombie( void );
		    ~Zombie( void );
        void announce(void);
        void put_name( std::string name );
    
};

Zombie*	newZombie( std::string name );
Zombie*	zombieHorde( int N, std::string name );

#endif