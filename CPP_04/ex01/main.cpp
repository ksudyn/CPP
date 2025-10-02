/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <ksudyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 20:24:54 by ksudyn            #+#    #+#             */
/*   Updated: 2025/10/02 15:43:52 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	Animal* Array[10];
	Dog A;
	Cat B;
	Dog C;
	Cat D;
	C = A;
	D = B;
	
	A.searchBrain();
	B.searchBrain();
	C.searchBrain();
	D.searchBrain();
	std::cout << std::endl;
	for (size_t i = 0; i < 10; i++)
	{
		if(i < 5)
			Array[i] = new Dog(A);
		else
			Array[i] = new Cat(B);
	}
	for (size_t i = 0; i < 10; i++)
	{
		Array[i]->searchBrain();
	}	
	for (size_t i = 0; i < 10; i++)
		delete Array[i];
	
}