/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 17:40:49 by ksudyn            #+#    #+#             */
/*   Updated: 2025/09/12 18:09:10 by ksudyn           ###   ########.fr       */
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
        Zombie( std::string name );
		    ~Zombie( void );
        void announce(void);
    
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif