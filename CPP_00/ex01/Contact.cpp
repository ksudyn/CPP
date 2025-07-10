/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 19:31:44 by ksudyn            #+#    #+#             */
/*   Updated: 2025/07/10 17:24:08 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact::Contact(void)
{
    std::cout << "Contact Constructor" <<std::endl;
}
Contact::~Contact(void)
{
    std::cout << "Contact Destructor" <<std::endl;
}

void Contact:: print_table_contact(void)
{
	std::cout << "First_name: " << this->first_name <<std::endl;
	std::cout << "Last_name: " << this->last_name <<std::endl;
	std::cout << "Nickname: " << this->nick_name <<std::endl;
	std::cout << "Phone_number: " << this->phone_number <<std::endl;
	std::cout << "Dark_secret: " << this->dark_secret <<std::endl;
}

int	Contact:: check_num_phone(const char *number)
{
	int i;

	if (strlen(number) != 9)
	{
		std::cout << "Wrong phone number" <<std::endl;
		return(1);
	}
	i = 0;
	while (number[i] != '\0')
	{
		if (!(number[i] >= '0' && number[i] <= '9'))
		{
			std::cout << "Wrong phone number" <<std::endl;
			return (1);
		}
		i++;
	}
	this->phone_number = atol(number);
	return (0);
}

void Contact:: print_col(std::string str,  int len_str)
{
	int spaces;
	int j = 0;
	int i = 0;

	spaces = 10 - len_str;
	while (i < spaces)
	{
		std::cout << " ";
		i++;
	}
	while (j < 9 && j < len_str)
	{
		std::cout << str[j++];
	}
	if (len_str >= 10)
		std::cout << ".";
}

void Contact:: print_contact(int i)
{
	std::stringstream index;

	index << (i +  1);
	print_col(index.str(), 1);
	std::cout << "|";
	print_col(this->first_name, first_name.length());
	std::cout << "|";
	print_col(this->last_name, last_name.length());
	std::cout << "|";
	print_col(this->nick_name, nick_name.length());
	std::cout << "\n";
}

int	Contact:: dat_contact(int *num_contact)
{
	std::string	input[5];
	std::string	types[5];

	types[0] = "    First_name";
	types[1] = "    Last_name";
	types[2] = "    Nickname";
	types[3] = "    Phone_number";
	types[4] = "    Dark_secret";
	for (size_t i = 0; i < 5; i++)
	{
		std::cout << types[i] << ": ";
		std::getline(std::cin, input[i]);
		if (std::cin.eof())
		{
			std::cout << "\nEOF" <<std::endl;
			return (1);
		}
		if (input[i].empty())
		{
			std::cout << "Empty contact info" <<std::endl;
			(*num_contact)--;
			return (0);
		}
		if (i == 3)
		{
			if (check_num_phone(input[3].c_str()) == 1)
			{
				(*num_contact)--;
				return (0);
			}
		}
	}
	this->first_name = input[0];
	this->last_name = input[1];
	this->nick_name = input[2];
	this->dark_secret = input[4];
	return (0);
}