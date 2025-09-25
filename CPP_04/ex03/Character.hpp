/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 19:48:52 by ksudyn            #+#    #+#             */
/*   Updated: 2025/09/25 20:06:09 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>

class Character
{
    private:

    public:
        Character();
        ~Character();
        Character(std::string name);
        Character(const Character& other);
        Character& operator=(const Character& other);

};


#endif