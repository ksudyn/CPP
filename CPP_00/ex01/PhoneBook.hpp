/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 19:37:11 by ksudyn            #+#    #+#             */
/*   Updated: 2025/07/10 17:25:33 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>   // cout, cin
#include <string.h>     // std::string
#include <iomanip>    // setw, right
#include <limits>     // para limpiar el input buffer

//....Contact....//
//Representa a una persona en tu agenda.
//Guarda datos de una persona: nombre, apellido, apodo, teléfono, secreto.
//Tiene funciones para establecer (guardar) esos datos y para mostrarlos.
class Contact
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nick_name;
		long	phone_number;
		std::string	dark_secret;
    public:
		Contact(void);
		~Contact(void);
		void Contact:: print_table_contact(void);
		int	Contact:: check_num_phone(const char *number);
		void Contact:: print_col(std::string str,  int len_str);
		void Contact:: print_contact(int i);
		int	Contact:: dat_contact(int *num_contact);
};
//Los atributos son private porque no deben ser modificados directamente desde fuera.
//Las funciones públicas son la "interfaz" para interactuar con esos datos.


//....PhoneBook....//
class PhoneBook
{
	private:

	public:

};


#endif

//Una clase es como un molde para crear objetos que contienen datos
//(atributos) y funciones (métodos) que trabajan con esos datos.
// class NombreClase {
// private:
//     // variables que solo la clase puede usar internamente
// public:
//     // funciones que otros pueden usar
// };
